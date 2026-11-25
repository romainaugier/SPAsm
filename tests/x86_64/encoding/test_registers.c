/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

/* mov r32, r32 */
void test_mov_ecx_edx(void)
{
    /* mov ecx, edx => 89 D1 */
    const uint8_t expected[] = { 0x89, 0xD1 };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_ECX),
        SpasmOpReg(SpasmRegister_x86_64_EDX),
        expected, sizeof(expected));
}

/* add r8, r8 */
void test_add_bl_cl(void)
{
    /* add bl, cl => 00 CB */
    const uint8_t expected[] = { 0x00, 0xCB };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_BL),
        SpasmOpReg(SpasmRegister_x86_64_CL),
        expected, sizeof(expected));
}

/* mov r8, r8 with sil needs an empty REX */
void test_mov_sil_r9b(void)
{
    /* mov sil, r9b => 44 88 CE */
    const uint8_t expected[] = { 0x44, 0x88, 0xCE };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_SIL),
        SpasmOpReg(SpasmRegister_x86_64_R9B),
        expected, sizeof(expected));
}

void test_mov_dil_al(void)
{
    /* mov dil, al => 40 88 C7 */
    const uint8_t expected[] = { 0x40, 0x88, 0xC7 };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_DIL),
        SpasmOpReg(SpasmRegister_x86_64_AL),
        expected, sizeof(expected));
}

/* mov r16, r16 */
void test_mov_si_bp(void)
{
    /* mov si, bp => 66 89 EE */
    const uint8_t expected[] = { 0x66, 0x89, 0xEE };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_SI),
        SpasmOpReg(SpasmRegister_x86_64_BP),
        expected, sizeof(expected));
}

/* Opcode 0x00 is not a +r placeholder */
void test_bswap_r12(void)
{
    /* bswap r12 => 49 0F CC */
    const uint8_t expected[] = { 0x49, 0x0F, 0xCC };

    assemble_and_expect_1("bswap",
        SpasmOpReg(SpasmRegister_x86_64_R12),
        expected, sizeof(expected));
}

/* xmm16-31 need EVEX, which no form of addps has */
void test_addps_xmm16(void)
{
    assemble_and_expect_failure("addps",
        SpasmOpReg(SpasmRegister_x86_64_XMM1),
        SpasmOpReg(SpasmRegister_x86_64_XMM16));
}

/* ah, ch, dh and bh only exist without REX */
void test_high_byte_registers(void)
{
    /* mov ah, bl => 88 DC */
    const uint8_t mov_ah_bl[] = { 0x88, 0xDC };
    assemble_and_expect("mov", SpasmOpReg(SpasmRegister_x86_64_AH), SpasmOpReg(SpasmRegister_x86_64_BL),
                        mov_ah_bl, sizeof(mov_ah_bl));

    /* movzx eax, ah => 0F B6 C4 */
    const uint8_t movzx_eax_ah[] = { 0x0F, 0xB6, 0xC4 };
    assemble_and_expect("movzx", SpasmOpReg(SpasmRegister_x86_64_EAX), SpasmOpReg(SpasmRegister_x86_64_AH),
                        movzx_eax_ah, sizeof(movzx_eax_ah));

    /* mov ch, 5 => B5 05 */
    const uint8_t mov_ch_5[] = { 0xB5, 0x05 };
    assemble_and_expect("mov", SpasmOpReg(SpasmRegister_x86_64_CH), SpasmOpImm8(5),
                        mov_ch_5, sizeof(mov_ch_5));

    /* add dh, byte ptr [rax] => 02 30 */
    const uint8_t add_dh_mem[] = { 0x02, 0x30 };
    assemble_and_expect("add", SpasmOpReg(SpasmRegister_x86_64_DH), SpasmOpMemory(SpasmRegister_x86_64_RAX, 0, 0, 1),
                        add_dh_mem, sizeof(add_dh_mem));

    assemble_and_expect_failure("mov", SpasmOpReg(SpasmRegister_x86_64_AH), SpasmOpReg(SpasmRegister_x86_64_R9B));
    assemble_and_expect_failure("mov", SpasmOpReg(SpasmRegister_x86_64_BH), SpasmOpReg(SpasmRegister_x86_64_SIL));
    assemble_and_expect_failure("movzx", SpasmOpReg(SpasmRegister_x86_64_RAX), SpasmOpReg(SpasmRegister_x86_64_AH));
    assemble_and_expect_failure("mov", SpasmOpReg(SpasmRegister_x86_64_AH), SpasmOpMemory(SpasmRegister_x86_64_R8, 0, 0, 1));
}

int main(void)
{
    test_mov_ecx_edx();
    test_add_bl_cl();
    test_mov_sil_r9b();
    test_mov_dil_al();
    test_mov_si_bp();
    test_bswap_r12();
    test_addps_xmm16();
    test_high_byte_registers();

    return 0;
}
