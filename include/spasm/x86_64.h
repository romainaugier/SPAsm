/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

#pragma once

#if !defined(__SPASM_X86_64)
#define __SPASM_X86_64

#include "spasm/bytecode.h"
#include "spasm/instruction.h"

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

    /* AVX-512 extensions outside of x86-64 v4 */
    Spasm_x86_64_CPUFlag_AVX512IFMA,
    Spasm_x86_64_CPUFlag_AVX512VBMI,
    Spasm_x86_64_CPUFlag_AVX512VPOPCNTDQ,
} Spasm_x86_64_CPUFlag;

/* Operand kinds of the instruction forms, matched against SpasmOperand */
typedef enum
{
    Spasm_x86_64_OperandKind_NONE,

    Spasm_x86_64_OperandKind_R8,
    Spasm_x86_64_OperandKind_R16,
    Spasm_x86_64_OperandKind_R32,
    Spasm_x86_64_OperandKind_R64,
    Spasm_x86_64_OperandKind_XMM,
    Spasm_x86_64_OperandKind_YMM,
    Spasm_x86_64_OperandKind_ZMM,
    Spasm_x86_64_OperandKind_K,

    /* Fixed registers, not encoded */
    Spasm_x86_64_OperandKind_AL,
    Spasm_x86_64_OperandKind_AX,
    Spasm_x86_64_OperandKind_EAX,
    Spasm_x86_64_OperandKind_RAX,
    Spasm_x86_64_OperandKind_CL,
    Spasm_x86_64_OperandKind_XMM0,

    /* Memory, M is unsized (lea, prefetch...) */
    Spasm_x86_64_OperandKind_M,
    Spasm_x86_64_OperandKind_M8,
    Spasm_x86_64_OperandKind_M16,
    Spasm_x86_64_OperandKind_M32,
    Spasm_x86_64_OperandKind_M64,
    Spasm_x86_64_OperandKind_M128,
    Spasm_x86_64_OperandKind_M256,
    Spasm_x86_64_OperandKind_M512,

    /* VSIB memory (gathers), index is a xmm/ymm register */
    Spasm_x86_64_OperandKind_VM32X,
    Spasm_x86_64_OperandKind_VM32Y,
    Spasm_x86_64_OperandKind_VM64X,
    Spasm_x86_64_OperandKind_VM64Y,
    Spasm_x86_64_OperandKind_VM32Z,
    Spasm_x86_64_OperandKind_VM64Z,

    Spasm_x86_64_OperandKind_IMM8,
    Spasm_x86_64_OperandKind_IMM16,
    Spasm_x86_64_OperandKind_IMM32,
    Spasm_x86_64_OperandKind_IMM64,

    /* Fixed immediates, not encoded (shl r, 1 / int 3) */
    Spasm_x86_64_OperandKind_ONE,
    Spasm_x86_64_OperandKind_THREE,

    Spasm_x86_64_OperandKind_REL8,
    Spasm_x86_64_OperandKind_REL32,
} Spasm_x86_64_OperandKind;

/* Where an operand goes in the encoding, 3 bits per operand in Spasm_x86_64_Form.roles */
typedef enum
{
    Spasm_x86_64_OperandRole_None,
    Spasm_x86_64_OperandRole_ModRMReg,
    Spasm_x86_64_OperandRole_ModRMRm,
    Spasm_x86_64_OperandRole_Vvvv,
    Spasm_x86_64_OperandRole_OpcodeReg,
    Spasm_x86_64_OperandRole_Imm,
    Spasm_x86_64_OperandRole_Is4,
    Spasm_x86_64_OperandRole_Rel,
} Spasm_x86_64_OperandRole;

typedef enum
{
    Spasm_x86_64_FormFlag_P66 = 1 << 0,
    Spasm_x86_64_FormFlag_PF2 = 1 << 1,
    Spasm_x86_64_FormFlag_PF3 = 1 << 2,
    Spasm_x86_64_FormFlag_W = 1 << 3, /* REX.W, VEX.W or EVEX.W */
    Spasm_x86_64_FormFlag_VEX = 1 << 4,
    Spasm_x86_64_FormFlag_EVEX = 1 << 5,
    Spasm_x86_64_FormFlag_IMMSEXT = 1 << 6,
} Spasm_x86_64_FormFlag;

