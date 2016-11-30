﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using NUnit.Framework;
using Reko.Core;
using Reko.Core.Configuration;
using Reko.Core.Types;
using Reko.ImageLoaders.Elf;
using Rhino.Mocks;
using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Globalization;
using System.Linq;
using System.Text;

namespace Reko.UnitTests.ImageLoaders.Elf
{
    [TestFixture]
    public class ElfLoader32Tests
    {
        private MockRepository mr;
        private byte[] bytes;
        private List<Elf32_PHdr> programHeaders;
        private List<ElfSection> sections;
        private IPlatform platform;
        private ElfLoader32 el32;
        private Elf32_EHdr eih;
        private ServiceContainer sc;
        private ElfImageLoader eil;
        private Program program;
        private IProcessorArchitecture arch;

        [SetUp]
        public void Setup()
        {
            mr = new MockRepository();
            programHeaders = new List<Elf32_PHdr>();
            sections = new List<ElfSection>();
            platform = mr.Stub<IPlatform>();
            this.sc = new ServiceContainer();
            var cfgSvc = mr.Stub<IConfigurationService>();
            this.arch = mr.Stub<IProcessorArchitecture>();
            arch.Stub(a => a.PointerType).Return(PrimitiveType.Pointer32);
            cfgSvc.Stub(c => c.GetArchitecture("x86-protected-32")).Return(arch);
            cfgSvc.Stub(c => c.GetArchitecture("mips-be-32")).Return(arch);
            sc.AddService<IConfigurationService>(cfgSvc);
        }

        private void Given_RawImage(string bytes)
        {
            this.bytes = bytes.Split(' ')
                .Select(s => byte.Parse(s, NumberStyles.HexNumber))
                .ToArray();
        }

        private void Given_ProgramHeader(
            ProgramHeaderType type,
            uint imageOffset,
            uint virtualAddress,
            uint fileSize,
            uint loadedSize)
        {
            programHeaders.Add(new Elf32_PHdr
            {
                p_type = type,
                p_offset = imageOffset,
                p_vaddr = virtualAddress,
                p_filesz = fileSize,
                p_pmemsz = loadedSize,
            });
        }

        private void Given_Section(string name, uint addr, string mode)
        {
            sections.Add(new ElfSection
            {
                Name = name,
                Address = Address.Ptr32(addr),
                Flags = AccessFlags(mode)
            });
        }

        private uint AccessFlags(string mode)
        {
            uint flags = 0;
            foreach (var ch in mode)
            {
                switch (ch)
                {
                case 'w': flags |= ElfLoader.SHF_WRITE; break;
                case 'x': flags |= ElfLoader.SHF_EXECINSTR; break;
                }
            }
            return flags;
        }

        private void Given_BE32_GOT(params uint[] aPointers)
        {
            var writer = new BeImageWriter();
            foreach (var ptr in aPointers)
            {
                writer.WriteBeUInt32(ptr);
            }
            var mem = new MemoryArea(Address.Ptr32(0x10000000), writer.ToArray());
            program.SegmentMap.AddSegment(mem,  ".got", AccessMode.ReadWriteExecute);
            arch.Stub(a => a.CreateImageReader(
                Arg<MemoryArea>.Is.NotNull,
                Arg<Address>.Is.Equal(mem.BaseAddress)))
                .Return(new BeImageReader(mem, 0));
        }

        private void Given_ImageHeader(ElfMachine machine)
        {
            eih = new Elf32_EHdr
            {
                e_machine = (ushort)machine,
            };
        }

        private void When_CreateLoader32(bool big_endian)
        {
            this.eil = new ElfImageLoader(sc, "foo", this.bytes);
            this.el32 = new ElfLoader32(eil, eih, this.bytes, big_endian ? ElfLoader.ELFDATA2MSB : ElfLoader.ELFDATA2LSB);
            el32.ProgramHeaders.AddRange(programHeaders);
            el32.Sections.AddRange(sections);
        }

