﻿#region License
/* 
 * Copyright (C) 1999-2015 John Källén.
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

using Reko.Core;
using Reko.Core.Code;
using Reko.Core.Expressions;
using Reko.Core.Machine;
using Reko.Core.Rtl;
using Reko.Core.Serialization;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Reko.Environments.C64
{
    /// <summary>
    /// Oh why the hell not. C64 Basic can be interpreted as a machine
    /// language of sorts.
    /// </summary>
    public class C64Basic : ProcessorArchitecture
    {
        private SortedList<ushort, C64BasicInstruction> prog;
        private RegisterStorage stackRegister = new RegisterStorage("sp", 1, PrimitiveType.Ptr16);

        public C64Basic(SortedList<ushort, C64BasicInstruction> prog)
        {
            this.prog = prog;
            this.PointerType = PrimitiveType.Ptr16;
            this.InstructionBitSize = 8;
            this.StackRegister = stackRegister;
        }

        public override IEnumerable<MachineInstruction> CreateDisassembler(ImageReader imageReader)
        {
            int i = prog.IndexOfKey(imageReader.Address.ToUInt16());
            if (i < 0)
                yield break;
            for (; i < prog.Count; ++i)
            {
                yield return prog.Values[i];
            }
        }

        public override ImageReader CreateImageReader(LoadedImage img, Address addr)
        {
            return new LeImageReader(img, addr);
        }

        public override ImageReader CreateImageReader(LoadedImage img, ulong off)
        {
            throw new NotImplementedException();
        }

        public override IEqualityComparer<MachineInstruction> CreateInstructionComparer(Normalize norm)
        {
            throw new NotImplementedException();
        }

        public override ProcessorState CreateProcessorState()
        {
            return new C64BasicState(this);
        }

        public override Core.Lib.BitSet CreateRegisterBitset()
        {
            return new Core.Lib.BitSet(0x10);
        }

        public override IEnumerable<RtlInstructionCluster> CreateRewriter(ImageReader rdr, ProcessorState state, Frame frame, IRewriterHost host)
        {
            return new C64BasicRewriter(this, rdr.Address, prog, host);
        }

        public override IEnumerable<Address> CreatePointerScanner(ImageMap map, ImageReader rdr, IEnumerable<Address> knownAddresses, PointerScannerFlags flags)
        {
            throw new NotImplementedException();
        }

        public override ProcedureSerializer CreateProcedureSerializer(ISerializedTypeVisitor<DataType> typeLoader, string defaultCc)
        {
            throw new NotSupportedException();  //$Makes no sense in C64 Basic!
        }

        public override RegisterStorage GetRegister(int i)
        {
            throw new NotImplementedException();
        }

        public override RegisterStorage GetRegister(string name)
        {
            throw new NotImplementedException();
        }

        public override RegisterStorage[] GetRegisters()
        {
            return new RegisterStorage[0];
        }

        public override bool TryGetRegister(string name, out RegisterStorage reg)
        {
            throw new NotImplementedException();
        }

        public override FlagGroupStorage GetFlagGroup(uint grf)
        {
            throw new NotImplementedException();
        }

        public override FlagGroupStorage GetFlagGroup(string name)
        {
            throw new NotImplementedException();
        }

        public override Expression CreateStackAccess(Frame frame, int cbOffset, DataType dataType)
        {
            throw new NotImplementedException();
        }

        public override Address ReadCodeAddress(int size, ImageReader rdr, ProcessorState state)
        {
            throw new NotImplementedException();
        }

        public override Address MakeAddressFromConstant(Constant c)
        {
            return Address.Ptr16(c.ToUInt16());
        }

        public override string GrfToString(uint grf)
        {
            throw new NotImplementedException();
        }



        public override bool TryParseAddress(string txtAddress, out Address addr)
        {
            return Address.TryParse16(txtAddress, out addr);
        }


        public class C64BasicState : ProcessorState
        {
            private C64Basic arch;

            public C64BasicState(C64Basic arch)
            {
                this.arch = arch;
            }

            public override IProcessorArchitecture Architecture { get { return arch; } }

            public override ProcessorState Clone()
            {
                return new C64BasicState(arch);
            }

            public override Core.Expressions.Constant GetRegister(RegisterStorage r)
            {
                throw new NotImplementedException();
            }

            public override void SetRegister(RegisterStorage r, Core.Expressions.Constant v)
            {
            }

            public override void SetInstructionPointer(Address addr)
            {
            }

            public override void OnProcedureEntered()
            {
            }

            public override void OnProcedureLeft(ProcedureSignature procedureSignature)
            {
            }

            public override CallSite OnBeforeCall(Identifier stackReg, int returnAddressSize)
            {
                return new CallSite(2, 0);
            }

            public override void OnAfterCall(Core.Expressions.Identifier stackReg, ProcedureSignature sigCallee, Core.Expressions.ExpressionVisitor<Core.Expressions.Expression> eval)
            {
            }
        }
    }
}