// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr code) ptr8000270C) (80002714 (arr (ptr code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 up32 dw80002726) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_60: (fn void ())
	T_60 (in deregister_tm_clones : ptr32)
	T_61 (in signature of deregister_tm_clones : void)
Eq_158: (fn void ())
	T_158 (in register_tm_clones : ptr32)
	T_159 (in signature of register_tm_clones : void)
	T_161 (in register_tm_clones : ptr32)
Eq_191: (fn void (real64, int32))
	T_191 (in pow_int : ptr32)
	T_192 (in signature of pow_int : void)
	T_203 (in pow_int : ptr32)
Eq_194: (fn void (int32))
	T_194 (in factorial : ptr32)
	T_195 (in signature of factorial : void)
	T_205 (in factorial : ptr32)
Eq_212: (fn void (real64))
	T_212 (in sine_taylor : ptr32)
	T_213 (in signature of sine_taylor : void)
Eq_218: (fn void (real64, real64, Eq_222))
	T_218 (in _sin : ptr32)
	T_219 (in signature of _sin : void)
Eq_222: (union "Eq_222" ((ptr word32) u0) ((ref int32) u1))
	T_222 (in tArg14 : Eq_222)
	T_231 (in fp - 0x00000008 : word32)
Eq_233: (union "Eq_233" (real64 u0) (real80 u1))
	T_233 (in rLoc0C_117 : Eq_233)
	T_236 (in DPB(rLoc0C, SLICE(rArg04, word32, 32), 32) : real64)
	T_259 (in (real64) ((real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28) : real64)
Eq_237: (union "Eq_237" (real64 u0) (real80 u1))
	T_237 (in v9_28 : Eq_237)
	T_240 (in (real64) ((real80) rLoc0C_117 * rLoc0C_117) : real64)
Eq_244: (ref int32)
	T_244 (in tArg14 + 0x00000000 : word32)
Eq_249: (union "Eq_249" ((ptr word32) u0) ((ref int32) u1))
	T_249 (in tArg14 + 0x00000000 : word32)
Eq_262: (union "Eq_262" (real64 u0) (real80 u1))
	T_262 (in rLoc14 : real64)
	T_283 (in (real64) ((real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003)) : real64)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in true : bool)
  Class: Eq_2
  DataType: bool
  OrigDataType: bool