/* Bits 2-7 of Spasm_x86_64_Form.evex, bits 0-1 are the vector length */
typedef enum
{
    Spasm_x86_64_EvexFlag_MASK = 1 << 2,    /* The destination accepts an opmask */
    Spasm_x86_64_EvexFlag_ZEROING = 1 << 3, /* The destination accepts {z} */
    Spasm_x86_64_EvexFlag_MASKREQ = 1 << 4, /* The opmask is required (gathers, scatters) */
    Spasm_x86_64_EvexFlag_BCST = 1 << 5,    /* The memory operand can broadcast, 64-bit elements if W */
    Spasm_x86_64_EvexFlag_ER = 1 << 6,      /* Accepts an embedded rounding operand ({rn-sae}...) */
    Spasm_x86_64_EvexFlag_SAE = 1 << 7,     /* Accepts a suppress-all-exceptions operand ({sae}) */
} Spasm_x86_64_EvexFlag;

#define SPASM_X86_64_VECTOR_LENGTH_MASK 0x3

#define SPASM_X86_64_MODRM_NONE 0xFF
#define SPASM_X86_64_MODRM_REG 0x08

/* The two sources (vvvv and ModRM.rm) of the VEX form can be swapped */
#define SPASM_X86_64_VEX_COMMUTABLE 0x80

/*
    One encoding of an instruction form (16 bytes). Forms of a mnemonic are contiguous in
    spasm_x86_64_forms, the mnemonic itself only lives in the gperf mnemonic table
*/
typedef struct
{
    uint8_t operands[4];
    uint16_t roles;
    uint8_t opcode[3];
    uint8_t opcode_len;
    uint8_t modrm; /* SPASM_X86_64_MODRM_NONE, SPASM_X86_64_MODRM_REG or the /digit */
    uint8_t flags;
    uint8_t vex; /* VEX/EVEX map in bits 0-4, pp in bits 5-6, SPASM_X86_64_VEX_COMMUTABLE */
    uint8_t cpu_flag;
    uint8_t evex; /* VEX.L or EVEX.L'L in bits 0-1, Spasm_x86_64_EvexFlag */
    uint8_t disp8_shift; /* EVEX compressed disp8: the displacement is scaled by 1 << disp8_shift */
} Spasm_x86_64_Form;

#define SPASM_X86_64_FORM_ROLE(form, i) ((Spasm_x86_64_OperandRole)(((form)->roles >> (3 * (i))) & 0x7))

/*
    Entry of the gperf mnemonic table (x86_64_mnemonics.gperf): maps a mnemonic to the range
    [first, first + count) of its forms in spasm_x86_64_forms
*/
typedef struct Spasm_x86_64_MnemonicKeyword
{
    int name;
    uint16_t first;
    uint16_t count;
} Spasm_x86_64_MnemonicKeyword;

SPASM_API const Spasm_x86_64_MnemonicKeyword* spasm_x86_64_mnemonic_lookup(const char* str, size_t len);

/* Iteration over the mnemonic table and the forms, for tests and tooling */

SPASM_API size_t spasm_x86_64_mnemonics_count(void);

SPASM_API const Spasm_x86_64_MnemonicKeyword* spasm_x86_64_mnemonic_at(size_t i, const char** name);

SPASM_API extern const Spasm_x86_64_Form spasm_x86_64_forms[];

SPASM_API extern const size_t spasm_x86_64_forms_count;

SPASM_API const char* spasm_x86_64_get_register_as_string(SpasmRegister reg);

#define SPASM_X86_64_MAX_INSTRUCTION_SIZE 15

/* Encodes into out (at least SPASM_X86_64_MAX_INSTRUCTION_SIZE bytes), the size goes in out_size */
SPASM_API bool spasm_x86_64_encode_instruction_to(SpasmInstruction* instr, SpasmByte* out, uint32_t* out_size);

/* Returns true if the mnemonic has relative forms (jumps, calls, loops), and which widths it has */
SPASM_API bool spasm_x86_64_is_branch_mnemonic(const char* mnemonic,
                                               size_t mnemonic_len,
                                               bool* has_rel8,
                                               bool* has_rel32);

SPASM_API bool spasm_x86_64_encode_instruction(SpasmInstruction* instr,
                                               SpasmByteCode* out);

#endif /* !defined(__SPASM_X86_64) */

#endif /* defined(SPASM_ENABLE_X86_64) */
