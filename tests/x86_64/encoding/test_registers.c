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

int main(void)
{
    test_mov_ecx_edx();
    test_add_bl_cl();
    test_mov_sil_r9b();
    test_mov_dil_al();
    test_mov_si_bp();
    test_bswap_r12();

    return 0;
}
