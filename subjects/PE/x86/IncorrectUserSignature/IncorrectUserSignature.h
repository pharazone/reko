// IncorrectUserSignature.h
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.8.0.2.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: cdecl_class
	T_2 (in c : (ptr32 Eq_2))
Eq_6: cdecl_class_vtbl
	T_6 (in c + 0x00000000 : word32)
Eq_7: cdecl_class_vtbl
	T_7 (in Mem19[c + 0x00000000:word32] : word32)
Eq_9: (fn void ((ptr32 cdecl_class), int32, int32))
	T_9 (in Mem19[c + 0x00000000:word32] + 0x00000008 : word32)
Eq_10: (fn void ((ptr32 cdecl_class), int32, int32))
	T_10 (in Mem19[Mem19[c + 0x00000000:word32] + 0x00000008:word32] : word32)
Eq_16: (struct "Eq_16" (4 (ptr32 Eq_19) ptr0004))
	T_16 (in Mem37[c + 0x00000000:word32] : word32)
Eq_19: (fn void ((ptr32 Eq_2), word32))
	T_19 (in Mem37[Mem37[c + 0x00000000:word32] + 0x00000004:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in c : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 cdecl_class)
T_3: (in a : int32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in b : int32)
  Class: Eq_4
  DataType: int32
  OrigDataType: int32
T_5: (in 0x00000000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in c + 0x00000000 : word32)
  Class: Eq_6
  DataType: (ptr32 (ptr32 Eq_6))
  OrigDataType: (ptr32 (ptr32 cdecl_class_vtbl))
T_7: (in Mem19[c + 0x00000000:word32] : word32)
  Class: Eq_7
  DataType: (ptr32 Eq_7)
  OrigDataType: (ptr32 (union (cdecl_class_vtbl u1)))
T_8: (in 0x00000008 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in Mem19[c + 0x00000000:word32] + 0x00000008 : word32)
  Class: Eq_9
  DataType: (ptr32 (ptr32 Eq_9))
  OrigDataType: (ptr32 (ptr32 (fn void ((ptr32 cdecl_class), int32, int32))))
T_10: (in Mem19[Mem19[c + 0x00000000:word32] + 0x00000008:word32] : word32)
  Class: Eq_10
  DataType: (ptr32 Eq_10)
  OrigDataType: (ptr32 (fn T_11 ((ptr32 cdecl_class), int32, int32)))
T_11: (in c->vtbl->sum(c, a, b) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in eax_25 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in <invalid> : void)
  Class: Eq_12
  DataType: word32
  OrigDataType: void
T_14: (in 0x00000000 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in c + 0x00000000 : word32)
  Class: Eq_15
  DataType: ptr32
  OrigDataType: ptr32
T_16: (in Mem37[c + 0x00000000:word32] : word32)
  Class: Eq_16
  DataType: (ptr32 Eq_16)
  OrigDataType: (ptr32 (struct (4 T_19 t0004)))
T_17: (in 0x00000004 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in Mem37[c + 0x00000000:word32] + 0x00000004 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in Mem37[Mem37[c + 0x00000000:word32] + 0x00000004:word32] : word32)
  Class: Eq_19
  DataType: (ptr32 Eq_19)
  OrigDataType: (ptr32 (fn T_20 (T_2, T_12)))
T_20: (in c->vtbl->method04(c, eax_25) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef cdecl_class Eq_2;

typedef cdecl_class_vtbl Eq_6;

typedef cdecl_class_vtbl Eq_7;

typedef void (Eq_9)(cdecl_class * ptrArg04, int32 dwArg08, int32 dwArg0C);

typedef void (Eq_10)(cdecl_class *, int32, int32);

typedef struct Eq_16 {
	void (* ptr0004)(cdecl_class *, word32);	// 4
} Eq_16;

typedef void (Eq_19)(cdecl_class *, word32);

