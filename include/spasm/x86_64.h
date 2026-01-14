/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

#pragma once

#if !defined(__SPASM_X86_64)
#define __SPASM_X86_64

#include "spasm/bytecode.h"
#include "spasm/instruction.h"

typedef enum
{
    Spasm_x86_64_PrefixType_NONE,
    Spasm_x86_64_PrefixType_REX,
    Spasm_x86_64_PrefixType_VEX,
    Spasm_x86_64_PrefixType_VEX2,
    Spasm_x86_64_PrefixType_VEX3,
    Spasm_x86_64_PrefixType_EVEX,
} Spasm_x86_64_PrefixType;

/*
    https://en.wikipedia.org/wiki/X86-64#Microarchitecture_levels
*/
typedef enum
{
    /*
        x86-64 v1 (baseline, supported by all x86-64 CPUs)
        Matches AMD K8 (2003) and Intel Prescott (2004)
    */
    Spasm_x86_64_CPUFlag_BASE,
    Spasm_x86_64_CPUFlag_CMOV,
    Spasm_x86_64_CPUFlag_CX8,
    Spasm_x86_64_CPUFlag_FPU,
    Spasm_x86_64_CPUFlag_FXSR,
    Spasm_x86_64_CPUFlag_MMX,
    Spasm_x86_64_CPUFlag_OSFXSR,
    Spasm_x86_64_CPUFlag_SCE,
    Spasm_x86_64_CPUFlag_SSE,
    Spasm_x86_64_CPUFlag_SSE2,

    /*
        x86-64 v2 (Intel Nehalem, AMD Bulldozer, Jaguar, VIA Nano/Eden "C")
        Matches Intel Nehalem (2008) minus Intel-specific extras
    */
    Spasm_x86_64_CPUFlag_CX16, /* CmpXchg16b */
    Spasm_x86_64_CPUFlag_LAHFSAHF,
    Spasm_x86_64_CPUFlag_POPCNT,
    Spasm_x86_64_CPUFlag_SSE3,
    Spasm_x86_64_CPUFlag_SSE4_1,
    Spasm_x86_64_CPUFlag_SSE4_2,
    Spasm_x86_64_CPUFlag_SSSE3,

    /*
        x86-64 v3 (Intel Haswell AVX2, AMD Excavator, QEMU ≥ 7.2)
        Matches Intel Haswell (2013) minus Intel-specific extras
    */
    Spasm_x86_64_CPUFlag_AVX,
    Spasm_x86_64_CPUFlag_AVX2,
    Spasm_x86_64_CPUFlag_BMI1,
    Spasm_x86_64_CPUFlag_BMI2,
    Spasm_x86_64_CPUFlag_F16C,
    Spasm_x86_64_CPUFlag_FMA,
    Spasm_x86_64_CPUFlag_LZCNT,
    Spasm_x86_64_CPUFlag_MOVBE,
    Spasm_x86_64_CPUFlag_OSXSAVE,

    /*
        x86-64 v4 (Intel Skylake AVX-512, AMD Zen 4)
        Matches Intel Skylake-X (2017) minus Intel-specific extras
    */
    Spasm_x86_64_CPUFlag_AVX512F,
    Spasm_x86_64_CPUFlag_AVX512BW,
    Spasm_x86_64_CPUFlag_AVX512CD,
    Spasm_x86_64_CPUFlag_AVX512DQ,
    Spasm_x86_64_CPUFlag_AVX512VL,
} Spasm_x86_64_CPUFlag;

typedef struct
{
    const char* mnemonic;
    uint8_t mnemonic_len;
    uint8_t operand_types[4];
    uint16_t operand_sizes[4];
    uint8_t opcode[4];
    uint8_t opcode_len;
    uint8_t needs_modrm;
    uint8_t prefix;
    uint8_t pp;
    uint8_t mmmmm;
    uint8_t cpu_flag;
    bool reg_in_opcode;
    bool reg_in_modrm_reg;
    uint8_t modrm_reg_operand;
    bool reg_in_modrm_rm;
    uint8_t modrm_rm_operand;
    bool force_rex_w;
} Spasm_x86_64_InstructionInfo;

SPASM_API bool spasm_x86_64_encode_instruction(SpasmInstruction* instr,
                                               SpasmByteCode* out);

#endif /* !defined(__SPASM_X86_64) */

#endif /* defined(SPASM_ENABLE_X86_64) */
