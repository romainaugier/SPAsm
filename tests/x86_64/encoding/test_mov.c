/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */


#include "test_encoding_common.h"

/* mov r64, imm32 */
void test_mov_rax_imm32(void)
{
    /* mov rax, 1  => 48 C7 C0 01 00 00 00 */
    const uint8_t expected[] = {
        0x48, 0xC7, 0xC0, 0x01, 0x00, 0x00, 0x00
    };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_RAX),
        SpasmOpImm32(1),
        expected, sizeof(expected));
}

/* mov r64, r64 */
void test_mov_rbx_rcx(void)
{
    /* mov rbx, rcx => 48 89 CB */
    const uint8_t expected[] = {
        0x48, 0x89, 0xCB
    };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_RBX),
        SpasmOpReg(SpasmRegister_x86_64_RCX),
        expected, sizeof(expected));
}

/* mov r64, [r64] */
void test_mov_rax_ptr_rbx(void)
{
    /* mov rax, [rbx] => 48 8B 03 */
    const uint8_t expected[] = {
        0x48, 0x8B, 0x03
    };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_RAX),
        SpasmOpMemory(SpasmRegister_x86_64_RBX, 0, 0, 1),
        expected, sizeof(expected));
}

/* mov [r64], r64 */
void test_mov_ptr_rbx_rax(void)
{
    /* mov [rbx], rax => 48 89 03 */
    const uint8_t expected[] = {
        0x48, 0x89, 0x03
    };

    assemble_and_expect("mov",
        SpasmOpMemory(SpasmRegister_x86_64_RBX, 0, 0, 1),
        SpasmOpReg(SpasmRegister_x86_64_RAX),
        expected, sizeof(expected));
}

/* mov r64, imm64 */
void test_mov_r8_imm64(void)
{
    /* mov r8, 0x1122334455667788
       => 49 B8 88 77 66 55 44 33 22 11 */
    const uint8_t expected[] = {
        0x49, 0xB8,
        0x88, 0x77, 0x66, 0x55,
        0x44, 0x33, 0x22, 0x11
    };

    assemble_and_expect("mov",
        SpasmOpReg(SpasmRegister_x86_64_R8),
        SpasmOpImm64(0x1122334455667788ULL),
        expected, sizeof(expected));
}

int main(void)
{
    test_mov_rax_imm32();
    test_mov_rbx_rcx();
    test_mov_rax_ptr_rbx();
    test_mov_ptr_rbx_rax();
    test_mov_r8_imm64();

    return 0;
}
