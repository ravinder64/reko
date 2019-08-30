// PIC18Legacy.h
// Generated by decompiling PIC18Legacy.hex
// using Reko decompiler version 0.8.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1 byte b0001) (C7 byte b00C7) (C8 byte b00C8) (C9 byte b00C9))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_12: (fn void (byte, Eq_15, word24))
	T_12 (in fn00000E : ptr32)
	T_13 (in signature of fn00000E : void)
Eq_15: (union "Eq_15" (word16 u0) ((ptr32 byte) u1))
	T_15 (in FSR0 : Eq_15)
	T_17 (in 0x0000 : word16)
	T_130 (in FSR0 + 0x0001 : word16)
Eq_20: (fn void (word24, byte))
	T_20 (in __tblrd : ptr32)
	T_21 (in signature of __tblrd : void)
	T_29 (in __tblrd : ptr32)
	T_44 (in __tblrd : ptr32)
	T_50 (in __tblrd : ptr32)
	T_56 (in __tblrd : ptr32)
	T_62 (in __tblrd : ptr32)
	T_65 (in __tblrd : ptr32)
	T_68 (in __tblrd : ptr32)
	T_71 (in __tblrd : ptr32)
	T_74 (in __tblrd : ptr32)
	T_77 (in __tblrd : ptr32)
	T_83 (in __tblrd : ptr32)
	T_89 (in __tblrd : ptr32)
	T_92 (in __tblrd : ptr32)
	T_116 (in __tblrd : ptr32)
Eq_26: (segment "Eq_26" (C5 byte b00C5))
	T_26 (in 0x00 : byte)
Eq_27: (union "Eq_27" (byte u0) ((memptr (ptr8 Eq_26) byte) u1))
	T_27 (in 0xC5 : byte)
Eq_32: (segment "Eq_32" (C6 byte b00C6))
	T_32 (in 0x00 : byte)
Eq_33: (union "Eq_33" (byte u0) ((memptr (ptr8 Eq_32) byte) u1))
	T_33 (in 0xC6 : byte)
Eq_47: (segment "Eq_47" (C0 byte b00C0))
	T_47 (in 0x00 : byte)
Eq_48: (union "Eq_48" (byte u0) ((memptr (ptr8 Eq_47) byte) u1))
	T_48 (in 0xC0 : byte)
Eq_53: (segment "Eq_53" (C1 byte b00C1))
	T_53 (in 0x00 : byte)
Eq_54: (union "Eq_54" (byte u0) ((memptr (ptr8 Eq_53) byte) u1))
	T_54 (in 0xC1 : byte)
Eq_59: (segment "Eq_59" (C2 byte b00C2))
	T_59 (in 0x00 : byte)
Eq_60: (union "Eq_60" (byte u0) ((memptr (ptr8 Eq_59) byte) u1))
	T_60 (in 0xC2 : byte)
Eq_80: (segment "Eq_80" (C3 byte b00C3))
	T_80 (in 0x00 : byte)
Eq_81: (union "Eq_81" (byte u0) ((memptr (ptr8 Eq_80) byte) u1))
	T_81 (in 0xC3 : byte)
Eq_86: (segment "Eq_86" (C4 byte b00C4))
	T_86 (in 0x00 : byte)
Eq_87: (union "Eq_87" (byte u0) ((memptr (ptr8 Eq_86) byte) u1))
	T_87 (in 0xC4 : byte)
Eq_101: (segment "Eq_101" (C3 byte b00C3))
	T_101 (in 0x00 : byte)
Eq_102: (union "Eq_102" (byte u0) ((memptr (ptr8 Eq_101) byte) u1) ((memptr (ptr8 Eq_104) byte) u2) ((memptr (ptr8 Eq_107) byte) u3))
	T_102 (in 0xC3 : byte)
Eq_104: (segment "Eq_104" (C3 byte b00C3))
	T_104 (in 0x00 : byte)
Eq_107: (segment "Eq_107" (C3 byte b00C3))
	T_107 (in 0x00 : byte)