T_3: (in 00000000 : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_5: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in a7_39 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in a6_40 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in d0_41 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in CVZN_42 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in CVZNX_43 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in d1_44 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in C_45 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in a0_46 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in ZN_47 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in V_48 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in Z_49 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 00000000 : ptr32)
  Class: Eq_17
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_18: (in d0_11 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_19: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_20: (in false : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in 0x00000001 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_22: (in d0_15 : int32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_23: (in 0x00000001 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in d0_11 >> 0x00000001 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_25: (in 0x00000000 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: word32
T_26: (in d0_15 == 0x00000000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 00000000 : ptr32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in 0x00000000 : word32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: word32
T_29: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in a7_49 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in a6_50 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in d0_51 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in CVZN_52 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in CVZNX_53 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in N_54 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in Z_55 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in a0_56 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ZN_57 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in C_58 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in V_59 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 00000000 : ptr32)
  Class: Eq_41
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_42: (in d2 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in 80002724 : ptr32)
  Class: Eq_43
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_44: (in 0x00000000 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in 0x80002724 + 0x00000000 : word32)
  Class: Eq_45
  DataType: ptr32
  OrigDataType: ptr32
T_46: (in Mem0[0x80002724 + 0x00000000:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x00 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in globals->b80002724 != 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in d0_105 : up32)
  Class: Eq_49
  DataType: up32
  OrigDataType: up32
T_50: (in 80002726 : ptr32)
  Class: Eq_50
  DataType: (ptr up32)
  OrigDataType: (ptr (struct (0 T_53 t0000)))
T_51: (in 0x00000000 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_52
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in Mem0[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_49
  DataType: up32
  OrigDataType: word32
T_54: (in a2_106 : (arr (ptr code)))
  Class: Eq_54
  DataType: (ptr (arr (ptr code)))
  OrigDataType: (ptr (struct (0 (arr T_313) a0000)))
T_55: (in 80002714 : ptr32)
  Class: Eq_54
  DataType: (ptr (arr (ptr code)))
  OrigDataType: ptr32
T_56: (in 0x00000000 : word32)
  Class: Eq_56
  DataType: up32
  OrigDataType: up32
T_57: (in 0x00000000 - d0_105 : word32)
  Class: Eq_57
  DataType: up32
  OrigDataType: up32
T_58: (in 0x00000000 : word32)
  Class: Eq_57
  DataType: up32
  OrigDataType: up32
T_59: (in 0x00000000 - d0_105 <= 0x00000000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in deregister_tm_clones : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 ()))
T_61: (in signature of deregister_tm_clones : void)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: 
T_62: (in deregister_tm_clones() : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in 00000000 : ptr32)
  Class: Eq_63
  DataType: ptr32
  OrigDataType: ptr32
T_64: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: ptr32
  OrigDataType: word32
T_65: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in d0_107 : uint32)
  Class: Eq_66
  DataType: uint32
  OrigDataType: uint32
T_67: (in 0x00000001 : word32)
  Class: Eq_67
  DataType: up32
  OrigDataType: up32
T_68: (in d0_105 + 0x00000001 : word32)
  Class: Eq_66
  DataType: uint32
  OrigDataType: up32
T_69: (in 80002726 : ptr32)
  Class: Eq_69
  DataType: (ptr uint32)
  OrigDataType: (ptr (struct (0 T_72 t0000)))
T_70: (in 0x00000000 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_71
  DataType: ptr32
  OrigDataType: ptr32
T_72: (in Mem110[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_66
  DataType: uint32
  OrigDataType: word32
T_73: (in a0_112 : (ptr code))
  Class: Eq_73
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_74: (in 4 : int32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_75: (in d0_107 * 4 : word32)
  Class: Eq_75
  DataType: ui32
  OrigDataType: ui32
T_76: (in a2_106[d0_107 * 4] : word32)
  Class: Eq_73
  DataType: (ptr code)
  OrigDataType: word32
T_77: (in a7_113 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in a6_114 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in CVZN_116 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in d2_117 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in ZN_118 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in C_119 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in V_120 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in Z_121 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in d0_122 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in CVZNX_123 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in VZ_124 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in a0_125 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in None_126 : bcuisposr0)
  Class: Eq_89
  DataType: bcuisposr0
  OrigDataType: bcuisposr0
T_90: (in CZ_127 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in 80002726 : ptr32)
  Class: Eq_91
  DataType: (ptr up32)
  OrigDataType: (ptr (struct (0 T_94 t0000)))
T_92: (in 0x00000000 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_93
  DataType: ptr32
  OrigDataType: ptr32
T_94: (in Mem110[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_49
  DataType: up32
  OrigDataType: word32
T_95: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: up32
  OrigDataType: up32
T_96: (in 0x00000000 - d0_105 : word32)
  Class: Eq_96
  DataType: up32
  OrigDataType: up32
T_97: (in 0x00000000 : word32)
  Class: Eq_96
  DataType: up32
  OrigDataType: up32
T_98: (in 0x00000000 - d0_105 > 0x00000000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x01 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in 80002724 : ptr32)
  Class: Eq_100
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_103 t0000)))
T_101: (in 0x00000000 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in 0x80002724 + 0x00000000 : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: ptr32
T_103: (in Mem85[0x80002724 + 0x00000000:byte] : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_104: (in a7_89 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in a6_90 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in a2_91 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in CVZN_92 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in d2_93 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in ZN_94 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in C_95 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in V_96 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in Z_97 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in d0_98 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in CVZNX_99 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in VZ_100 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in a0_101 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in None_102 : bcuisposr0)
  Class: Eq_117
  DataType: bcuisposr0
  OrigDataType: bcuisposr0
T_118: (in CZ_103 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in 00000000 : ptr32)
  Class: Eq_119
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_120: (in 00000000 : ptr32)
  Class: Eq_120
  DataType: ptr32
  OrigDataType: ptr32
T_121: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: ptr32
  OrigDataType: word32
T_122: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_122
  DataType: bool
  OrigDataType: bool
T_123: (in 8000271C : ptr32)
  Class: Eq_123
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_126 t0000)))
T_124: (in 0x00000000 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in 0x8000271C + 0x00000000 : word32)
  Class: Eq_125
  DataType: ptr32
  OrigDataType: ptr32
T_126: (in Mem0[0x8000271C + 0x00000000:word32] : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in 0x00000000 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_128: (in globals->dw8000271C != 0x00000000 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in a7_83 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in a6_84 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in a0_85 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in ZN_86 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in C_87 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in V_88 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in Z_89 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in a1_90 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in CVZN_91 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in d0_92 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in CVZNX_93 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in N_94 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 00000000 : ptr32)
  Class: Eq_141
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_142: (in 00000000 : ptr32)
  Class: Eq_142
  DataType: ptr32
  OrigDataType: ptr32
T_143: (in 0x00000000 : word32)
  Class: Eq_142
  DataType: ptr32
  OrigDataType: word32
T_144: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in a7_64 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in a6_65 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in a0_66 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in ZN_67 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in C_68 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in V_69 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in Z_70 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in a1_71 : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in CVZN_72 : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in d0_73 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in CVZNX_74 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in N_75 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in 00000000 : ptr32)
  Class: Eq_157
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_158: (in register_tm_clones : ptr32)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_160 ()))
T_159: (in signature of register_tm_clones : void)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: 
T_160: (in register_tm_clones() : void)
  Class: Eq_160
  DataType: void
  OrigDataType: void
T_161: (in register_tm_clones : ptr32)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_162 ()))
T_162: (in register_tm_clones() : void)
  Class: Eq_160
  DataType: void
  OrigDataType: void
T_163: (in rArg04 : real64)
  Class: Eq_163
  DataType: real64
  OrigDataType: real64
T_164: (in dwArg04 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_165: (in dwLoc08_15 : int32)
  Class: Eq_165
  DataType: int32
  OrigDataType: int32
T_166: (in 2 : int32)
  Class: Eq_165
  DataType: int32
  OrigDataType: int32
T_167: (in 0x00000001 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in dwLoc08_15 + 0x00000001 : word32)
  Class: Eq_165
  DataType: int32
  OrigDataType: int32
T_169: (in dwLoc08_15 - dwArg04 : word32)
  Class: Eq_169
  DataType: int32
  OrigDataType: int32
T_170: (in 0x00000000 : word32)
  Class: Eq_169
  DataType: int32
  OrigDataType: int32
T_171: (in dwLoc08_15 - dwArg04 > 0x00000000 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in rArg04 : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_173: (in dwArg0C : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_174: (in dwLoc08_16 : int32)
  Class: Eq_174
  DataType: int32
  OrigDataType: int32
T_175: (in 0x00000000 : word32)
  Class: Eq_174
  DataType: int32
  OrigDataType: word32
T_176: (in 0x00000001 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in dwLoc08_16 + 0x00000001 : word32)
  Class: Eq_174
  DataType: int32
  OrigDataType: word32
T_178: (in dwLoc08_16 - dwArg0C : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_179: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_180: (in dwLoc08_16 - dwArg0C >= 0x00000000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in rArg04 : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: real64
T_182: (in dwArg0C : int32)
  Class: Eq_182
  DataType: int32
  OrigDataType: int32
T_183: (in dwArg04_5 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in (word32) rArg04 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_185: (in dwLoc08_24 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_186: (in 3 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_187: (in dwLoc08_104 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_188: (in 5 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_189: (in rLoc28 : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_190: (in DPB(rLoc28, dwArg04_5, 0) : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_191: (in pow_int : ptr32)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: (ptr (fn T_193 (T_189, T_185)))
T_192: (in signature of pow_int : void)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: 
T_193: (in pow_int(rLoc28, dwLoc08_24) : void)
  Class: Eq_193
  DataType: void
  OrigDataType: void
T_194: (in factorial : ptr32)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (fn T_196 (T_185)))
T_195: (in signature of factorial : void)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: 
T_196: (in factorial(dwLoc08_24) : void)
  Class: Eq_196
  DataType: void
  OrigDataType: void
T_197: (in 0x00000004 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in dwLoc08_24 + 0x00000004 : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_199: (in dwLoc08_24 - dwArg0C : word32)
  Class: Eq_199
  DataType: int32
  OrigDataType: int32
T_200: (in 0x00000000 : word32)
  Class: Eq_199
  DataType: int32
  OrigDataType: int32
T_201: (in dwLoc08_24 - dwArg0C > 0x00000000 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in DPB(rLoc28, dwArg04_5, 0) : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_203: (in pow_int : ptr32)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: (ptr (fn T_204 (T_189, T_187)))
T_204: (in pow_int(rLoc28, dwLoc08_104) : void)
  Class: Eq_193
  DataType: void
  OrigDataType: void
T_205: (in factorial : ptr32)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (fn T_206 (T_187)))
T_206: (in factorial(dwLoc08_104) : void)
  Class: Eq_196
  DataType: void
  OrigDataType: void
T_207: (in 0x00000004 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in dwLoc08_104 + 0x00000004 : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_209: (in dwLoc08_104 - dwArg0C : word32)
  Class: Eq_209
  DataType: int32
  OrigDataType: int32
T_210: (in 0x00000000 : word32)
  Class: Eq_209
  DataType: int32
  OrigDataType: int32
T_211: (in dwLoc08_104 - dwArg0C > 0x00000000 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in sine_taylor : ptr32)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: (ptr (fn T_217 (T_216)))
T_213: (in signature of sine_taylor : void)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: 
T_214: (in rLoc10 : real64)
  Class: Eq_214
  DataType: real64
  OrigDataType: real64
T_215: (in 0x40091EB8 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in DPB(rLoc10, 0x40091EB8, 0) : real64)
  Class: Eq_163
  DataType: real64
  OrigDataType: real64
T_217: (in sine_taylor(DPB(rLoc10, 0x40091EB8, 0)) : void)
  Class: Eq_217
  DataType: void
  OrigDataType: void
T_218: (in _sin : ptr32)
  Class: Eq_218
  DataType: (ptr Eq_218)
  OrigDataType: (ptr (fn T_232 (T_225, T_228, T_231)))
T_219: (in signature of _sin : void)
  Class: Eq_218
  DataType: (ptr Eq_218)
  OrigDataType: 
T_220: (in rArg04 : real64)
  Class: Eq_220
  DataType: real64
  OrigDataType: real64
T_221: (in rArg0C : real64)
  Class: Eq_221
  DataType: real64
  OrigDataType: real64
T_222: (in tArg14 : Eq_222)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: (union ((ptr (struct (0 T_245 t0000))) u1) ((ref int32) u0))
T_223: (in rLoc1C : real64)
  Class: Eq_223
  DataType: real64
  OrigDataType: real64
T_224: (in 0x40091EB8 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in DPB(rLoc1C, 0x40091EB8, 0) : real64)
  Class: Eq_220
  DataType: real64
  OrigDataType: real64
T_226: (in rLoc14 : real64)
  Class: Eq_226
  DataType: real64
  OrigDataType: real64
T_227: (in 0x3F689374 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in DPB(rLoc14, 0x3F689374, 0) : real64)
  Class: Eq_221
  DataType: real64
  OrigDataType: real64
T_229: (in fp : ptr32)
  Class: Eq_229
  DataType: ptr32
  OrigDataType: ptr32
T_230: (in 0x00000008 : word32)
  Class: Eq_230
  DataType: ui32
  OrigDataType: ui32
T_231: (in fp - 0x00000008 : word32)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_232: (in _sin(DPB(rLoc1C, 0x40091EB8, 0), DPB(rLoc14, 0x3F689374, 0), fp - 0x00000008) : void)
  Class: Eq_232
  DataType: void
  OrigDataType: void
T_233: (in rLoc0C_117 : Eq_233)
  Class: Eq_233
  DataType: Eq_233
  OrigDataType: (union (real64 u0) (real80 u1))
T_234: (in rLoc0C : real64)
  Class: Eq_234
  DataType: real64
  OrigDataType: real64
T_235: (in SLICE(rArg04, word32, 32) : word32)
  Class: Eq_235
  DataType: Eq_235
  OrigDataType: 
T_236: (in DPB(rLoc0C, SLICE(rArg04, word32, 32), 32) : real64)
  Class: Eq_233
  DataType: Eq_233
  OrigDataType: real64
T_237: (in v9_28 : Eq_237)
  Class: Eq_237
  DataType: Eq_237
  OrigDataType: (union (real64 u0) (real80 u1))
T_238: (in (real80) rLoc0C_117 : real80)
  Class: Eq_238
  DataType: real80
  OrigDataType: real80
T_239: (in (real80) rLoc0C_117 * rLoc0C_117 : real80)
  Class: Eq_239
  DataType: real80
  OrigDataType: real80
T_240: (in (real64) ((real80) rLoc0C_117 * rLoc0C_117) : real64)
  Class: Eq_237
  DataType: Eq_237
  OrigDataType: real64
T_241: (in dwLoc20_132 : int32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_242: (in 1 : int32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_243: (in 0x00000000 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in tArg14 + 0x00000000 : word32)
  Class: Eq_244
  DataType: Eq_244
  OrigDataType: (ref int32)
T_245: (in Mem0[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_246: (in 0x00000001 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in Mem0[tArg14 + 0x00000000:word32] + 0x00000001 : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_248: (in 0x00000000 : word32)
  Class: Eq_248
  DataType: word32
  OrigDataType: word32
T_249: (in tArg14 + 0x00000000 : word32)
  Class: Eq_249
  DataType: Eq_249
  OrigDataType: (union ((ptr word32) u1) ((ref int32) u0))
T_250: (in Mem150[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_245
  DataType: Eq_222
  OrigDataType: word32
T_251: (in v24_77 : int32)
  Class: Eq_251
  DataType: int32
  OrigDataType: int32
T_252: (in 0x00000001 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in dwLoc20_132 + 0x00000001 : word32)
  Class: Eq_251
  DataType: int32
  OrigDataType: int32
T_254: (in (real80) rLoc0C_117 : real80)
  Class: Eq_254
  DataType: real80
  OrigDataType: real80
T_255: (in (real80) rLoc0C_117 * v9_28 : real80)
  Class: Eq_255
  DataType: real80
  OrigDataType: real80
T_256: (in (real64) ((real80) rLoc0C_117 * v9_28) : real64)
  Class: Eq_256
  DataType: real64
  OrigDataType: real64
T_257: (in (real80) (real64) ((real80) rLoc0C_117 * v9_28) : real80)
  Class: Eq_257
  DataType: real80
  OrigDataType: real80
T_258: (in (real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28 : real80)
  Class: Eq_258
  DataType: real80
  OrigDataType: real80
T_259: (in (real64) ((real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28) : real64)
  Class: Eq_233
  DataType: Eq_233
  OrigDataType: real64
T_260: (in 0x00000003 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in v24_77 + 0x00000003 : word32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_262: (in rLoc14 : real64)
  Class: Eq_262
  DataType: Eq_262
  OrigDataType: (union (real64 u0) (real80 u1))
T_263: (in (real80) rLoc14 : real80)
  Class: Eq_263
  DataType: real80
  OrigDataType: real80
T_264: (in (real80) v24_77 : real80)
  Class: Eq_264
  DataType: real80
  OrigDataType: real80
T_265: (in (real80) rLoc14 * (real80) v24_77 : real80)
  Class: Eq_265
  DataType: real80
  OrigDataType: real80
T_266: (in (real64) ((real80) rLoc14 * (real80) v24_77) : real64)
  Class: Eq_266
  DataType: real64
  OrigDataType: real64
T_267: (in (real80) (real64) ((real80) rLoc14 * (real80) v24_77) : real80)
  Class: Eq_267
  DataType: real80
  OrigDataType: real80
T_268: (in 0x00000001 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in v24_77 + 0x00000001 : word32)
  Class: Eq_269
  DataType: int32
  OrigDataType: int32
T_270: (in (real80) (v24_77 + 0x00000001) : real80)
  Class: Eq_270
  DataType: real80
  OrigDataType: real80
T_271: (in (real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001) : real80)
  Class: Eq_271
  DataType: real80
  OrigDataType: real80
T_272: (in (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) : real64)
  Class: Eq_272
  DataType: real64
  OrigDataType: real64
T_273: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) : real80)
  Class: Eq_273
  DataType: real80
  OrigDataType: real80
T_274: (in 0x00000002 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in v24_77 + 0x00000002 : word32)
  Class: Eq_275
  DataType: int32
  OrigDataType: int32
T_276: (in (real80) (v24_77 + 0x00000002) : real80)
  Class: Eq_276
  DataType: real80
  OrigDataType: real80
T_277: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002) : real80)
  Class: Eq_277
  DataType: real80
  OrigDataType: real80
T_278: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) : real64)
  Class: Eq_278
  DataType: real64
  OrigDataType: real64
T_279: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) : real80)
  Class: Eq_279
  DataType: real80
  OrigDataType: real80
T_280: (in v24_77 + 0x00000003 : word32)
  Class: Eq_280
  DataType: int32
  OrigDataType: int32
T_281: (in (real80) (v24_77 + 0x00000003) : real80)
  Class: Eq_281
  DataType: real80
  OrigDataType: real80
T_282: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003) : real80)
  Class: Eq_282
  DataType: real80
  OrigDataType: real80
T_283: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003)) : real64)
  Class: Eq_262
  DataType: Eq_262
  OrigDataType: real64
T_284: (in (real80) rLoc0C_117 : real80)
  Class: Eq_284
  DataType: real80
  OrigDataType: real80
T_285: (in (real80) rLoc0C_117 / rLoc14 : real80)
  Class: Eq_285
  DataType: real80
  OrigDataType: real80
T_286: (in (real64) ((real80) rLoc0C_117 / rLoc14) : real64)
  Class: Eq_221
  DataType: real64
  OrigDataType: real64
T_287: (in (real64) ((real80) rLoc0C_117 / rLoc14) < rArg0C : bool)
  Class: Eq_287
  DataType: bool
  OrigDataType: bool
T_288: (in a0_12 : (ptr code))
  Class: Eq_288
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_289: (in 8000270C : ptr32)
  Class: Eq_289
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_292 t0000)))
T_290: (in 0x00000000 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in 0x8000270C + 0x00000000 : word32)
  Class: Eq_291
  DataType: ptr32
  OrigDataType: ptr32
T_292: (in Mem0[0x8000270C + 0x00000000:word32] : word32)
  Class: Eq_288
  DataType: (ptr code)
  OrigDataType: word32
T_293: (in -1 : int32)
  Class: Eq_293
  DataType: int32
  OrigDataType: int32
T_294: (in -1 - a0_12 : word32)
  Class: Eq_294
  DataType: int32
  OrigDataType: int32
T_295: (in 0x00000000 : word32)
  Class: Eq_294
  DataType: int32
  OrigDataType: word32
T_296: (in -1 - a0_12 == 0x00000000 : bool)
  Class: Eq_296
  DataType: bool
  OrigDataType: bool
T_297: (in a7_26 : word32)
  Class: Eq_297
  DataType: word32
  OrigDataType: word32
T_298: (in a6_27 : word32)
  Class: Eq_298
  DataType: word32
  OrigDataType: word32
T_299: (in a2_28 : ptr32)
  Class: Eq_299
  DataType: ptr32
  OrigDataType: ptr32
T_300: (in CVZN_29 : byte)
  Class: Eq_300
  DataType: byte
  OrigDataType: byte
T_301: (in a0_30 : word32)
  Class: Eq_301
  DataType: word32
  OrigDataType: word32
T_302: (in d0_31 : word32)
  Class: Eq_302
  DataType: word32
  OrigDataType: word32
T_303: (in Z_32 : byte)
  Class: Eq_303
  DataType: byte
  OrigDataType: byte
T_304: (in -1 : int32)
  Class: Eq_304
  DataType: int32
  OrigDataType: int32
T_305: (in 4 : int32)
  Class: Eq_305
  DataType: int32
  OrigDataType: int32
T_306: (in a2_28 - 4 : word32)
  Class: Eq_306
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_309 t0000)))
T_307: (in 0x00000000 : word32)
  Class: Eq_307
  DataType: word32
  OrigDataType: word32
T_308: (in a2_28 - 4 + 0x00000000 : word32)
  Class: Eq_308
  DataType: word32
  OrigDataType: word32
T_309: (in Mem0[a2_28 - 4 + 0x00000000:word32] : word32)
  Class: Eq_309
  DataType: int32
  OrigDataType: int32
T_310: (in -1 - *(a2_28 - 4) : word32)
  Class: Eq_310
  DataType: int32
  OrigDataType: int32
T_311: (in 0x00000000 : word32)
  Class: Eq_310
  DataType: int32
  OrigDataType: word32
T_312: (in -1 - *(a2_28 - 4) != 0x00000000 : bool)
  Class: Eq_312
  DataType: bool
  OrigDataType: bool
T_313:
  Class: Eq_313
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_76 t0000))
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	up32 dw80002726;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef void (Eq_60)();

typedef void (Eq_158)();

typedef void (Eq_191)(real64, int32);

typedef void (Eq_194)(int32);

typedef void (Eq_212)(real64);

typedef void (Eq_218)(real64, real64, Eq_222);

typedef union Eq_222 {
	word32 * u0;
	<anonymous> u1;
} Eq_222;

typedef union Eq_233 {
	real64 u0;
	real80 u1;
} Eq_233;

typedef union Eq_237 {
	real64 u0;
	real80 u1;
} Eq_237;

typedef int32 & Eq_244;

typedef union Eq_249 {
	word32 * u0;
	<anonymous> u1;
} Eq_249;

typedef union Eq_262 {
	real64 u0;
	real80 u1;
} Eq_262;

