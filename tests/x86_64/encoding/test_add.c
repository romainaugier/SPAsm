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

/* add r64, imm32 */
void test_add_rcx_imm32(void)
{
    /* add rcx, 5 => 48 81 C1 05 00 00 00 */
    const uint8_t expected[] = {
        0x48, 0x81, 0xC1,
        0x05, 0x00, 0x00, 0x00
    };

    assemble_and_expect("add",
        SpasmOpReg(SpasmRegister_x86_64_RCX),
        SpasmOpImm32(5),
        expected, sizeof(expected));
}

int main(void)
{
    test_add_rax_rbx();
    test_add_rcx_imm32();

    return 0;
}