Eq_111: (segment "Eq_111" (C5 byte b00C5))
	T_111 (in 0x00 : byte)
Eq_112: (union "Eq_112" (byte u0) ((memptr (ptr8 Eq_111) byte) u1))
	T_112 (in 0xC5 : byte)
Eq_122: (segment "Eq_122" (C3 byte b00C3))
	T_122 (in 0x00 : byte)
Eq_123: (union "Eq_123" (byte u0) ((memptr (ptr8 Eq_122) byte) u1) ((memptr (ptr8 Eq_127) byte) u2) ((memptr (ptr8 Eq_131) cu8) u3))
	T_123 (in 0xC3 : byte)
Eq_127: (segment "Eq_127" (C3 byte b00C3))
	T_127 (in 0x00 : byte)
Eq_131: (segment "Eq_131" (C3 cu8 b00C3))
	T_131 (in 0x00 : byte)
Eq_138: (segment "Eq_138" (C4 byte b00C4))
	T_138 (in 0x00 : byte)
Eq_139: (union "Eq_139" (byte u0) ((memptr (ptr8 Eq_138) byte) u1) ((memptr (ptr8 Eq_141) byte) u2) ((memptr (ptr8 Eq_143) byte) u3))
	T_139 (in 0xC4 : byte)
Eq_141: (segment "Eq_141" (C4 byte b00C4))
	T_141 (in 0x00 : byte)
Eq_143: (segment "Eq_143" (C4 byte b00C4))
	T_143 (in 0x00 : byte)
Eq_153: (segment "Eq_153" (C5 byte b00C5))
	T_153 (in 0x00 : byte)
Eq_154: (union "Eq_154" (byte u0) ((memptr (ptr8 Eq_153) byte) u1) ((memptr (ptr8 Eq_158) byte) u2) ((memptr (ptr8 Eq_163) byte) u3))
	T_154 (in 0xC5 : byte)
Eq_158: (segment "Eq_158" (C5 byte b00C5))
	T_158 (in 0x00 : byte)
Eq_160: (segment "Eq_160" (C6 byte b00C6))
	T_160 (in 0x00 : byte)
Eq_161: (union "Eq_161" (byte u0) ((memptr (ptr8 Eq_160) byte) u1) ((memptr (ptr8 Eq_169) byte) u2) ((memptr (ptr8 Eq_171) byte) u3))
	T_161 (in 0xC6 : byte)
Eq_163: (segment "Eq_163" (C5 byte b00C5))
	T_163 (in 0x00 : byte)
Eq_167: (union "Eq_167" (bool u0) (byte u1))
	T_167 (in !(bool) cond(0x00->b00C5) : bool)
Eq_169: (segment "Eq_169" (C6 byte b00C6))
	T_169 (in 0x00 : byte)
Eq_171: (segment "Eq_171" (C6 byte b00C6))
	T_171 (in 0x00 : byte)
Eq_175: (segment "Eq_175" (C4 byte b00C4))
	T_175 (in 0x00 : byte)
Eq_176: (union "Eq_176" (byte u0) ((memptr (ptr8 Eq_175) byte) u1) ((memptr (ptr8 Eq_180) byte) u2))
	T_176 (in 0xC4 : byte)
Eq_180: (segment "Eq_180" (C4 byte b00C4))
	T_180 (in 0x00 : byte)
Eq_184: (struct "Eq_184" (FE byte b00FE))
	T_184 (in FSR2 : (ptr16 Eq_184))
Eq_185: (struct "Eq_185" (0 byte b0000) (1 byte b0001))
	T_185 (in FSR1 : (ptr16 Eq_185))
Eq_194: (segment "Eq_194" (CA byte b00CA))
	T_194 (in 0x00 : byte)
Eq_195: (union "Eq_195" (byte u0) ((memptr (ptr8 Eq_194) byte) u1))
	T_195 (in 0xCA : byte)
Eq_201: (segment "Eq_201" (CA byte b00CA))
	T_201 (in 0x00 : byte)
