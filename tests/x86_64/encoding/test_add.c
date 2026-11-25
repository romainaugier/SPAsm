/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

/* add r64, r64 */
void test_add_rax_rbx(void)
{
    /* add rax, rbx => 48 01 D8 */
    const uint8_t expected[] = {
        0x48, 0x01, 0xD8
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RAX),
        SpasmOpReg(SpasmRegister_x86_64_RBX),
        expected, sizeof(expected));
}

/* add r64, imm8 (sign-extended), the shortest form is picked whatever the immediate type */
void test_add_rcx_imm8(void)
{
    /* add rcx, 5 => 48 83 C1 05 */
    const uint8_t expected[] = {
        0x48, 0x83, 0xC1, 0x05
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RCX),
        SpasmOpImm32(5),
        expected, sizeof(expected));
}

/* add r64, imm32 */
void test_add_rcx_imm32(void)
{
    /* add rcx, 0x1000 => 48 81 C1 00 10 00 00 */
    const uint8_t expected[] = {
        0x48, 0x81, 0xC1,
        0x00, 0x10, 0x00, 0x00
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RCX),
        SpasmOpImm8(0x1000),
        expected, sizeof(expected));
}

/* add r64, imm32 with a fixed immediate */
void test_add_rcx_fixed_imm32(void)
{
    /* add rcx, 5 => 48 81 C1 05 00 00 00 */
    const uint8_t expected[] = {
        0x48, 0x81, 0xC1,
        0x05, 0x00, 0x00, 0x00
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RCX),
        SpasmOpImmFixed32(5),
        expected, sizeof(expected));
}

/* 128 does not fit a sign-extended imm8 */
void test_add_rax_128(void)
{
    /* add rax, 128 => 48 05 80 00 00 00 (short rax form) */
    const uint8_t expected[] = {
        0x48, 0x05,
        0x80, 0x00, 0x00, 0x00
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RAX),
        SpasmOpImm8(128),
        expected, sizeof(expected));
}

/* add al, imm8 short form */
void test_add_al_imm8(void)
{
    /* add al, -128 => 04 80 */
    const uint8_t expected[] = { 0x04, 0x80 };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_AL),
        SpasmOpImm8(-128),
        expected, sizeof(expected));
}

/* add byte ptr [rax], 255 accepts the unsigned imm8 range */
void test_add_m8_255(void)
{
    /* add byte ptr [rax], 255 => 80 00 FF */
    const uint8_t expected[] = { 0x80, 0x00, 0xFF };

    assemble_and_expect("add",
        SpasmOpMemByte(SpasmRegister_x86_64_RAX, 0, 0, 1),
        SpasmOpImm32(255),
        expected, sizeof(expected));
}

int main(void)
{
    test_add_rax_rbx();
    test_add_rcx_imm8();
    test_add_rcx_imm32();
    test_add_rcx_fixed_imm32();
    test_add_rax_128();
    test_add_al_imm8();
    test_add_m8_255();

    return 0;
}
