/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

#define REG(r) SpasmOpReg(SpasmRegister_x86_64_##r)

typedef struct
{
    const char* mnemonic;
    SpasmOperand ops[3];
    uint8_t num_ops;
    uint8_t expected[16];
    size_t expected_size;
} ShortestTest;

int main(void)
{
    const ShortestTest tests[] = {
        /* mov r32, imm32: B8+r is shorter than C7 /0 */
        { "mov", { REG(ECX), SpasmOpImm32(5) }, 2, { 0xB9, 0x05, 0x00, 0x00, 0x00 }, 5 },
        /* mov r64, imm: sign-extended imm32 when it fits, imm64 otherwise */
        { "mov", { REG(RCX), SpasmOpImm64(-1) }, 2, { 0x48, 0xC7, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF }, 7 },
        { "mov", { REG(RCX), SpasmOpImm32(0x80000000LL) }, 2,
          { 0x48, 0xB9, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00 }, 10 },
        /* imul r64, r64, imm8 */
        { "imul", { REG(RCX), REG(RSI), SpasmOpImm32(5) }, 3, { 0x48, 0x6B, 0xCE, 0x05 }, 4 },
        /* test rax, imm32: short rax form */
        { "test", { REG(RAX), SpasmOpImm32(0x1000) }, 2, { 0x48, 0xA9, 0x00, 0x10, 0x00, 0x00 }, 6 },
        /* add ax, 5: on a tie, the sign-extended imm8 form is preferred to the short ax form */
        { "add", { REG(AX), SpasmOpImm16(5) }, 2, { 0x66, 0x83, 0xC0, 0x05 }, 4 },
        /* shl rax, 1: D1 /4 */
        { "shl", { REG(RAX), SpasmOpImm8(1) }, 2, { 0x48, 0xD1, 0xE0 }, 3 },
        /* int 3: CC */
        { "int", { SpasmOpImm8(3) }, 1, { 0xCC }, 1 },
        /* pextrw r32, xmm, imm8: 0F C5 is shorter than the SSE4.1 0F 3A 15 */
        { "pextrw", { REG(ECX), REG(XMM1), SpasmOpImm8(2) }, 3, { 0x66, 0x0F, 0xC5, 0xC9, 0x02 }, 5 },
        /* rorx: the imm8 is a rotation count, not sign-extended */
        { "rorx", { REG(RAX), REG(RCX), SpasmOpImm32(200) }, 3, { 0xC4, 0xE3, 0xFB, 0xF0, 0xC1, 0xC8 }, 6 },
        /* xchg ecx, eax: 90+r */
        { "xchg", { REG(ECX), REG(EAX) }, 2, { 0x91 }, 1 },
        /* xchg eax, eax: 90 is nop and would not zero the upper half of rax */
        { "xchg", { REG(EAX), REG(EAX) }, 2, { 0x87, 0xC0 }, 2 },
        /* xchg dl, cl */
        { "xchg", { REG(DL), REG(CL) }, 2, { 0x86, 0xD1 }, 2 },
    };

    for(size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
        assemble_ops_and_expect(tests[i].mnemonic,
                                tests[i].ops,
                                tests[i].num_ops,
                                tests[i].expected,
                                tests[i].expected_size);

    return 0;
}