Eq_202: (union "Eq_202" (byte u0) ((memptr (ptr8 Eq_201) byte) u1) ((memptr (ptr8 Eq_206) byte) u2))
	T_202 (in 0xCA : byte)
Eq_206: (segment "Eq_206" (CA byte b00CA))
	T_206 (in 0x00 : byte)
Eq_225: (union "Eq_225" (word16 u0) ((ptr32 byte) u1))
	T_225 (in FSR0 : Eq_225)
	T_232 (in FSR0 + 0x0001 : word16)
	T_238 (in FSR0 + 0x0001 : word16)
Eq_231: (union "Eq_231" (word16 u0) ((ptr32 byte) u1))
	T_231 (in 0x0001 : word16)
Eq_235: (union "Eq_235" (word16 u0) ((ptr32 byte) u1))
	T_235 (in FSR0 + 0x0000 : word16)
Eq_237: (union "Eq_237" (word16 u0) ((ptr32 byte) u1))
	T_237 (in 0x0001 : word16)
Eq_240: (struct "Eq_240" 0001 (0 ptr32 ptr0000))
	T_240
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in TABLAT : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0001 : ptr16)
  Class: Eq_3
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_4 t0000)))
T_4: (in Data[0x0001:byte] : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0xBF : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in globals->b0001 & 0xBF : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_7: (in Data21[0x0001:byte] : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_8: (in 00014A : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_9: (in Data21 : (arr Eq_240))
  Class: Eq_9
  DataType: (ptr8 (arr Eq_240))
  OrigDataType: (ptr8 (struct (0 (arr T_240) a0000)))
T_10: (in 0x01 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in Data21[0x01] : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_12: (in fn00000E : ptr32)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: (ptr32 (fn T_19 (T_2, T_17, T_18)))
T_13: (in signature of fn00000E : void)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: 
T_14: (in TABLAT : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_15: (in FSR0 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_16: (in TBLPTR : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: word24
T_17: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in 0x000000 : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: word24
T_19: (in fn00000E(TABLAT, 0x0000, 0x000000) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_25 (T_16, T_24)))
T_21: (in signature of __tblrd : void)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: 
T_22: (in  : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: 
T_23: (in  : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: 
T_24: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in 0x00 : byte)
  Class: Eq_26
  DataType: (ptr8 Eq_26)
  OrigDataType: (ptr8 (segment (C5 T_28 t00C5)))
T_27: (in 0xC5 : byte)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: (union (byte u0) ((memptr T_26 (struct (0 byte b0000))) u1))
T_28: (in Data13[0x00:0xC5:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_29: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_31 (T_16, T_30)))
T_30: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_31: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_32: (in 0x00 : byte)
  Class: Eq_32
  DataType: (ptr8 Eq_32)
  OrigDataType: (ptr8 (segment (C6 T_34 t00C6)))
T_33: (in 0xC6 : byte)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: (union (byte u0) ((memptr T_32 (struct (0 byte b0000))) u1))
T_34: (in Data16[0x00:0xC6:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_35: (in TBLPTRL_4 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x06 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in TBLPTRH_46 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x00 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in TBLPTRU_49 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x00 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in Z_17 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in cond(TABLAT) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in SLICE(cond(TABLAT), bool, 2) : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_44: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_46 (T_16, T_45)))
T_45: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_46: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_47: (in 0x00 : byte)
  Class: Eq_47
  DataType: (ptr8 Eq_47)
  OrigDataType: (ptr8 (segment (C0 T_49 t00C0)))
T_48: (in 0xC0 : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: (union (byte u0) ((memptr T_47 (struct (0 byte b0000))) u1))
T_49: (in Data29[0x00:0xC0:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_50: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_52 (T_16, T_51)))
T_51: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_52: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_53: (in 0x00 : byte)
  Class: Eq_53
  DataType: (ptr8 Eq_53)
  OrigDataType: (ptr8 (segment (C1 T_55 t00C1)))
T_54: (in 0xC1 : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (union (byte u0) ((memptr T_53 (struct (0 byte b0000))) u1))
T_55: (in Data31[0x00:0xC1:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_56: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_58 (T_16, T_57)))
T_57: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_58: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_59: (in 0x00 : byte)
  Class: Eq_59
  DataType: (ptr8 Eq_59)
  OrigDataType: (ptr8 (segment (C2 T_61 t00C2)))
T_60: (in 0xC2 : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (union (byte u0) ((memptr T_59 (struct (0 byte b0000))) u1))
T_61: (in Data33[0x00:0xC2:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_62: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_64 (T_16, T_63)))
T_63: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_64: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_65: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_67 (T_16, T_66)))
T_66: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_67: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_68: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_70 (T_16, T_69)))
T_69: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_70: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_71: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_73 (T_16, T_72)))
T_72: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_73: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_74: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_76 (T_16, T_75)))
T_75: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_76: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_77: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_79 (T_16, T_78)))
T_78: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_79: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_80: (in 0x00 : byte)
  Class: Eq_80
  DataType: (ptr8 Eq_80)
  OrigDataType: (ptr8 (segment (C3 T_82 t00C3)))
T_81: (in 0xC3 : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (union (byte u0) ((memptr T_80 (struct (0 byte b0000))) u1))
T_82: (in Data39[0x00:0xC3:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_83: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_85 (T_16, T_84)))
T_84: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_85: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_86: (in 0x00 : byte)
  Class: Eq_86
  DataType: (ptr8 Eq_86)
  OrigDataType: (ptr8 (segment (C4 T_88 t00C4)))
T_87: (in 0xC4 : byte)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union (byte u0) ((memptr T_86 (struct (0 byte b0000))) u1))
T_88: (in Data41[0x00:0xC4:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_89: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_91 (T_16, T_90)))
T_90: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_91: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_92: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_94 (T_16, T_93)))
T_93: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_94: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_95: (in 00C7 : ptr16)
  Class: Eq_95
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_96 t0000)))
T_96: (in Data44[0x00C7:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_97: (in 00C8 : ptr16)
  Class: Eq_97
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_98 t0000)))
T_98: (in Data47[0x00C8:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_99: (in 00C9 : ptr16)
  Class: Eq_99
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_100 t0000)))
T_100: (in Data50[0x00C9:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_101: (in 0x00 : byte)
  Class: Eq_101
  DataType: (ptr8 Eq_101)
  OrigDataType: (ptr8 (segment (C3 T_103 t00C3)))
T_102: (in 0xC3 : byte)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: (union (byte u0) ((memptr T_101 (struct (0 byte b0000))) u1) ((memptr T_104 (struct (0 byte b0000))) u2) ((memptr T_107 (struct (0 byte b0000))) u3))
T_103: (in Data50[0x00:0xC3:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0x00 : byte)
  Class: Eq_104
  DataType: (ptr8 Eq_104)
  OrigDataType: (ptr8 (segment (C3 T_105 t00C3)))
T_105: (in Data55[0x00:0xC3:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_106: (in Z_57 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x00 : byte)
  Class: Eq_107
  DataType: (ptr8 Eq_107)
  OrigDataType: (ptr8 (segment (C3 T_108 t00C3)))
T_108: (in Data55[0x00:0xC3:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in cond(0x00->b00C3) : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in SLICE(cond(0x00->b00C3), bool, 2) : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_111: (in 0x00 : byte)
  Class: Eq_111
  DataType: (ptr8 Eq_111)
  OrigDataType: (ptr8 (segment (C5 T_113 t00C5)))
T_112: (in 0xC5 : byte)
  Class: Eq_112
  DataType: Eq_112
  OrigDataType: (union (byte u0) ((memptr T_111 (struct (0 byte b0000))) u1))
T_113: (in Data19[0x00:0xC5:byte] : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x00 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00->b00C5 == 0x00 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in __tblrd : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_118 (T_16, T_117)))
T_117: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_118: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_119: (in 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in FSR0 + 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Data77[FSR0 + 0x0000:byte] : byte)
  Class: Eq_2
  DataType: Eq_15
  OrigDataType: byte
T_122: (in 0x00 : byte)
  Class: Eq_122
  DataType: (ptr8 Eq_122)
  OrigDataType: (ptr8 (segment (C3 T_124 t00C3)))
T_123: (in 0xC3 : byte)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: (union (byte u0) ((memptr T_122 (struct (0 byte b0000))) u1) ((memptr T_127 (struct (0 byte b0000))) u2) ((memptr T_131 (struct (0 cu8 b0000))) u3))
T_124: (in Data77[0x00:0xC3:byte] : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in 0x01 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in 0x00->b00C3 - 0x01 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in 0x00 : byte)
  Class: Eq_127
  DataType: (ptr8 Eq_127)
  OrigDataType: (ptr8 (segment (C3 T_128 t00C3)))
T_128: (in Data80[0x00:0xC3:byte] : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_129: (in 0x0001 : word16)
  Class: Eq_129
  DataType: (ptr32 byte)
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_130: (in FSR0 + 0x0001 : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_131: (in 0x00 : byte)
  Class: Eq_131
  DataType: (ptr8 Eq_131)
  OrigDataType: (ptr8 (segment (C3 T_132 t00C3)))
T_132: (in Data80[0x00:0xC3:byte] : byte)
  Class: Eq_132
  DataType: cu8
  OrigDataType: byte
T_133: (in cond(0x00->b00C3) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in SLICE(cond(0x00->b00C3), bool, 2) : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_135: (in Data80[0x00:0xC3:byte] : byte)
  Class: Eq_132
  DataType: cu8
  OrigDataType: cu8
T_136: (in 0x00 : byte)
  Class: Eq_132
  DataType: cu8
  OrigDataType: cu8
T_137: (in 0x00->b00C3 < 0x00 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0x00 : byte)
  Class: Eq_138
  DataType: (ptr8 Eq_138)
  OrigDataType: (ptr8 (segment (C4 T_140 t00C4)))
T_139: (in 0xC4 : byte)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (byte u0) ((memptr T_138 (struct (0 byte b0000))) u1) ((memptr T_141 (struct (0 byte b0000))) u2) ((memptr T_143 (struct (0 byte b0000))) u3))
T_140: (in Data59[0x00:0xC4:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0x00 : byte)
  Class: Eq_141
  DataType: (ptr8 Eq_141)
  OrigDataType: (ptr8 (segment (C4 T_142 t00C4)))
T_142: (in Data60[0x00:0xC4:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_143: (in 0x00 : byte)
  Class: Eq_143
  DataType: (ptr8 Eq_143)
  OrigDataType: (ptr8 (segment (C4 T_144 t00C4)))
T_144: (in Data60[0x00:0xC4:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x00 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_146: (in 0x00->b00C4 == 0x00 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in 00C7 : ptr16)
  Class: Eq_147
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_148 t0000)))
T_148: (in Data60[0x00C7:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_149: (in 00C8 : ptr16)
  Class: Eq_149
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_150 t0000)))
T_150: (in Data60[0x00C8:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_151: (in 00C9 : ptr16)
  Class: Eq_151
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_152 t0000)))
T_152: (in Data60[0x00C9:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_153: (in 0x00 : byte)
  Class: Eq_153
  DataType: (ptr8 Eq_153)
  OrigDataType: (ptr8 (segment (C5 T_155 t00C5)))
T_154: (in 0xC5 : byte)
  Class: Eq_154
  DataType: Eq_154
  OrigDataType: (union (byte u0) ((memptr T_153 (struct (0 byte b0000))) u1) ((memptr T_158 (struct (0 byte b0000))) u2) ((memptr T_163 (struct (0 byte b0000))) u3))
T_155: (in Data60[0x00:0xC5:byte] : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in 0x01 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in 0x00->b00C5 - 0x01 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in 0x00 : byte)
  Class: Eq_158
  DataType: (ptr8 Eq_158)
  OrigDataType: (ptr8 (segment (C5 T_159 t00C5)))
T_159: (in Data67[0x00:0xC5:byte] : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_160: (in 0x00 : byte)
  Class: Eq_160
  DataType: (ptr8 Eq_160)
  OrigDataType: (ptr8 (segment (C6 T_162 t00C6)))
T_161: (in 0xC6 : byte)
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: (union (byte u0) ((memptr T_160 (struct (0 byte b0000))) u1) ((memptr T_169 (struct (0 byte b0000))) u2) ((memptr T_171 (struct (0 byte b0000))) u3))
T_162: (in Data67[0x00:0xC6:byte] : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x00 : byte)
  Class: Eq_163
  DataType: (ptr8 Eq_163)
  OrigDataType: (ptr8 (segment (C5 T_164 t00C5)))
T_164: (in Data67[0x00:0xC5:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in cond(0x00->b00C5) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in SLICE(cond(0x00->b00C5), bool, 0) : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167: (in !(bool) cond(0x00->b00C5) : bool)
  Class: Eq_167
  DataType: Eq_167
  OrigDataType: (union (bool u0) (byte u1))
T_168: (in 0x00->b00C6 - !((bool) cond(0x00->b00C5)) : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in 0x00 : byte)
  Class: Eq_169
  DataType: (ptr8 Eq_169)
  OrigDataType: (ptr8 (segment (C6 T_170 t00C6)))
T_170: (in Data71[0x00:0xC6:byte] : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_171: (in 0x00 : byte)
  Class: Eq_171
  DataType: (ptr8 Eq_171)
  OrigDataType: (ptr8 (segment (C6 T_172 t00C6)))
T_172: (in Data71[0x00:0xC6:byte] : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in cond(0x00->b00C6) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in SLICE(cond(0x00->b00C6), bool, 2) : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_175: (in 0x00 : byte)
  Class: Eq_175
  DataType: (ptr8 Eq_175)
  OrigDataType: (ptr8 (segment (C4 T_177 t00C4)))
T_176: (in 0xC4 : byte)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: (union (byte u0) ((memptr T_175 (struct (0 byte b0000))) u1) ((memptr T_180 (struct (0 byte b0000))) u2))
T_177: (in Data80[0x00:0xC4:byte] : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in 0x01 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in 0x00->b00C4 - 0x01 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in 0x00 : byte)
  Class: Eq_180
  DataType: (ptr8 Eq_180)
  OrigDataType: (ptr8 (segment (C4 T_181 t00C4)))
T_181: (in Data83[0x00:0xC4:byte] : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_182: (in LATB : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in FSR2L : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in FSR2 : (ptr16 Eq_184))
  Class: Eq_184
  DataType: (ptr16 Eq_184)
  OrigDataType: (ptr16 (struct (FE T_214 t00FE)))
T_185: (in FSR1 : (ptr16 Eq_185))
  Class: Eq_185
  DataType: (ptr16 Eq_185)
  OrigDataType: (ptr16 (struct (0 T_188 t0000) (1 T_191 t0001)))
T_186: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in FSR1 + 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Data5[FSR1 + 0x0000:byte] : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_189: (in 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in FSR1 + 0x0001 : word16)
  Class: Eq_190
  DataType: ptr16
  OrigDataType: ptr16
T_191: (in Data11[FSR1 + 0x0001:byte] : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in FSR1 + 0x0001 : word16)
  Class: Eq_192
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 byte)
T_193: (in Data16[FSR1 + 0x0001:byte] : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_194: (in 0x00 : byte)
  Class: Eq_194
  DataType: (ptr8 Eq_194)
  OrigDataType: (ptr8 (segment (CA T_196 t00CA)))
T_195: (in 0xCA : byte)
  Class: Eq_195
  DataType: Eq_195
  OrigDataType: (union (byte u0) ((memptr T_194 (struct (0 byte b0000))) u1))
T_196: (in Data11[0x00:0xCA:byte] : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in 0x01 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in 0x00->b00CA & 0x01 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in 0x00 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_200: (in (0x00->b00CA & 0x01) != 0x00 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x00 : byte)
  Class: Eq_201
  DataType: (ptr8 Eq_201)
  OrigDataType: (ptr8 (segment (CA T_203 t00CA)))
T_202: (in 0xCA : byte)
  Class: Eq_202
  DataType: Eq_202
  OrigDataType: (union (byte u0) ((memptr T_201 (struct (0 byte b0000))) u1) ((memptr T_206 (struct (0 byte b0000))) u2))
T_203: (in Data11[0x00:0xCA:byte] : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0xFE : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in 0x00->b00CA & 0xFE : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in 0x00 : byte)
  Class: Eq_206
  DataType: (ptr8 Eq_206)
  OrigDataType: (ptr8 (segment (CA T_207 t00CA)))
T_207: (in Data24[0x00:0xCA:byte] : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_208: (in 0x01 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in LATB & 0x01 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in 0x00 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_211: (in (LATB & 0x01) == 0x00 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in 0xFE : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in FSR2 + 0xFE : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Data11[FSR2 + 0xFE:byte] : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in 0x00 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_216: (in FSR2->b00FE == 0x00 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in 0x7F : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in LATB & 0x7F : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_219: (in 0x80 : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in LATB | 0x80 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_221: (in WREG : cu8)
  Class: Eq_221
  DataType: cu8
  OrigDataType: cu8
T_222: (in FSR0L : cu8)
  Class: Eq_222
  DataType: cu8
  OrigDataType: cu8
T_223: (in FSR0H : cu8)
  Class: Eq_221
  DataType: cu8
  OrigDataType: cu8
T_224: (in PRODL : cu8)
  Class: Eq_222
  DataType: cu8
  OrigDataType: cu8
T_225: (in FSR0 : Eq_225)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: word32
T_226: (in FSR0H < WREG : bool)
  Class: Eq_226
  DataType: bool
  OrigDataType: bool
T_227: (in 0x00 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in 0x0000 : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in FSR0 + 0x0000 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in Data6[FSR0 + 0x0000:byte] : byte)
  Class: Eq_227
  DataType: Eq_225
  OrigDataType: byte
T_231: (in 0x0001 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_232: (in FSR0 + 0x0001 : word16)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_233: (in 0x00 : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in FSR0 + 0x0000 : word16)
  Class: Eq_235
  DataType: Eq_235
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_236: (in Data16[FSR0 + 0x0000:byte] : byte)
  Class: Eq_233
  DataType: Eq_225
  OrigDataType: byte
T_237: (in 0x0001 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_238: (in FSR0 + 0x0001 : word16)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_239: (in FSR0L < PRODL : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240:
  Class: Eq_240
  DataType: Eq_240
  OrigDataType: (struct 0001 (0 T_11 t0000))
*/
typedef struct Globals {
	byte b0001;	// 1
	byte b00C7;	// C7
	byte b00C8;	// C8
	byte b00C9;	// C9
} Eq_1;

typedef void (Eq_12)(byte, Eq_15, word24);

typedef union Eq_15 {
	word16 u0;
	byte * u1;
} Eq_15;

typedef void (Eq_20)(word24, byte);

typedef struct Eq_26 {
	byte b00C5;	// C5
} Eq_26;

typedef union Eq_27 {
	byte u0;
	byte Eq_26::* u1;
} Eq_27;

typedef struct Eq_32 {
	byte b00C6;	// C6
} Eq_32;

typedef union Eq_33 {
	byte u0;
	byte Eq_32::* u1;
} Eq_33;

typedef struct Eq_47 {
	byte b00C0;	// C0
} Eq_47;

typedef union Eq_48 {
	byte u0;
	byte Eq_47::* u1;
} Eq_48;

typedef struct Eq_53 {
	byte b00C1;	// C1
} Eq_53;

typedef union Eq_54 {
	byte u0;
	byte Eq_53::* u1;
} Eq_54;

typedef struct Eq_59 {
	byte b00C2;	// C2
} Eq_59;

typedef union Eq_60 {
	byte u0;
	byte Eq_59::* u1;
} Eq_60;

typedef struct Eq_80 {
	byte b00C3;	// C3
} Eq_80;

typedef union Eq_81 {
	byte u0;
	byte Eq_80::* u1;
} Eq_81;

typedef struct Eq_86 {
	byte b00C4;	// C4
} Eq_86;

typedef union Eq_87 {
	byte u0;
	byte Eq_86::* u1;
} Eq_87;

typedef struct Eq_101 {
	byte b00C3;	// C3
} Eq_101;

typedef union Eq_102 {
	byte u0;
	byte Eq_101::* u1;
	byte Eq_104::* u2;
	byte Eq_107::* u3;
} Eq_102;

typedef struct Eq_104 {
	byte b00C3;	// C3
} Eq_104;

typedef struct Eq_107 {
	byte b00C3;	// C3
} Eq_107;

typedef struct Eq_111 {
	byte b00C5;	// C5
} Eq_111;

typedef union Eq_112 {
	byte u0;
	byte Eq_111::* u1;
} Eq_112;

typedef struct Eq_122 {
	byte b00C3;	// C3
} Eq_122;

typedef union Eq_123 {
	byte u0;
	byte Eq_122::* u1;
	byte Eq_127::* u2;
	cu8 Eq_131::* u3;
} Eq_123;

typedef struct Eq_127 {
	byte b00C3;	// C3
} Eq_127;

typedef struct Eq_131 {
	cu8 b00C3;	// C3
} Eq_131;

typedef struct Eq_138 {
	byte b00C4;	// C4
} Eq_138;

typedef union Eq_139 {
	byte u0;
	byte Eq_138::* u1;
	byte Eq_141::* u2;
	byte Eq_143::* u3;
} Eq_139;

typedef struct Eq_141 {
	byte b00C4;	// C4
} Eq_141;

typedef struct Eq_143 {
	byte b00C4;	// C4
} Eq_143;

typedef struct Eq_153 {
	byte b00C5;	// C5
} Eq_153;

typedef union Eq_154 {
	byte u0;
	byte Eq_153::* u1;
	byte Eq_158::* u2;
	byte Eq_163::* u3;
} Eq_154;

typedef struct Eq_158 {
	byte b00C5;	// C5
} Eq_158;

typedef struct Eq_160 {
	byte b00C6;	// C6
} Eq_160;

typedef union Eq_161 {
	byte u0;
	byte Eq_160::* u1;
	byte Eq_169::* u2;
	byte Eq_171::* u3;
} Eq_161;

typedef struct Eq_163 {
	byte b00C5;	// C5
} Eq_163;

typedef union Eq_167 {
	bool u0;
	byte u1;
} Eq_167;

typedef struct Eq_169 {
	byte b00C6;	// C6
} Eq_169;

typedef struct Eq_171 {
	byte b00C6;	// C6
} Eq_171;

typedef struct Eq_175 {
	byte b00C4;	// C4
} Eq_175;

typedef union Eq_176 {
	byte u0;
	byte Eq_175::* u1;
	byte Eq_180::* u2;
} Eq_176;

typedef struct Eq_180 {
	byte b00C4;	// C4
} Eq_180;

typedef struct Eq_184 {
	byte b00FE;	// FE
} Eq_184;

typedef struct Eq_185 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_185;

typedef struct Eq_194 {
	byte b00CA;	// CA
} Eq_194;

typedef union Eq_195 {
	byte u0;
	byte Eq_194::* u1;
} Eq_195;

typedef struct Eq_201 {
	byte b00CA;	// CA
} Eq_201;

typedef union Eq_202 {
	byte u0;
	byte Eq_201::* u1;
	byte Eq_206::* u2;
} Eq_202;

typedef struct Eq_206 {
	byte b00CA;	// CA
} Eq_206;

typedef union Eq_225 {
	word16 u0;
	byte * u1;
} Eq_225;

typedef union Eq_231 {
	word16 u0;
	byte * u1;
} Eq_231;

typedef union Eq_235 {
	word16 u0;
	byte * u1;
} Eq_235;

typedef union Eq_237 {
	word16 u0;
	byte * u1;
} Eq_237;

typedef struct Eq_240 {	// size: 1 1
	ptr32 ptr0000;	// 0
} Eq_240;

