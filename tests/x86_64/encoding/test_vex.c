/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

#define REG(r) SpasmOpReg(SpasmRegister_x86_64_##r)
#define R(r) SpasmRegister_x86_64_##r

typedef struct
{
    const char* mnemonic;
    SpasmOperand ops[4];
    uint8_t num_ops;
    uint8_t expected[16];
    size_t expected_size;
} VexTest;

int main(void)
{
    const VexTest tests[] = {
        /* AVX, 2-byte VEX */
        { "vaddps", { REG(XMM1), REG(XMM2), REG(XMM3) }, 3, { 0xC5, 0xE8, 0x58, 0xCB }, 4 },
        { "vaddps", { REG(YMM9), REG(YMM2), REG(YMM3) }, 3, { 0xC5, 0x6C, 0x58, 0xCB }, 4 },
        /* Commutative: xmm9 moves to vvvv to keep the 2-byte VEX */
        { "vaddps", { REG(XMM1), REG(XMM2), REG(XMM9) }, 3, { 0xC5, 0xB0, 0x58, 0xCA }, 4 },
        /* Not commutative: VEX.B needs the 3-byte VEX */
        { "vsubps", { REG(XMM1), REG(XMM2), REG(XMM9) }, 3, { 0xC4, 0xC1, 0x68, 0x5C, 0xC9 }, 5 },
        /* vcmpps is only commutative for symmetric predicates (lt is not, eq is) */
        { "vcmpps", { REG(XMM1), REG(XMM2), REG(XMM9), SpasmOpImm8(1) }, 4,
          { 0xC4, 0xC1, 0x68, 0xC2, 0xC9, 0x01 }, 6 },
        { "vcmpps", { REG(XMM1), REG(XMM2), REG(XMM9), SpasmOpImm8(0) }, 4,
          { 0xC5, 0xB0, 0xC2, 0xCA, 0x00 }, 5 },
        /* VEX.X and VEX.B from the memory operand */
        { "vaddps", { REG(XMM1), REG(XMM2), SpasmOpMemory(R(R9), R(R10), 16, 8) }, 3,
          { 0xC4, 0x81, 0x68, 0x58, 0x4C, 0xD1, 0x10 }, 7 },
        /* vmovaps xmm1, xmm9: the store form (0x29) keeps the 2-byte VEX */
        { "vmovaps", { REG(XMM1), REG(XMM9) }, 2, { 0xC5, 0x78, 0x29, 0xC9 }, 4 },
        { "vmovaps", { SpasmOpMemory(R(RSP), R(NONE), 32, 1), REG(YMM15) }, 2,
          { 0xC5, 0x7C, 0x29, 0x7C, 0x24, 0x20 }, 6 },
        { "vbroadcastss", { REG(YMM1), SpasmOpMemory(R(RIP), R(NONE), 64, 1) }, 2,
          { 0xC4, 0xE2, 0x7D, 0x18, 0x0D, 0x40, 0x00, 0x00, 0x00 }, 9 },
        { "vzeroupper", { { 0 } }, 0, { 0xC5, 0xF8, 0x77 }, 3 },
        /* FMA (0F38 map, VEX.W) */
        { "vfmadd231ps", { REG(YMM1), REG(YMM2), REG(YMM3) }, 3, { 0xC4, 0xE2, 0x6D, 0xB8, 0xCB }, 5 },
        { "vfmadd213sd", { REG(XMM9), REG(XMM10), SpasmOpMemory(R(RAX), R(NONE), 0, 1) }, 3,
          { 0xC4, 0x62, 0xA9, 0xA9, 0x08 }, 5 },
        /* AVX2 */
        { "vpaddd", { REG(YMM1), REG(YMM2), REG(YMM3) }, 3, { 0xC5, 0xED, 0xFE, 0xCB }, 4 },
        { "vpermq", { REG(YMM1), REG(YMM2), SpasmOpImm8(0x1B) }, 3, { 0xC4, 0xE3, 0xFD, 0x00, 0xCA, 0x1B }, 6 },
        /* Gathers (VSIB) */
        { "vpgatherdd", { REG(XMM1), SpasmOpMemory(R(RAX), R(XMM2), 8, 4), REG(XMM3) }, 3,
          { 0xC4, 0xE2, 0x61, 0x90, 0x4C, 0x90, 0x08 }, 7 },
        { "vgatherqpd", { REG(YMM1), SpasmOpMemory(R(R13), R(YMM10), 0, 8), REG(YMM3) }, 3,
          { 0xC4, 0x82, 0xE5, 0x93, 0x4C, 0xD5, 0x00 }, 7 },
        /* is4: the fourth register goes in imm8[7:4] */
        { "vblendvps", { REG(XMM1), REG(XMM2), REG(XMM3), REG(XMM12) }, 4,
          { 0xC4, 0xE3, 0x69, 0x4A, 0xCB, 0xC0 }, 6 },
        /* BMI1 on general purpose registers (VEX.W1) */
        { "andn", { REG(RAX), REG(RBX), REG(RCX) }, 3, { 0xC4, 0xE2, 0xE0, 0xF2, 0xC1 }, 5 },
    };

    for(size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
        assemble_ops_and_expect(tests[i].mnemonic,
                                tests[i].ops,
                                tests[i].num_ops,
                                tests[i].expected,
                                tests[i].expected_size);

    return 0;
}
