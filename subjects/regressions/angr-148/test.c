// test.c
// Generated by decompiling test
// using Reko decompiler version 0.6.1.0.

#include "test.h"

void _init()
{
	word64 rax_4 = *&globals->qw600FF8;
	if (rax_4 != 0x00)
	{
		word64 rsp_15;
		byte SCZO_16;
		word64 rax_17;
		byte SZO_18;
		byte C_19;
		byte Z_20;
		__gmon_start__();
	}
	return;
}

void _start(word64 rax,  * rdx, word64 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	word64 rax_21 = DPB(rax, __libc_start_main(&globals->t40053D, qwArg00, fp + 0x08, &globals->t400550, &globals->t4005C0, rdx, DPB(qwArg00, fp + 0x04, 0)), 0);
	__hlt();
}

ptr64 deregister_tm_clones(word64 r8)
{
	if (DPB(rax, 0x00601047, 0) > 0x0E)
	{
		word64 rax_37 = DPB(rax, 0x00, 0);
		if (rax_37 != 0x00)
		{
			ptr64 rsp_44;
			word32 eax_45;
			word64 rbp_46;
			word64 r8_47;
			byte SCZO_48;
			word64 rax_49;
			byte CZ_50;
			byte SZO_51;
			byte C_52;
			byte Z_53;
			word32 edi_54;
			0x00();
			return rsp_44;
		}
	}
	return fp + 0x04;
}

void register_tm_clones(word64 r8)
{
	int64 rax_4 = DPB(rax, 0x00601040, 0);
	Eq_79 rdx_13 = rax_4 >> 0x03 >> 0x3F;
	if ((rax_4 >> 0x03) + rdx_13 >> 0x01 != 0x00)
	{
		Eq_90 rdx_45 = DPB(rdx_13, 0x00, 0);
		if (rdx_45 != 0x00)
		{
			word64 rsp_53;
			word32 eax_54;
			word64 rbp_55;
			word64 r8_56;
			byte SCZO_57;
			word64 rax_58;
			word64 rdx_59;
			byte Z_60;
			word32 edx_61;
			byte SZO_62;
			byte C_63;
			word64 rsi_64;
			word32 edi_65;
			0x00();
			return;
		}
	}
	return;
}

void __do_global_dtors_aux(word64 r8)
{
	if (*&globals->b601040 == 0x00)
	{
		deregister_tm_clones(r8);
		*&globals->b601040 = 0x01;
	}
	return;
}

void frame_dummy(word64 r8)
{
frame_dummy_entry:
	rsp = fp
	SCZO = cond(*&globals->qw600E20 - 0x00)
	Z = SCZO
	branch Test(EQ,Z) l0000000000400528
	goto l000000000040050A
l0000000000400500:
l000000000040050A:
	eax = 0x00
	rax = DPB(rax, eax, 0)
	SZO = cond(rax & rax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l0000000000400528
l0000000000400514:
	rsp = fp - 0x04
	dwLoc04 = rbp
	qwLoc04 = DPB(qwLoc04, dwLoc04, 0)
	edi = 0x00600E20
	rbp = fp - 0x04
	0x00()
	rbp = qwLoc04
	rsp = fp + 0x04
	register_tm_clones(r8)
	return
l000000000040051F_thunk_register_tm_clones:
l0000000000400528:
	register_tm_clones(r8)
	return
frame_dummy_exit:
}

ptr64 f(word64 rax)
{
	word64 rax_11 = DPB(rax, putchar(DPB(rdi, 0x78, 0)), 0);
	return fp + 0x04;
}

void main()
{
	f(DPB(rax, 0x00, 0));
	return;
}

void __libc_csu_init(word64 rsi)
{
	_init();
	Eq_218 r12_19[] = globals->a600E10;
	ui64 rbx_28 = DPB(rbx, 0x00, 0);
	if (0x0000000000600E18 - r12_19 >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_69;
			word64 rdi_70;
			word32 r15d_71;
			word32 edi_72;
			word64 rsi_73;
			word64 r14_74;
			word64 rbp_75;
			word64 r13_76;
			word64 rdx_77;
			word64 r12_78;
			word64 rbx_79;
			byte SCZO_80;
			word32 ebx_81;
			byte SZO_82;
			byte C_83;
			byte Z_84;
			r12_19[rbx_28]();
		} while (rbx_79 + 0x01 != rbp_75);
	}
	return;
}

void __libc_csu_fini()
{
	return;
}

void _fini()
{
	return;
}