        [Test]
        public void EL32_DisjointSegments()
        {
            Given_RawImage("C0 DE 00 00 00 00 00 00 DA 7A 00 00");
            Given_ImageHeader(ElfMachine.EM_386);
            Given_ProgramHeader(ProgramHeaderType.PT_LOAD, 0, 0x1000, 8, 8);
            Given_ProgramHeader(ProgramHeaderType.PT_LOAD, 8, 0x2000, 4, 16);
            Given_Section(".text", 0x1000, "rx");
            Given_Section(".data", 0x2000, "rw");
            Given_Section(".bss", 0x2008, "rw");
            mr.ReplayAll();

            When_CreateLoader32(false);
            var segmentMap = el32.LoadImageBytes(platform, this.bytes, Address.Ptr32(0x1000));

            ImageSegment segText;
            Assert.IsTrue(segmentMap.TryFindSegment(Address.Ptr32(0x1001), out segText));
            Assert.AreEqual(".text", segText.Name);
            Assert.AreEqual(8, segText.Size);
        }

        private Tuple<Address, uint> ElfSeg(uint addr, uint size)
        {
            return Tuple.Create(Address.Ptr32(addr), size);
        }

        [Test]
        public void El32_SegmentSequence()
        {
            var mems = ElfLoader32.AllocateMemoryAreas(new[]
            {
                ElfSeg(1000, 10)
            });
            Assert.AreEqual(1, mems.Count);
        }

        [Test]
        public void El32_SegmentSequence_Disjoint()
        {
            var mems = ElfLoader32.AllocateMemoryAreas(new[]
            {
                ElfSeg(1000, 10),
                ElfSeg(1020, 10),
            });
            Assert.AreEqual(2, mems.Count);
        }

        [Test]
        public void El32_SegmentSequence_Overlap()
        {
            var mems = ElfLoader32.AllocateMemoryAreas(new[]
            {
                ElfSeg(1000, 20),
                ElfSeg(1010, 20),
            });
            Assert.AreEqual(1, mems.Count);
            Assert.AreEqual(30, mems.Values[0].Length);
        }

        [Test]
        public void El32_SegmentSequence_Overlap3()
        {
            var mems = ElfLoader32.AllocateMemoryAreas(new[]
            {
                ElfSeg(1000, 20),
                ElfSeg(1010, 20),
                ElfSeg(1020, 20),
            });
            Assert.AreEqual(1, mems.Count);
            Assert.AreEqual(40, mems.Values[0].Length);
        }

        [Test]
        public void El32_SegmentSequence_Adjacent()
        {
            var mems = ElfLoader32.AllocateMemoryAreas(new[]
            {
                ElfSeg(1000, 10),
                ElfSeg(1010, 20),
            });
            Assert.AreEqual(1, mems.Count);
            Assert.AreEqual(30, mems.Values[0].Length);
        }

        [Test]
        public void El32_Symbols_ReconstructPlt_BE()
        {
            var syms = new ImageSymbol[]
            {
                new ImageSymbol(Address.Ptr32(0x04000000)) { Name = "strcpy", Type = SymbolType.Procedure },
                new ImageSymbol(Address.Ptr32(0x04000010)) { Name = "strcmp", Type = SymbolType.Procedure },
            }.ToSortedList(k => k.Address);

            Given_ImageHeader(ElfMachine.EM_MIPS);
            Given_Program();
            Given_BE32_GOT(0x0000000, 0x00000000, 0x04000010, 0x04000000);
            mr.ReplayAll();

            When_CreateLoader32(true);

            el32.LocateGotPointers(program, syms);
            Assert.AreEqual("strcmp_GOT", syms[Address.Ptr32(0x10000008)].Name);
            Assert.AreEqual("strcpy_GOT", syms[Address.Ptr32(0x1000000C)].Name);
        }

        private void Given_Program()
        {
            this.program = new Program(new SegmentMap(Address.Ptr32(0x10000)), this.arch, this.platform);
        }
    }
}