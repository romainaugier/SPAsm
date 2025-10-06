/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_REGISTER)
#define __SPASM_REGISTER

#include "spasm/common.h"

typedef enum 
{
    /* x86_64 Registers https://wiki.osdev.org/CPU_Registers_x86-64 */
#if defined(SPASM_ENABLE_X86_64)
    SpasmRegister_x86_64_NONE,

    /* 8-bit low */
    SpasmRegister_x86_64_AL,
    SpasmRegister_x86_64_BL,
    SpasmRegister_x86_64_CL,
    SpasmRegister_x86_64_DL,
    SpasmRegister_x86_64_SIL,
    SpasmRegister_x86_64_DIL,
    SpasmRegister_x86_64_SPL,
    SpasmRegister_x86_64_BPL,
    SpasmRegister_x86_64_R8B,
    SpasmRegister_x86_64_R9B,
    SpasmRegister_x86_64_R10B,
    SpasmRegister_x86_64_R11B,
    SpasmRegister_x86_64_R12B,
    SpasmRegister_x86_64_R13B,
    SpasmRegister_x86_64_R14B,
    SpasmRegister_x86_64_R15B,

    /* 16-bit */
    SpasmRegister_x86_64_AX,
    SpasmRegister_x86_64_BX,
    SpasmRegister_x86_64_CX,
    SpasmRegister_x86_64_DX,
    SpasmRegister_x86_64_SI,
    SpasmRegister_x86_64_DI,
    SpasmRegister_x86_64_SP,
    SpasmRegister_x86_64_BP,
    SpasmRegister_x86_64_R8W,
    SpasmRegister_x86_64_R9W,
    SpasmRegister_x86_64_R10W,
    SpasmRegister_x86_64_R11W,
    SpasmRegister_x86_64_R12W,
    SpasmRegister_x86_64_R13W,
    SpasmRegister_x86_64_R14W,
    SpasmRegister_x86_64_R15W,

    /* 32-bit */
    SpasmRegister_x86_64_EAX,
    SpasmRegister_x86_64_EBX,
    SpasmRegister_x86_64_ECX,
    SpasmRegister_x86_64_EDX,
    SpasmRegister_x86_64_ESI,
    SpasmRegister_x86_64_EDI,
    SpasmRegister_x86_64_ESP,
    SpasmRegister_x86_64_EBP,
    SpasmRegister_x86_64_R8D,
    SpasmRegister_x86_64_R9D,
    SpasmRegister_x86_64_R10D,
    SpasmRegister_x86_64_R11D,
    SpasmRegister_x86_64_R12D,
    SpasmRegister_x86_64_R13D,
    SpasmRegister_x86_64_R14D,
    SpasmRegister_x86_64_R15D,

    /* 64-bit */
    SpasmRegister_x86_64_RAX,
    SpasmRegister_x86_64_RCX,
    SpasmRegister_x86_64_RDX,
    SpasmRegister_x86_64_RBX,
    SpasmRegister_x86_64_RSP,
    SpasmRegister_x86_64_RBP,
    SpasmRegister_x86_64_RSI,
    SpasmRegister_x86_64_RDI,
    SpasmRegister_x86_64_R8,
    SpasmRegister_x86_64_R9,
    SpasmRegister_x86_64_R10,
    SpasmRegister_x86_64_R11,
    SpasmRegister_x86_64_R12,
    SpasmRegister_x86_64_R13,
    SpasmRegister_x86_64_R14,
    SpasmRegister_x86_64_R15,

    /* x86_64 SIMD */
    SpasmRegister_x86_64_XMM0,
    SpasmRegister_x86_64_XMM1,
    SpasmRegister_x86_64_XMM2,
    SpasmRegister_x86_64_XMM3,
    SpasmRegister_x86_64_XMM4,
    SpasmRegister_x86_64_XMM5,
    SpasmRegister_x86_64_XMM6,
    SpasmRegister_x86_64_XMM7,
    SpasmRegister_x86_64_XMM8,
    SpasmRegister_x86_64_XMM9,
    SpasmRegister_x86_64_XMM10,
    SpasmRegister_x86_64_XMM11,
    SpasmRegister_x86_64_XMM12,
    SpasmRegister_x86_64_XMM13,
    SpasmRegister_x86_64_XMM14,
    SpasmRegister_x86_64_XMM15,

    SpasmRegister_x86_64_YMM0,
    SpasmRegister_x86_64_YMM1,
    SpasmRegister_x86_64_YMM2,
    SpasmRegister_x86_64_YMM3,
    SpasmRegister_x86_64_YMM4,
    SpasmRegister_x86_64_YMM5,
    SpasmRegister_x86_64_YMM6,
    SpasmRegister_x86_64_YMM7,
    SpasmRegister_x86_64_YMM8,
    SpasmRegister_x86_64_YMM9,
    SpasmRegister_x86_64_YMM10,
    SpasmRegister_x86_64_YMM11,
    SpasmRegister_x86_64_YMM12,
    SpasmRegister_x86_64_YMM13,
    SpasmRegister_x86_64_YMM14,
    SpasmRegister_x86_64_YMM15,

    SpasmRegister_x86_64_ZMM0,
    SpasmRegister_x86_64_ZMM1,
    SpasmRegister_x86_64_ZMM2,
    SpasmRegister_x86_64_ZMM3,
    SpasmRegister_x86_64_ZMM4,
    SpasmRegister_x86_64_ZMM5,
    SpasmRegister_x86_64_ZMM6,
    SpasmRegister_x86_64_ZMM7,
    SpasmRegister_x86_64_ZMM8,
    SpasmRegister_x86_64_ZMM9,
    SpasmRegister_x86_64_ZMM10,
    SpasmRegister_x86_64_ZMM11,
    SpasmRegister_x86_64_ZMM12,
    SpasmRegister_x86_64_ZMM13,
    SpasmRegister_x86_64_ZMM14,
    SpasmRegister_x86_64_ZMM15,

    /* AVX 512 Operation Mask Registers */
    SpasmRegister_x86_64_K0,
    SpasmRegister_x86_64_K1,
    SpasmRegister_x86_64_K2,
    SpasmRegister_x86_64_K3,
    SpasmRegister_x86_64_K4,
    SpasmRegister_x86_64_K5,
    SpasmRegister_x86_64_K6,
    SpasmRegister_x86_64_K7,

    /* Pointer Registers */
    SpasmRegister_x86_64_RIP,

    /* Segment Registers */
    SpasmRegister_x86_64_CS, /* Code Segment */
    SpasmRegister_x86_64_DS, /* Data Segment */
    SpasmRegister_x86_64_SS, /* Stack Segment */
    SpasmRegister_x86_64_ES, /* Extra Segment (used for string operations) */
    SpasmRegister_x86_64_FS, /* General-purpose Segment */
    SpasmRegister_x86_64_GS, /* General-purpose Segment  */

    /* RFlags Register */
    SpasmRegister_x86_64_RFlags,

    /* Control Registers */
    SpasmRegister_x86_64_CR0,
    SpasmRegister_x86_64_CR1,
    SpasmRegister_x86_64_CR2,
    SpasmRegister_x86_64_CR3,
    SpasmRegister_x86_64_CR4,
    SpasmRegister_x86_64_CR5,
    SpasmRegister_x86_64_CR6,
    SpasmRegister_x86_64_CR7,
    SpasmRegister_x86_64_CR8,
    SpasmRegister_x86_64_CR9,
    SpasmRegister_x86_64_CR10,
    SpasmRegister_x86_64_CR11,
    SpasmRegister_x86_64_CR12,
    SpasmRegister_x86_64_CR13,
    SpasmRegister_x86_64_CR14,
    SpasmRegister_x86_64_CR15,

    /* Debug Registers */
    SpasmRegister_x86_64_DR0,
    SpasmRegister_x86_64_DR1,
    SpasmRegister_x86_64_DR2,
    SpasmRegister_x86_64_DR3,
    SpasmRegister_x86_64_DR4,
    SpasmRegister_x86_64_DR5,
    SpasmRegister_x86_64_DR6,
    SpasmRegister_x86_64_DR7,

    /* Test Registers */
    SpasmRegister_x86_64_T0,
    SpasmRegister_x86_64_T1,
    SpasmRegister_x86_64_T2,
    SpasmRegister_x86_64_T3,
    SpasmRegister_x86_64_T4,
    SpasmRegister_x86_64_T5,
    SpasmRegister_x86_64_T6,
    SpasmRegister_x86_64_T7,

    SpasmRegister_x86_64_COUNT = SpasmRegister_x86_64_K7 - SpasmRegister_x86_64_NONE,
#endif /* defined(SPASM_ENABLE_X86_64) */

    /* AArch64 Registers */
#if defined(SPASM_ENABLE_AARCH64)
    SpasmRegister_aarch64_NONE,

    /* 64-bit (Xn) */
    SpasmRegister_aarch64_X0,
    SpasmRegister_aarch64_X1,
    SpasmRegister_aarch64_X2,
    SpasmRegister_aarch64_X3,
    SpasmRegister_aarch64_X4,
    SpasmRegister_aarch64_X5,
    SpasmRegister_aarch64_X6,
    SpasmRegister_aarch64_X7,
    SpasmRegister_aarch64_X8,
    SpasmRegister_aarch64_X9,
    SpasmRegister_aarch64_X10,
    SpasmRegister_aarch64_X11,
    SpasmRegister_aarch64_X12,
    SpasmRegister_aarch64_X13,
    SpasmRegister_aarch64_X14,
    SpasmRegister_aarch64_X15,
    SpasmRegister_aarch64_X16,
    SpasmRegister_aarch64_X17,
    SpasmRegister_aarch64_X18,
    SpasmRegister_aarch64_X19,
    SpasmRegister_aarch64_X20,
    SpasmRegister_aarch64_X21,
    SpasmRegister_aarch64_X22,
    SpasmRegister_aarch64_X23,
    SpasmRegister_aarch64_X24,
    SpasmRegister_aarch64_X25,
    SpasmRegister_aarch64_X26,
    SpasmRegister_aarch64_X27,
    SpasmRegister_aarch64_X28,
    SpasmRegister_aarch64_X29, /* FP */
    SpasmRegister_aarch64_X30, /* LR */
    SpasmRegister_aarch64_SP,

    /* 32-bit (Wn) */
    SpasmRegister_aarch64_W0,
    SpasmRegister_aarch64_W1,
    SpasmRegister_aarch64_W2,
    SpasmRegister_aarch64_W3,
    SpasmRegister_aarch64_W4,
    SpasmRegister_aarch64_W5,
    SpasmRegister_aarch64_W6,
    SpasmRegister_aarch64_W7,
    SpasmRegister_aarch64_W8,
    SpasmRegister_aarch64_W9,
    SpasmRegister_aarch64_W10,
    SpasmRegister_aarch64_W11,
    SpasmRegister_aarch64_W12,
    SpasmRegister_aarch64_W13,
    SpasmRegister_aarch64_W14,
    SpasmRegister_aarch64_W15,
    SpasmRegister_aarch64_W16,
    SpasmRegister_aarch64_W17,
    SpasmRegister_aarch64_W18,
    SpasmRegister_aarch64_W19,
    SpasmRegister_aarch64_W20,
    SpasmRegister_aarch64_W21,
    SpasmRegister_aarch64_W22,
    SpasmRegister_aarch64_W23,
    SpasmRegister_aarch64_W24,
    SpasmRegister_aarch64_W25,
    SpasmRegister_aarch64_W26,
    SpasmRegister_aarch64_W27,
    SpasmRegister_aarch64_W28,
    SpasmRegister_aarch64_W29, /* FP */
    SpasmRegister_aarch64_W30, /* LR */
    SpasmRegister_aarch64_WSP,

    /* AArch64 SIMD / FP */
    SpasmRegister_aarch64_V0,
    SpasmRegister_aarch64_V1,
    SpasmRegister_aarch64_V2,
    SpasmRegister_aarch64_V3,
    SpasmRegister_aarch64_V4,
    SpasmRegister_aarch64_V5,
    SpasmRegister_aarch64_V6,
    SpasmRegister_aarch64_V7,
    SpasmRegister_aarch64_V8,
    SpasmRegister_aarch64_V9,
    SpasmRegister_aarch64_V10,
    SpasmRegister_aarch64_V11,
    SpasmRegister_aarch64_V12,
    SpasmRegister_aarch64_V13,
    SpasmRegister_aarch64_V14,
    SpasmRegister_aarch64_V15,
    SpasmRegister_aarch64_V16,
    SpasmRegister_aarch64_V17,
    SpasmRegister_aarch64_V18,
    SpasmRegister_aarch64_V19,
    SpasmRegister_aarch64_V20,
    SpasmRegister_aarch64_V21,
    SpasmRegister_aarch64_V22,
    SpasmRegister_aarch64_V23,
    SpasmRegister_aarch64_V24,
    SpasmRegister_aarch64_V25,
    SpasmRegister_aarch64_V26,
    SpasmRegister_aarch64_V27,
    SpasmRegister_aarch64_V28,
    SpasmRegister_aarch64_V29,
    SpasmRegister_aarch64_V30,
    SpasmRegister_aarch64_V31,

    SpasmRegister_aarch64_COUNT = SpasmRegister_aarch64_V31 - SpasmRegister_aarch64_NONE,
#endif /* defined(SPASM_ENABLE_AARCH64) */

} SpasmRegister;

#endif /* !defined(__SPASM_REGISTER) */