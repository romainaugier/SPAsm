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
} EvexTest;

int main(void)
{
    const EvexTest tests[] = {
        /* Merging/zeroing masks */
        { "vaddps", { SpasmOpRegMaskZ(R(ZMM1), R(K1)), REG(ZMM2), REG(ZMM3) }, 3,
          { 0x62, 0xF1, 0x6C, 0xC9, 0x58, 0xCB }, 6 },
        { "vmovaps", { SpasmOpMemoryMask(R(RAX), R(NONE), 0, 1, 16, R(K1)), REG(XMM1) }, 2,
          { 0x62, 0xF1, 0x7C, 0x09, 0x29, 0x08 }, 6 },
        /* Broadcast, disp8*N uses the element size */
        { "vaddps", { SpasmOpRegMask(R(ZMM1), R(K1)), REG(ZMM2), SpasmOpMemoryBroadcast(R(RAX), R(NONE), 0, 1, 4, 16) }, 3,
          { 0x62, 0xF1, 0x6C, 0x59, 0x58, 0x08 }, 6 },
        /* {1to4} picks the 128-bit form when the registers cannot */
        { "vfpclassps", { SpasmOpRegMask(R(K2), R(K1)), SpasmOpMemoryBroadcast(R(R12), R(NONE), 0, 1, 4, 4), SpasmOpImm8(1) }, 3,
          { 0x62, 0xD3, 0x7D, 0x19, 0x66, 0x14, 0x24, 0x01 }, 8 },
        /* Embedded rounding in L'L, {sae} leaves L'L at 0 */
        { "vaddps", { REG(ZMM1), REG(ZMM2), REG(ZMM3), SpasmOpRounding(SpasmRounding_Zero) }, 4,
          { 0x62, 0xF1, 0x6C, 0x78, 0x58, 0xCB }, 6 },
        { "vaddss", { REG(XMM1), REG(XMM2), REG(XMM3), SpasmOpRounding(SpasmRounding_Up) }, 4,
          { 0x62, 0xF1, 0x6E, 0x58, 0x58, 0xCB }, 6 },
        { "vmaxps", { REG(ZMM1), REG(ZMM2), REG(ZMM3), SpasmOpSae() }, 4,
          { 0x62, 0xF1, 0x6C, 0x18, 0x5F, 0xCB }, 6 },
        { "vcvtsi2ss", { REG(XMM1), REG(XMM2), REG(EAX), SpasmOpRounding(SpasmRounding_Nearest) }, 4,
          { 0x62, 0xF1, 0x6E, 0x18, 0x2A, 0xC8 }, 6 },
        /* The rounding operand can be anywhere (llvm-mc order) */
        { "vcvtsi2ss", { REG(XMM1), REG(XMM2), SpasmOpRounding(SpasmRounding_Nearest), REG(EAX) }, 4,
          { 0x62, 0xF1, 0x6E, 0x18, 0x2A, 0xC8 }, 6 },
        /* xmm16-31 need EVEX, with a compressed disp8 (256 / 16) */
        { "vaddps", { REG(XMM17), REG(XMM2), SpasmOpMemory(R(RAX), R(NONE), 256, 1) }, 3,
          { 0x62, 0xE1, 0x6C, 0x08, 0x58, 0x48, 0x10 }, 7 },
        { "vaddss", { REG(XMM17), REG(XMM2), REG(XMM3) }, 3,
          { 0x62, 0xE1, 0x6E, 0x08, 0x58, 0xCB }, 6 },
        /* VEX is preferred when it can encode the instruction, even if longer */
        { "vaddps", { REG(XMM1), REG(XMM2), SpasmOpMemory(R(RAX), R(NONE), 256, 1) }, 3,
          { 0xC5, 0xE8, 0x58, 0x88, 0x00, 0x01, 0x00, 0x00 }, 8 },
        /* disp8*N only when the displacement is a multiple of N */
        { "vaddps", { REG(ZMM1), REG(ZMM2), SpasmOpMemory(R(RAX), R(NONE), 65, 1) }, 3,
          { 0x62, 0xF1, 0x6C, 0x48, 0x58, 0x88, 0x41, 0x00, 0x00, 0x00 }, 10 },
        /* EVEX.X extends a register ModRM.rm (zmm17) */
        { "vmovaps", { REG(ZMM2), REG(ZMM17) }, 2, { 0x62, 0xB1, 0x7C, 0x48, 0x28, 0xD1 }, 6 },
        /* zmm31/zmm30 with 32-bit addressing */
        { "vpaddd", { REG(ZMM31), REG(ZMM30), SpasmOpMemory(R(EAX), R(NONE), 64, 1) }, 3,
          { 0x67, 0x62, 0x61, 0x0D, 0x40, 0xFE, 0x78, 0x01 }, 8 },
        /* Gather with a zmm index */
        { "vpgatherdd", { SpasmOpRegMask(R(ZMM1), R(K1)), SpasmOpMemory(R(RAX), R(ZMM2), 0, 4) }, 2,
          { 0x62, 0xF2, 0x7D, 0x49, 0x90, 0x0C, 0x90 }, 7 },
        /* Opmask destination with an opmask */
        { "vcmpps", { SpasmOpRegMask(R(K1), R(K2)), REG(ZMM1), REG(ZMM2), SpasmOpImm8(0) }, 4,
          { 0x62, 0xF1, 0x74, 0x4A, 0xC2, 0xCA, 0x00 }, 7 },
        { "vpbroadcastd", { SpasmOpRegMaskZ(R(ZMM1), R(K1)), REG(EAX) }, 2,
          { 0x62, 0xF2, 0x7D, 0xC9, 0x7C, 0xC8 }, 6 },
        /* Opmask instructions are VEX */
        { "kmovw", { REG(K1), REG(K2) }, 2, { 0xC5, 0xF8, 0x90, 0xCA }, 4 },
    };

    for(size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
        assemble_ops_and_expect(tests[i].mnemonic,
                                tests[i].ops,
                                tests[i].num_ops,
                                tests[i].expected,
                                tests[i].expected_size);

    /* k0 is not a write mask */
    assemble_and_expect_failure("vmovaps", SpasmOpRegMask(R(ZMM1), R(K0)), REG(ZMM2));

    /* Zeroing is only valid on registers */
    assemble_and_expect_failure("vmovaps",
                                (SpasmOperand){ .type = SpasmOperandType_Mem, .mem_reg = R(RAX),
                                                .mem_size = 64, .mask = R(K1), .zeroing = true },
                                REG(ZMM1));

    /* AVX-512 gathers need a mask */
    assemble_and_expect_failure("vpgatherdd", REG(ZMM1), SpasmOpMemory(R(RAX), R(ZMM2), 0, 4));

    /* Masks need an EVEX form */
    assemble_and_expect_failure("addps", SpasmOpRegMask(R(XMM1), R(K1)), REG(XMM2));

    return 0;
}
