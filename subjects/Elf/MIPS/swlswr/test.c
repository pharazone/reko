// test.c
// Generated by decompiling test
// using Reko decompiler version 0.8.0.2.

#include "test.h"

// 00000588: Register word32 _init(Register word32 ra)
word32 _init(word32 ra)
{
	if (__gmon_start__ == 0x00)
	{
		ptr32 r25_16 = *(ptr32 *) 0x00020A4C;
		word32 r2_19;
		(r25_16 + 2004)();
		ptr32 r25_24 = *(ptr32 *) 0x00020A4C;
		word32 r2_27;
		(r25_24 + 0x0970)();
		return r2_27;
	}
	else
		__gmon_start__();
}

// 00000610: void __start(Register word32 r2, Stack word32 dwArg00)
void __start(word32 r2, word32 dwArg00)
{
	word32 r8_18 = *(word32 *) 0x00020A60;
	<anonymous> * r25_23 = *(<anonymous> **) 0x00020A24;
	r25_23();
	while (true)
		;
}

// 00000670: void deregister_tm_clones()
void deregister_tm_clones()
{
	struct Eq_30 * r4_8 = globals->ptr10AA8;
	word32 r2_9 = globals->dw10AA4;
	if (r2_9 == (char *) (&r4_8->ptr0A60) + 0x0024)
		return;
	<anonymous> * r25_12 = globals->ptr10AE4;
	if (r25_12 == null)
		return;
	r25_12();
}

// 000006A8: void register_tm_clones()
void register_tm_clones()
{
	struct Eq_30 * r4_8 = globals->ptr10AA8;
	int32 r5_11 = globals->dw10AA4 - ((char *) (&r4_8->ptr0A60) + 0x0024);
	uint32 r2_13 = r5_11 >> 0x02 >> 0x1F;
	Eq_58 r5_14 = r2_13 + (r5_11 >> 0x02);
	if (r5_14 >> 0x01 == 0x00)
		return;
	<anonymous> * r25_17 = globals->ptr10AD4;
	if (r25_17 == null)
		return;
	r25_17();
}

// 000006F4: void __do_global_dtors_aux(Register word32 r3, Register word32 r4, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 ra)
void __do_global_dtors_aux(word32 r3, word32 r4, word32 r16, word32 r17, word32 r18, word32 r19, word32 ra)
{
	struct Eq_30 * r19_10 = globals->ptr10AA8;
	if ((word32) r19_10->b0AF0 == 0x00)
	{
		if (__cxa_finalize != 0x00)
		{
			word32 r2_24 = globals->dw10AAC;
			__cxa_finalize();
		}
		struct Eq_30 * r17_37 = globals->ptr10AA8;
		struct Eq_30 * r2_35 = globals->ptr10AA8;
		Eq_96 r2_41 = r17_37->t0AF4;
		Eq_96 r16_43 = (globals->dw10AB0 - ((char *) (&r2_35->ptr0A60) + 0x08) >> 0x02) + -0x01;
		while ((word32) (r2_41 < r16_43) != 0x00)
		{
			Eq_96 r2_48 = (word32) r2_41 + 0x01;
			r17_37->t0AF4 = r2_48;
			<anonymous> ** r2_53 = (char *) &r2_35->ptr0A60 + 0x08 + (r2_48 << 0x02);
			<anonymous> * r25_54 = *r2_53;
			r25_54();
			r2_41 = r17_37->t0AF4;
		}
		deregister_tm_clones();
		r19_10->b0AF0 = 0x01;
	}
}

// 000007D4: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 000007F0: void main(Stack word32 dwArg00, Stack word32 dwArg04)
void main(word32 dwArg00, word32 dwArg04)
{
	memset(fp + -0x0014, 0x00, 0x05);
	struct Eq_165 * r2_39 = calloc(0x01, 0x05);
	r2_39->t0000 = dwLoc14;
	r2_39->b0004 = (byte) (word32) bLoc10;
	r2_39->t0000.u0 = 0x0C;
	r2_39->dw0001 = 0x00;
	r2_44 = r2_39;
	r3_45 = dwLoc14;
	r2_53 = r2_39;
}

// 000008C0: void __libc_csu_init(Register word32 r4, Register word32 r5, Register word32 r6, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 ra)
void __libc_csu_init(word32 r4, word32 r5, word32 r6, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 ra)
{
	word32 r2_31 = _init(ra);
	word32 * r16_35 = globals->ptr10ABC;
	int32 r18_37 = globals->ptr10ABC - r16_35;
	if (r18_37 >> 0x02 != 0x00)
	{
		int32 r17_40 = 0x00;
		while (true)
		{
			<anonymous> * r25_43 = *r16_35;
			r25_43();
			++r17_40;
			if (r18_37 >> 0x02 == r17_40)
				break;
			++r16_35;
		}
	}
}

// 00000964: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 00000970: void __do_global_ctors_aux(Register word32 r16, Register word32 r17, Register word32 ra)
void __do_global_ctors_aux(word32 r16, word32 r17, word32 ra)
{
	struct Eq_30 * r3_28 = globals->ptr10AA8;
	int32 r2_10 = -0x01;
	<anonymous> * r25_18 = r3_28->ptr0A60;
	if (r25_18 != (<anonymous> *) -0x01)
	{
		word32 * r16_21 = &r3_28->ptr0A60;
		do
		{
			r25_18();
			r16_21 += -0x01;
			r25_18 = *r16_21;
		} while (r25_18 != (<anonymous> *) -0x01);
	}
}

// 000009D0: void __libc_start_main(Register ptr32 r28, Register word32 ra)
void __libc_start_main(ptr32 r28, word32 ra)
{
	<anonymous> * r25_5 = *(r28 - 0x7FF0);
	r25_5();
}

// 000009E0: void memset(Register ptr32 r28, Register word32 ra)
void memset(ptr32 r28, word32 ra)
{
	<anonymous> * r25_5 = *(r28 - 0x7FF0);
	r25_5();
}

// 000009F0: void calloc(Register ptr32 r28, Register word32 ra)
void calloc(ptr32 r28, word32 ra)
{
	<anonymous> * r25_5 = *(r28 - 0x7FF0);
	r25_5();
	_fini(ra);
}

// 00000A10: void _fini(Register word32 ra)
void _fini(word32 ra)
{
	ptr32 r25_15 = *(ptr32 *) 0x00020A4C;
	(r25_15 + 0x06F4)();
}

