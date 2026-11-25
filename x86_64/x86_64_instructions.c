/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/* Auto-generated file by generate.py, don't modify it */

#include "spasm/x86_64.h"

#define ROLES(a, b, c, d) ((uint16_t)((a) | ((b) << 3) | ((c) << 6) | ((d) << 9)))
#define VEX(mmmmm, pp, flags) ((uint8_t)((mmmmm) | ((pp) << 5) | ((flags) << 7)))
#define CPU(flag) Spasm_x86_64_CPUFlag_##flag

#define K_NONE Spasm_x86_64_OperandKind_NONE
#define K_AL Spasm_x86_64_OperandKind_AL
#define K_AX Spasm_x86_64_OperandKind_AX
#define K_CL Spasm_x86_64_OperandKind_CL
#define K_EAX Spasm_x86_64_OperandKind_EAX
#define K_IMM16 Spasm_x86_64_OperandKind_IMM16
#define K_IMM32 Spasm_x86_64_OperandKind_IMM32
#define K_IMM64 Spasm_x86_64_OperandKind_IMM64
#define K_IMM8 Spasm_x86_64_OperandKind_IMM8
#define K_M Spasm_x86_64_OperandKind_M
#define K_M128 Spasm_x86_64_OperandKind_M128
#define K_M16 Spasm_x86_64_OperandKind_M16
#define K_M256 Spasm_x86_64_OperandKind_M256
#define K_M32 Spasm_x86_64_OperandKind_M32
#define K_M64 Spasm_x86_64_OperandKind_M64
#define K_M8 Spasm_x86_64_OperandKind_M8
#define K_ONE Spasm_x86_64_OperandKind_ONE
#define K_R16 Spasm_x86_64_OperandKind_R16
#define K_R32 Spasm_x86_64_OperandKind_R32
#define K_R64 Spasm_x86_64_OperandKind_R64
#define K_R8 Spasm_x86_64_OperandKind_R8
#define K_RAX Spasm_x86_64_OperandKind_RAX
#define K_REL32 Spasm_x86_64_OperandKind_REL32
#define K_REL8 Spasm_x86_64_OperandKind_REL8
#define K_THREE Spasm_x86_64_OperandKind_THREE
#define K_VM32X Spasm_x86_64_OperandKind_VM32X
#define K_VM32Y Spasm_x86_64_OperandKind_VM32Y
#define K_VM64X Spasm_x86_64_OperandKind_VM64X
#define K_VM64Y Spasm_x86_64_OperandKind_VM64Y
#define K_XMM Spasm_x86_64_OperandKind_XMM
#define K_XMM0 Spasm_x86_64_OperandKind_XMM0
#define K_YMM Spasm_x86_64_OperandKind_YMM

#define R_NONE Spasm_x86_64_OperandRole_None
#define R_REG Spasm_x86_64_OperandRole_ModRMReg
#define R_RM Spasm_x86_64_OperandRole_ModRMRm
#define R_VVVV Spasm_x86_64_OperandRole_Vvvv
#define R_OPC Spasm_x86_64_OperandRole_OpcodeReg
#define R_IMM Spasm_x86_64_OperandRole_Imm
#define R_IS4 Spasm_x86_64_OperandRole_Is4
#define R_REL Spasm_x86_64_OperandRole_Rel

#define F_P66 Spasm_x86_64_FormFlag_P66
#define F_PF2 Spasm_x86_64_FormFlag_PF2
#define F_PF3 Spasm_x86_64_FormFlag_PF3
#define F_REXW Spasm_x86_64_FormFlag_REXW
#define F_VEX Spasm_x86_64_FormFlag_VEX
#define F_VEXW Spasm_x86_64_FormFlag_VEXW
#define F_VEXL Spasm_x86_64_FormFlag_VEXL
#define F_IMMSEXT Spasm_x86_64_FormFlag_IMMSEXT

const Spasm_x86_64_Form spasm_x86_64_forms[2967] = {
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x10 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adc r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adc r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adc r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x10 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 2, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 2, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adc m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x14 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x15 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adc ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x15 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* adc eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x15 }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* adc rax, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adcx r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* adcx r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adcx r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adcx r64, m64 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x00 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x02 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x02 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* add r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* add r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x03 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* add r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* add m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x00 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* add m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* add m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x01 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* add m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x04 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* add al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x05 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* add ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x05 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* add eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x05 }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* add rax, imm32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* addpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* addpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* addps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* addps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* addsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* addsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* addss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x58 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* addss xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD0 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* addsubpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD0 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* addsubpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD0 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* addsubps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD0 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* addsubps xmm, m128 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_PF3, VEX(0, 0, 0), CPU(BASE) }, /* adox r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_PF3, VEX(0, 0, 0), CPU(BASE) }, /* adox r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adox r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF6 }, 3, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* adox r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDE }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesdec xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDE }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesdec xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDF }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesdeclast xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDF }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesdeclast xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDC }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesenc xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDC }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesenc xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDD }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesenclast xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDD }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesenclast xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDB }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesimc xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xDB }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aesimc xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0xDF }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aeskeygenassist xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0xDF }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* aeskeygenassist xmm, m128, imm8 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x20 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* and r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* and r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* and r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* and m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x20 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* and m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* and m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 4, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 4, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* and m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x24 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* and al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x25 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* and ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x25 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* and eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x25 }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* and rax, imm32 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* andn r32, r32, r32 */
    { { K_R32, K_R32, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* andn r32, r32, m32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* andn r64, r64, r64 */
    { { K_R64, K_R64, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* andn r64, r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x55 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* andnpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x55 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* andnpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x55 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* andnps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x55 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* andnps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x54 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* andpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x54 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* andpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x54 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* andps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x54 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* andps xmm, m128 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* bextr r32, r32, r32 */
    { { K_R32, K_M32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* bextr r32, m32, r32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* bextr r64, r64, r64 */
    { { K_R64, K_M64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* bextr r64, m64, r64 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendpd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendpd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendps xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x15 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendvpd xmm, xmm, xmm0 */
    { { K_XMM, K_M128, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x15 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendvpd xmm, m128, xmm0 */
    { { K_XMM, K_XMM, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x14 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendvps xmm, xmm, xmm0 */
    { { K_XMM, K_M128, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x14 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* blendvps xmm, m128, xmm0 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 3, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsi r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 3, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsi r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 3, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsi r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 3, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsi r64, m64 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 2, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsmsk r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 2, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsmsk r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 2, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsmsk r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 2, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsmsk r64, m64 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 1, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsr r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 1, F_VEX, VEX(2, 0, 0), CPU(BMI1) }, /* blsr r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 1, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsr r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_VVVV, R_RM, R_NONE, R_NONE), { 0xF3 }, 1, 1, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI1) }, /* blsr r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bsf r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bsf r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bsf r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bsf r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bsf r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bsf r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bsr r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bsr r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bsr r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bsr r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bsr r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bsr r64, m64 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC8 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* bswap r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC8 }, 2, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bswap r64 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bt r16, imm8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bt r16, r16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* bt r32, imm8 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bt r32, r32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bt r64, imm8 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bt r64, r64 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bt m16, imm8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bt m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* bt m32, imm8 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bt m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bt m64, imm8 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA3 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bt m64, r64 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btc r16, imm8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btc r16, r16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* btc r32, imm8 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* btc r32, r32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btc r64, imm8 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btc r64, r64 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btc m16, imm8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btc m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* btc m32, imm8 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* btc m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btc m64, imm8 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xBB }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btc m64, r64 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btr r16, imm8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btr r16, r16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* btr r32, imm8 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* btr r32, r32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btr r64, imm8 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btr r64, r64 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btr m16, imm8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* btr m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* btr m32, imm8 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* btr m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 6, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btr m64, imm8 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB3 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* btr m64, r64 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bts r16, imm8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bts r16, r16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* bts r32, imm8 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bts r32, r32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bts r64, imm8 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bts r64, r64 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bts m16, imm8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* bts m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* bts m32, imm8 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* bts m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0xBA }, 2, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bts m64, imm8 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAB }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* bts m64, r64 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI2) }, /* bzhi r32, r32, r32 */
    { { K_R32, K_M32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 0, 0), CPU(BMI2) }, /* bzhi r32, m32, r32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI2) }, /* bzhi r64, r64, r64 */
    { { K_R64, K_M64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 0, 0), CPU(BMI2) }, /* bzhi r64, m64, r64 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0xE8 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* call rel32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* call r64 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* call m64 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x98 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cbw */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x99 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cdq */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x98 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cdqe */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xF8 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* clc */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xFC }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cld */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE }, 2, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* clflush m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE }, 2, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* clflushopt m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE }, 2, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* clwb m8 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xFC }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* clzero */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xF5 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmc */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmova r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovae r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovb r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovbe r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovc r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmove r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovg r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovge r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovl r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovle r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x46 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovna r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x42 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnae r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnb r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x47 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnbe r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x43 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnc r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovne r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4E }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovng r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4C }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnge r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4D }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnl r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4F }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnle r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x41 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovno r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnp r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x49 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovns r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x45 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovnz r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x40 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovo r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovp r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4A }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpe r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x4B }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovpo r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x48 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovs r64, m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x44 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(CMOV) }, /* cmovz r64, m64 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x38 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmp r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmp r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x3B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmp r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x38 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 7, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 7, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x39 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmp m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x3C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x3D }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmp ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x3D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmp eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x3D }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* cmp rax, imm32 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cmppd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cmppd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* cmpps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* cmpps xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cmpsd xmm, xmm, imm8 */
    { { K_XMM, K_M64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cmpsd xmm, m64, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cmpss xmm, xmm, imm8 */
    { { K_XMM, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC2 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cmpss xmm, m32, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB0 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg r8, r8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg r16, r16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg r32, r32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg r64, r64 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB0 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg m8, r8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg m16, r16 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg m32, r32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xB1 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg m64, r64 */
    { { K_M128, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg16b m128 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* cmpxchg8b m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* comisd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* comisd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* comiss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* comiss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0xA2 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cpuid */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x99 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* cqo */
    { { K_R32, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, r8 */
    { { K_R32, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_P66 | F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, r16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, r32 */
    { { K_R32, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, m8 */
    { { K_R32, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_P66 | F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, m16 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r32, m32 */
    { { K_R64, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r64, r8 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r64, r64 */
    { { K_R64, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r64, m8 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE4_2) }, /* crc32 r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvtdq2pd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvtdq2pd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE2) }, /* cvtdq2ps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE2) }, /* cvtdq2ps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtpd2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtpd2dq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvtpd2ps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvtpd2ps xmm, m128 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvtpi2pd xmm, m64 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* cvtpi2ps xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvtps2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvtps2dq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE2) }, /* cvtps2pd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE2) }, /* cvtps2pd xmm, m64 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2si r32, xmm */
    { { K_R32, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2si r32, m64 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2si r64, xmm */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2si r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2ss xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsd2ss xmm, m64 */
    { { K_XMM, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsi2sd xmm, r32 */
    { { K_XMM, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsi2sd xmm, r64 */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsi2sd xmm, m32 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvtsi2sd xmm, m64 */
    { { K_XMM, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvtsi2ss xmm, r32 */
    { { K_XMM, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvtsi2ss xmm, r64 */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvtsi2ss xmm, m32 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2A }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvtsi2ss xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvtss2sd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5A }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvtss2sd xmm, m32 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvtss2si r32, xmm */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvtss2si r32, m32 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvtss2si r64, xmm */
    { { K_R64, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2D }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvtss2si r64, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvttpd2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* cvttpd2dq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvttps2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5B }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* cvttps2dq xmm, m128 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvttsd2si r32, xmm */
    { { K_R32, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* cvttsd2si r32, m64 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvttsd2si r64, xmm */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF2 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* cvttsd2si r64, m64 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvttss2si r32, xmm */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* cvttss2si r32, m32 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvttss2si r64, xmm */
    { { K_R64, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2C }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(SSE) }, /* cvttss2si r64, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x99 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* cwd */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x98 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* cwde */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFE }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* dec r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* dec r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* dec r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* dec r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFE }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* dec m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* dec m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* dec m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* dec m64 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* div r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* div r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* div r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* div r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* div m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* div m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* div m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 6, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* div m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* divpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* divpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* divps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* divps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* divsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* divsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* divss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5E }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* divss xmm, m32 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x41 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* dppd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x41 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* dppd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x40 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* dpps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x40 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* dpps xmm, m128, imm8 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x77 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(MMX) }, /* emms */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x17 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* extractps r32, xmm, imm8 */
    { { K_M32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x17 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* extractps m32, xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x79 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* extrq xmm, xmm */
    { { K_XMM, K_IMM8, K_IMM8, K_NONE }, ROLES(R_RM, R_IMM, R_IMM, R_NONE), { 0x0F, 0x78 }, 2, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* extrq xmm, imm8, imm8 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x0E }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* femms */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* haddpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* haddpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* haddps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* haddps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* hsubpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE3) }, /* hsubpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* hsubps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* hsubps xmm, m128 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* idiv r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* idiv r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* idiv r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* idiv r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* idiv m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* idiv m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* idiv m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* idiv m64 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* imul r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* imul m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xAF }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, m64 */
    { { K_R16, K_R16, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, r16, imm8 */
    { { K_R16, K_R16, K_IMM16, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, r16, imm16 */
    { { K_R16, K_M16, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, m16, imm8 */
    { { K_R16, K_M16, K_IMM16, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* imul r16, m16, imm16 */
    { { K_R32, K_R32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, r32, imm8 */
    { { K_R32, K_R32, K_IMM32, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, r32, imm32 */
    { { K_R32, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, m32, imm8 */
    { { K_R32, K_M32, K_IMM32, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* imul r32, m32, imm32 */
    { { K_R64, K_R64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, r64, imm8 */
    { { K_R64, K_R64, K_IMM32, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, r64, imm32 */
    { { K_R64, K_M64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x6B }, 1, 0x08, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, m64, imm8 */
    { { K_R64, K_M64, K_IMM32, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x69 }, 1, 0x08, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* imul r64, m64, imm32 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFE }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* inc r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* inc r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* inc r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* inc r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFE }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* inc m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* inc m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* inc m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* inc m64 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x21 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* insertps xmm, xmm, imm8 */
    { { K_XMM, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x21 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* insertps xmm, m32, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x79 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(BASE) }, /* insertq xmm, xmm */
    { { K_XMM, K_XMM, K_IMM8, K_IMM8 }, ROLES(R_REG, R_RM, R_IMM, R_IMM), { 0x0F, 0x78 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(BASE) }, /* insertq xmm, xmm, imm8, imm8 */
    { { K_THREE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xCC }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* int 3 */
    { { K_IMM8, K_NONE, K_NONE, K_NONE }, ROLES(R_IMM, R_NONE, R_NONE, R_NONE), { 0xCD }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* int imm8 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x77 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* ja rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x87 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* ja rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x73 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jae rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x83 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jae rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x72 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jb rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x82 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jb rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x76 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jbe rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x86 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jbe rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x72 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jc rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x82 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jc rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x74 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* je rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x84 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* je rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0xE3 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jecxz rel8 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7F }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jg rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8F }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jg rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jge rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8D }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jge rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jl rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8C }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jl rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7E }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jle rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8E }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jle rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0xEB }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jmp rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0xE9 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jmp rel32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* jmp r64 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* jmp m64 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x76 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jna rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x86 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jna rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x72 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnae rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x82 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnae rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x73 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnb rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x83 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnb rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x77 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnbe rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x87 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnbe rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x73 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnc rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x83 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnc rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x75 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jne rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x85 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jne rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7E }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jng rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8E }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jng rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnge rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8C }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnge rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnl rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8D }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnl rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7F }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnle rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8F }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnle rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x71 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jno rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x81 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jno rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7B }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnp rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8B }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnp rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x79 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jns rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x89 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jns rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x75 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnz rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x85 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jnz rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x70 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jo rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x80 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jo rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7A }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jp rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8A }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jp rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7A }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jpe rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8A }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jpe rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x7B }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jpo rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x8B }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jpo rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0xE3 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jrcxz rel8 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x78 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* js rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x88 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* js rel32 */
    { { K_REL8, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x74 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jz rel8 */
    { { K_REL32, K_NONE, K_NONE, K_NONE }, ROLES(R_REL, R_NONE, R_NONE, R_NONE), { 0x0F, 0x84 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* jz rel32 */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF0 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* lddqu xmm, m128 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE }, 2, 2, 0, VEX(0, 0, 0), CPU(SSE) }, /* ldmxcsr m32 */
    { { K_R16, K_M, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8D }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* lea r16, m */
    { { K_R32, K_M, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8D }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* lea r32, m */
    { { K_R64, K_M, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8D }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* lea r64, m */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE, 0xE8 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(SSE2) }, /* lfence */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBD }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(LZCNT) }, /* lzcnt r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF7 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* maskmovdqu xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* maxpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* maxpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* maxps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* maxps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* maxsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* maxsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* maxss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* maxss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE, 0xF0 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(SSE2) }, /* mfence */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* minpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* minpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* minps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* minps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* minsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* minsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* minss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5D }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* minss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xC8 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* monitor */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xFA }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* monitorx */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC6 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r8, imm8 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_OPC, R_IMM, R_NONE, R_NONE), { 0xB0 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x88 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r8, m8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov r16, imm16 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_OPC, R_IMM, R_NONE, R_NONE), { 0xB8 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov r16, m16 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r32, imm32 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_OPC, R_IMM, R_NONE, R_NONE), { 0xB8 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov r32, m32 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* mov r64, imm32 */
    { { K_R64, K_IMM64, K_NONE, K_NONE }, ROLES(R_OPC, R_IMM, R_NONE, R_NONE), { 0xB8 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mov r64, imm64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mov r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mov r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x8B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mov r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC6 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x88 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov m8, r8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mov m16, r16 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* mov m32, r32 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC7 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* mov m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x89 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mov m64, r64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x28 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movapd xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x29 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movapd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x28 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movapd xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x29 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movapd m128, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x28 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movaps xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x29 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movaps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x28 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movaps xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x29 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movaps m128, xmm */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe r16, m16 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe r32, m32 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xF0 }, 3, 0x08, F_REXW, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe r64, m64 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe m16, r16 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe m32, r32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x38, 0xF1 }, 3, 0x08, F_REXW, VEX(0, 0, 0), CPU(MOVBE) }, /* movbe m64, r64 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movd r32, xmm */
    { { K_XMM, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movd xmm, r32 */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movd xmm, m32 */
    { { K_M32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movd m32, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* movddup xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE3) }, /* movddup xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movdqa xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movdqa xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movdqa xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7F }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movdqa m128, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movdqu xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movdqu xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movdqu xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7F }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movdqu m128, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movhlps xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x16 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movhpd xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x17 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movhpd m64, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x16 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movhps xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x17 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movhps m64, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x16 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movlhps xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movlpd xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x13 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movlpd m64, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movlps xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x13 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movlps m64, xmm */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x50 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movmskpd r32, xmm */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x50 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movmskps r32, xmm */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xE7 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movntdq m128, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x2A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* movntdqa xmm, m128 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC3 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE2) }, /* movnti m32, r32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC3 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* movnti m64, r64 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x2B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movntpd m128, xmm */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x2B }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movntps m128, xmm */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x2B }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(BASE) }, /* movntsd m64, xmm */
    { { K_M32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x2B }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(BASE) }, /* movntss m32, xmm */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* movq r64, xmm */
    { { K_XMM, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6E }, 2, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* movq xmm, r64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movq xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xD6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* movq xmm, m64 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6E }, 2, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* movq xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xD6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movq m64, xmm */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x7E }, 2, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE2) }, /* movq m64, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* movsd xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* movsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* movsd xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* movsd m64, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x16 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE3) }, /* movshdup xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x16 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE3) }, /* movshdup xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE3) }, /* movsldup xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x12 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE3) }, /* movsldup xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* movss xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* movss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* movss xmm, m32 */
    { { K_M32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* movss m32, xmm */
    { { K_R16, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* movsx r16, r8 */
    { { K_R16, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* movsx r16, m8 */
    { { K_R32, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movsx r32, r8 */
    { { K_R32, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBF }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movsx r32, r16 */
    { { K_R32, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movsx r32, m8 */
    { { K_R32, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBF }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movsx r32, m16 */
    { { K_R64, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsx r64, r8 */
    { { K_R64, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBF }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsx r64, r16 */
    { { K_R64, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBE }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsx r64, m8 */
    { { K_R64, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBF }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsx r64, m16 */
    { { K_R64, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x63 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsxd r64, r32 */
    { { K_R64, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x63 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movsxd r64, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movupd xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movupd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movupd xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* movupd m128, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movups xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movups xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x10 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movups xmm, m128 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0x11 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* movups m128, xmm */
    { { K_R16, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* movzx r16, r8 */
    { { K_R16, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* movzx r16, m8 */
    { { K_R32, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movzx r32, r8 */
    { { K_R32, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB7 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movzx r32, r16 */
    { { K_R32, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movzx r32, m8 */
    { { K_R32, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB7 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* movzx r32, m16 */
    { { K_R64, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movzx r64, r8 */
    { { K_R64, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB7 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movzx r64, r16 */
    { { K_R64, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB6 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movzx r64, m8 */
    { { K_R64, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB7 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* movzx r64, m16 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x42 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* mpsadbw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x42 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* mpsadbw xmm, m128, imm8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* mul r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mul r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* mul r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mul r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* mul m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* mul m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* mul m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* mul m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* mulpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* mulpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* mulps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* mulps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* mulsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* mulsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* mulss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x59 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* mulss xmm, m32 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* mulx r32, r32, r32 */
    { { K_R32, K_R32, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* mulx r32, r32, m32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* mulx r64, r64, r64 */
    { { K_R64, K_R64, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* mulx r64, r64, m64 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xC9 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* mwait */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xFB }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* mwaitx */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* neg r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* neg r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* neg r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* neg r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* neg m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* neg m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* neg m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* neg m64 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* nop */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* not r8 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* not r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* not r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* not r64 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF6 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* not m8 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* not m16 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* not m32 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xF7 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* not m64 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x08 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* or r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* or r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* or r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* or m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x08 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* or m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* or m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 1, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 1, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x09 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* or m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x0C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* or al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x0D }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* or ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x0D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* or eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x0D }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* or rax, imm32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x56 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* orpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x56 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* orpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x56 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* orps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x56 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* orps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x1D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pabsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packssdw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6B }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packssdw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x63 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packsswb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x63 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packsswb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x2B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* packusdw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x2B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* packusdw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x67 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packuswb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x67 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* packuswb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddsb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xED }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xED }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddusb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddusb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddusw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddusw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* paddw xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0F }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* palignr xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0F }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* palignr xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pand xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pand xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pandn xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pandn xmm, m128 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, F_PF3, VEX(0, 0, 0), CPU(BASE) }, /* pause */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE0 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pavgb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE0 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pavgb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pavgw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pavgw xmm, m128 */
    { { K_XMM, K_XMM, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x10 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pblendvb xmm, xmm, xmm0 */
    { { K_XMM, K_M128, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x10 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pblendvb xmm, m128, xmm0 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pblendw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pblendw xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x44 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* pclmulqdq xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x44 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* pclmulqdq xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x74 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x74 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x76 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x76 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x29 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pcmpeqq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x29 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pcmpeqq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x75 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x75 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpeqw xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x61 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpestri xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x61 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpestri xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x60 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpestrm xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x60 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpestrm xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x64 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x64 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x66 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x66 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x37 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpgtq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x37 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpgtq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x65 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x65 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pcmpgtw xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x63 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpistri xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x63 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpistri xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x62 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpistrm xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x62 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_2) }, /* pcmpistrm xmm, m128, imm8 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* pdep r32, r32, r32 */
    { { K_R32, K_R32, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* pdep r32, r32, m32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* pdep r64, r64, r64 */
    { { K_R64, K_R64, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* pdep r64, r64, m64 */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 2, 0), CPU(BMI2) }, /* pext r32, r32, r32 */
    { { K_R32, K_R32, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(2, 2, 0), CPU(BMI2) }, /* pext r32, r32, m32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 2, 0), CPU(BMI2) }, /* pext r64, r64, r64 */
    { { K_R64, K_R64, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 2, 0), CPU(BMI2) }, /* pext r64, r64, m64 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x14 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrb r32, xmm, imm8 */
    { { K_M8, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x14 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrb m8, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x16 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrd r32, xmm, imm8 */
    { { K_M32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x16 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrd m32, xmm, imm8 */
    { { K_R64, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x16 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrq r64, xmm, imm8 */
    { { K_M64, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x16 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrq m64, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x15 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrw r32, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrw r32, xmm, imm8 */
    { { K_M16, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0x3A, 0x15 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pextrw m16, xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x02 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x02 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x03 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x03 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x01 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x01 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phaddw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x41 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* phminposuw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x41 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* phminposuw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x06 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x06 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x07 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x07 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x05 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x05 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* phsubw xmm, m128 */
    { { K_XMM, K_R32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x20 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrb xmm, r32, imm8 */
    { { K_XMM, K_M8, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x20 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrb xmm, m8, imm8 */
    { { K_XMM, K_R32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x22 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrd xmm, r32, imm8 */
    { { K_XMM, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x22 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrd xmm, m32, imm8 */
    { { K_XMM, K_R64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x22 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrq xmm, r64, imm8 */
    { { K_XMM, K_M64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x22 }, 3, 0x08, F_P66 | F_REXW, VEX(0, 0, 0), CPU(SSE4_1) }, /* pinsrq xmm, m64, imm8 */
    { { K_XMM, K_R32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pinsrw xmm, r32, imm8 */
    { { K_XMM, K_M16, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pinsrw xmm, m16, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x04 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pmaddubsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x04 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pmaddubsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaddwd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaddwd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3C }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxsb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxsd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3D }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxsd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaxsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaxsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaxub xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDE }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmaxub xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3F }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxud xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3F }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxud xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxuw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3E }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmaxuw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x38 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x38 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminsb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x39 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminsd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x39 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminsd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pminsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pminsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pminub xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xDA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pminub xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminud xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminud xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminuw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x3A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pminuw xmm, m128 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD7 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmovmskb r32, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x21 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x21 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbd xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x22 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbq xmm, xmm */
    { { K_XMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x22 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbq xmm, m16 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x20 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbw xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x20 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxbw xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x25 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxdq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x25 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxdq xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x23 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxwd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x23 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxwd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x24 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxwq xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x24 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovsxwq xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x31 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x31 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbd xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x32 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbq xmm, xmm */
    { { K_XMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x32 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbq xmm, m16 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x30 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbw xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x30 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxbw xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x35 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxdq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x35 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxdq xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x33 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxwd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x33 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxwd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x34 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxwq xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x34 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmovzxwq xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x28 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmuldq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x28 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmuldq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x0B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pmulhrsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x0B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pmulhrsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmulhuw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmulhuw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmulhw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmulhw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x40 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmulld xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x40 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* pmulld xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmullw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmullw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmuludq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pmuludq xmm, m128 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x58 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* pop r16 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x8F }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* pop r16 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x58 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* pop r64 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x8F }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* pop r64 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x8F }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* pop m16 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x8F }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* pop m64 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xB8 }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(POPCNT) }, /* popcnt r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* por xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* por xmm, m128 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x0D }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetch m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x18 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetchnta m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x18 }, 2, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetcht0 m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x18 }, 2, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetcht1 m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x18 }, 2, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetcht2 m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x0D }, 2, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetchw m8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x0D }, 2, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* prefetchwt1 m8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psadbw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psadbw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x00 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pshufb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x00 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* pshufb xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pshufd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pshufd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* pshufhw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE2) }, /* pshufhw xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* pshuflw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x70 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* pshuflw xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x08 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x08 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x0A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x0A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x09 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x09 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSSE3) }, /* psignw xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x72 }, 2, 6, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pslld xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pslld xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pslld xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x73 }, 2, 7, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pslldq xmm, imm8 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x73 }, 2, 6, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllq xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllq xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x71 }, 2, 6, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllw xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psllw xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x72 }, 2, 4, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrad xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrad xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrad xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x71 }, 2, 4, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psraw xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psraw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psraw xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x72 }, 2, 2, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrld xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrld xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD2 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrld xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x73 }, 2, 3, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrldq xmm, imm8 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x73 }, 2, 2, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlq xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD3 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlq xmm, m128 */
    { { K_XMM, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x0F, 0x71 }, 2, 2, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlw xmm, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psrlw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFA }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xFB }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubsb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xE9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubsw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubusb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD8 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubusb xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubusw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xD9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubusw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xF9 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* psubw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x17 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* ptest xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0x17 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* ptest xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x68 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhbw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x68 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhbw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhdq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6A }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhdq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhqdq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6D }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhqdq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x69 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhwd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x69 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckhwd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x60 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklbw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x60 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklbw xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x62 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckldq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x62 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpckldq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklqdq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x6C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklqdq xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x61 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklwd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x61 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* punpcklwd xmm, m128 */
    { { K_IMM8, K_NONE, K_NONE, K_NONE }, ROLES(R_IMM, R_NONE, R_NONE, R_NONE), { 0x6A }, 1, 0xFF, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* push imm8 */
    { { K_IMM32, K_NONE, K_NONE, K_NONE }, ROLES(R_IMM, R_NONE, R_NONE, R_NONE), { 0x68 }, 1, 0xFF, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* push imm32 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x50 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* push r16 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* push r16 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x50 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* push r64 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* push r64 */
    { { K_M16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* push m16 */
    { { K_M64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xFF }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* push m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pxor xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xEF }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* pxor xmm, m128 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcl m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcl m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 2, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcl m64, cl */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x53 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* rcpps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x53 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* rcpps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x53 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* rcpss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x53 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* rcpss xmm, m32 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rcr m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* rcr m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 3, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rcr m64, cl */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rdrand r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* rdrand r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 6, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rdrand r64 */
    { { K_R16, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rdseed r16 */
    { { K_R32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* rdseed r32 */
    { { K_R64, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xC7 }, 2, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rdseed r64 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x31 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* rdtsc */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xF9 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* rdtscp */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xC3 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* ret */
    { { K_IMM16, K_NONE, K_NONE, K_NONE }, ROLES(R_IMM, R_NONE, R_NONE, R_NONE), { 0xC2 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* ret imm16 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* rol m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* rol m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 0, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* rol m64, cl */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* ror m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, 0, VEX(0, 0, 0), CPU(BASE) }, /* ror m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 1, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* ror m64, cl */
    { { K_R32, K_R32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xF0 }, 1, 0x08, F_VEX | F_IMMSEXT, VEX(3, 3, 0), CPU(BMI2) }, /* rorx r32, r32, imm8 */
    { { K_R32, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xF0 }, 1, 0x08, F_VEX | F_IMMSEXT, VEX(3, 3, 0), CPU(BMI2) }, /* rorx r32, m32, imm8 */
    { { K_R64, K_R64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xF0 }, 1, 0x08, F_VEX | F_VEXW | F_IMMSEXT, VEX(3, 3, 0), CPU(BMI2) }, /* rorx r64, r64, imm8 */
    { { K_R64, K_M64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xF0 }, 1, 0x08, F_VEX | F_VEXW | F_IMMSEXT, VEX(3, 3, 0), CPU(BMI2) }, /* rorx r64, m64, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x09 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundpd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x09 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundpd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x08 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x08 }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundps xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundsd xmm, xmm, imm8 */
    { { K_XMM, K_M64, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0B }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundsd xmm, m64, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundss xmm, xmm, imm8 */
    { { K_XMM, K_M32, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0x0A }, 3, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE4_1) }, /* roundss xmm, m32, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x52 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* rsqrtps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x52 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* rsqrtps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x52 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* rsqrtss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x52 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* rsqrtss xmm, m32 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sal m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* sal m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sal m64, cl */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sar m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, 0, VEX(0, 0, 0), CPU(BASE) }, /* sar m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 7, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sar m64, cl */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 2, 0), CPU(BMI2) }, /* sarx r32, r32, r32 */
    { { K_R32, K_M32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 2, 0), CPU(BMI2) }, /* sarx r32, m32, r32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 2, 0), CPU(BMI2) }, /* sarx r64, r64, r64 */
    { { K_R64, K_M64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 2, 0), CPU(BMI2) }, /* sarx r64, m64, r64 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x18 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sbb r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sbb r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sbb r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x18 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 3, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 3, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sbb m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x1C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x1D }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sbb ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x1D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* sbb eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x1D }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sbb rax, imm32 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x97 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* seta r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x97 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* seta m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setae r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setae m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setb r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setb m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x96 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setbe r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x96 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setbe m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setc r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setc m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x94 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* sete r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x94 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* sete m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9F }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setg r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9F }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setg m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9D }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setge r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9D }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setge m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9C }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setl r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9C }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setl m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9E }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setle r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9E }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setle m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x96 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setna r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x96 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setna m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnae r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x92 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnae m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnb r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnb m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x97 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnbe r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x97 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnbe m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnc r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x93 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnc m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x95 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setne r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x95 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setne m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9E }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setng r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9E }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setng m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9C }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnge r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9C }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnge m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9D }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnl r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9D }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnl m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9F }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnle r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9F }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnle m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x91 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setno r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x91 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setno m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9B }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnp r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9B }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnp m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x99 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setns r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x99 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setns m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x95 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnz r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x95 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setnz m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x90 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* seto r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x90 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* seto m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9A }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setp r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9A }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setp m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9A }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setpe r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9A }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setpe m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9B }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setpo r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x9B }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setpo m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x98 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* sets r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x98 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* sets m8 */
    { { K_R8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x94 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setz r8 */
    { { K_M8, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0x94 }, 2, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* setz m8 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE, 0xF8 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* sfence */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xC9 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1msg1 xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xC9 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1msg1 xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCA }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1msg2 xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCA }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1msg2 xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xC8 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1nexte xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xC8 }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1nexte xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0xCC }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1rnds4 xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0x3A, 0xCC }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha1rnds4 xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCC }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256msg1 xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCC }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256msg1 xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCD }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256msg2 xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCD }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256msg2 xmm, m128 */
    { { K_XMM, K_XMM, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCB }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256rnds2 xmm, xmm, xmm0 */
    { { K_XMM, K_M128, K_XMM0, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x38, 0xCB }, 3, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sha256rnds2 xmm, m128, xmm0 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shl m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, 0, VEX(0, 0, 0), CPU(BASE) }, /* shl m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 4, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shl m64, cl */
    { { K_R16, K_R16, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shld r16, r16, imm8 */
    { { K_R16, K_R16, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shld r16, r16, cl */
    { { K_R32, K_R32, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shld r32, r32, imm8 */
    { { K_R32, K_R32, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shld r32, r32, cl */
    { { K_R64, K_R64, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shld r64, r64, imm8 */
    { { K_R64, K_R64, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shld r64, r64, cl */
    { { K_M16, K_R16, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shld m16, r16, imm8 */
    { { K_M16, K_R16, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shld m16, r16, cl */
    { { K_M32, K_R32, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shld m32, r32, imm8 */
    { { K_M32, K_R32, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shld m32, r32, cl */
    { { K_M64, K_R64, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xA4 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shld m64, r64, imm8 */
    { { K_M64, K_R64, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xA5 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shld m64, r64, cl */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(BMI2) }, /* shlx r32, r32, r32 */
    { { K_R32, K_M32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(BMI2) }, /* shlx r32, m32, r32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(BMI2) }, /* shlx r64, r64, r64 */
    { { K_R64, K_M64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(BMI2) }, /* shlx r64, m64, r64 */
    { { K_R8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r8, 1 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r8, imm8 */
    { { K_R8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r8, cl */
    { { K_R16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr r16, 1 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr r16, imm8 */
    { { K_R16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr r16, cl */
    { { K_R32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r32, 1 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r32, imm8 */
    { { K_R32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr r32, cl */
    { { K_R64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr r64, 1 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr r64, imm8 */
    { { K_R64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr r64, cl */
    { { K_M8, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD0 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m8, 1 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC0 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m8, imm8 */
    { { K_M8, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD2 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m8, cl */
    { { K_M16, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr m16, 1 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr m16, imm8 */
    { { K_M16, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shr m16, cl */
    { { K_M32, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m32, 1 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m32, imm8 */
    { { K_M32, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* shr m32, cl */
    { { K_M64, K_ONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD1 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr m64, 1 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xC1 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr m64, imm8 */
    { { K_M64, K_CL, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xD3 }, 1, 5, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shr m64, cl */
    { { K_R16, K_R16, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shrd r16, r16, imm8 */
    { { K_R16, K_R16, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shrd r16, r16, cl */
    { { K_R32, K_R32, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shrd r32, r32, imm8 */
    { { K_R32, K_R32, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shrd r32, r32, cl */
    { { K_R64, K_R64, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shrd r64, r64, imm8 */
    { { K_R64, K_R64, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shrd r64, r64, cl */
    { { K_M16, K_R16, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shrd m16, r16, imm8 */
    { { K_M16, K_R16, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* shrd m16, r16, cl */
    { { K_M32, K_R32, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shrd m32, r32, imm8 */
    { { K_M32, K_R32, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* shrd m32, r32, cl */
    { { K_M64, K_R64, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x0F, 0xAC }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shrd m64, r64, imm8 */
    { { K_M64, K_R64, K_CL, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xAD }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* shrd m64, r64, cl */
    { { K_R32, K_R32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* shrx r32, r32, r32 */
    { { K_R32, K_M32, K_R32, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(2, 3, 0), CPU(BMI2) }, /* shrx r32, m32, r32 */
    { { K_R64, K_R64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* shrx r64, r64, r64 */
    { { K_R64, K_M64, K_R64, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0xF7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 3, 0), CPU(BMI2) }, /* shrx r64, m64, r64 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* shufpd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC6 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* shufpd xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC6 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* shufps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x0F, 0xC6 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* shufps xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* sqrtpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* sqrtpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* sqrtps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* sqrtps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* sqrtsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* sqrtsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* sqrtss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x51 }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* sqrtss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xF9 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* stc */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xFD }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* std */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0x0F, 0xAE }, 2, 3, 0, VEX(0, 0, 0), CPU(SSE) }, /* stmxcsr m32 */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x28 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2A }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sub r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sub r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sub r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x28 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 5, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 5, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* sub m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x2C }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x2D }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* sub ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x2D }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* sub eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x2D }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* sub rax, imm32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* subpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* subpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* subps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* subps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* subsd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_PF2, VEX(0, 0, 0), CPU(SSE2) }, /* subsd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* subss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x5C }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(SSE) }, /* subss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x05 }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* syscall */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF6 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* test r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x84 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* test r8, r8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* test r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* test r16, r16 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* test r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* test r32, r32 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* test r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* test r64, r64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF6 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* test m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x84 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* test m8, r8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* test m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* test m16, r16 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, 0, VEX(0, 0, 0), CPU(BASE) }, /* test m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* test m32, r32 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0xF7 }, 1, 0, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* test m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x85 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* test m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0xA8 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* test al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0xA9 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* test ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0xA9 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* test eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0xA9 }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* test rax, imm32 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_P66 | F_PF3, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r16, m16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_PF3, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r32, m32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0xBC }, 2, 0x08, F_PF3 | F_REXW, VEX(0, 0, 0), CPU(BMI1) }, /* tzcnt r64, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* ucomisd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2E }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* ucomisd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* ucomiss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x2E }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* ucomiss xmm, m32 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x0B }, 2, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* ud2 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x15 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* unpckhpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x15 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* unpckhpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x15 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* unpckhps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x15 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* unpckhps xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x14 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* unpcklpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x14 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* unpcklpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x14 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* unpcklps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x14 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* unpcklps xmm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vaddpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vaddpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vaddpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vaddpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vaddps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vaddps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vaddps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vaddps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vaddsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vaddsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vaddss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vaddss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vaddsubpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vaddsubpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vaddsubpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vaddsubpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vaddsubps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vaddsubps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vaddsubps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vaddsubps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesdec xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesdec xmm, xmm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesdeclast xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesdeclast xmm, xmm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesenc xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesenc xmm, xmm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesenclast xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesenclast xmm, xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xDB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesimc xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xDB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vaesimc xmm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vaeskeygenassist xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vaeskeygenassist xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vandnpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vandnpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vandnpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vandnpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vandnps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vandnps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vandnps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x55 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vandnps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vandpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vandpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vandpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vandpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vandps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vandps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vandps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x54 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vandps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0D }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendpd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0D }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendpd xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0D }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendpd ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0D }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendpd ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0C }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendps xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0C }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendps xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0C }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendps ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0C }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendps ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4B }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendvpd xmm, xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4B }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendvpd xmm, xmm, m128, xmm */
    { { K_YMM, K_YMM, K_YMM, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4B }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendvpd ymm, ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4B }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendvpd ymm, ymm, m256, ymm */
    { { K_XMM, K_XMM, K_XMM, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4A }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendvps xmm, xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4A }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vblendvps xmm, xmm, m128, xmm */
    { { K_YMM, K_YMM, K_YMM, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4A }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendvps ymm, ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4A }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vblendvps ymm, ymm, m256, ymm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vbroadcastf128 ymm, m128 */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vbroadcasti128 ymm, m128 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vbroadcastsd ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x19 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vbroadcastsd ymm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x18 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vbroadcastss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x18 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vbroadcastss xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x18 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vbroadcastss ymm, xmm */
    { { K_YMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x18 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vbroadcastss ymm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vcmppd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vcmppd xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vcmppd ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vcmppd ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vcmpps xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vcmpps xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vcmpps ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vcmpps ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcmpsd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M64, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcmpsd xmm, xmm, m64, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcmpss xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC2 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcmpss xmm, xmm, m32, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcomisd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcomisd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2F }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcomiss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2F }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcomiss xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtdq2pd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtdq2pd xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vcvtdq2pd ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vcvtdq2pd ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcvtdq2ps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcvtdq2ps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vcvtdq2ps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vcvtdq2ps ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtpd2dq xmm, xmm */
    { { K_XMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vcvtpd2dq xmm, ymm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtpd2dq xmm, m128 */
    { { K_XMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vcvtpd2dq xmm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvtpd2ps xmm, xmm */
    { { K_XMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvtpd2ps xmm, ymm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvtpd2ps xmm, m128 */
    { { K_XMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvtpd2ps xmm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(F16C) }, /* vcvtph2ps xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(F16C) }, /* vcvtph2ps xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(F16C) }, /* vcvtph2ps ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(F16C) }, /* vcvtph2ps ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvtps2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvtps2dq xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvtps2dq ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvtps2dq ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcvtps2pd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vcvtps2pd xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vcvtps2pd ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vcvtps2pd ymm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x1D }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(F16C) }, /* vcvtps2ph xmm, xmm, imm8 */
    { { K_XMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x1D }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(F16C) }, /* vcvtps2ph xmm, ymm, imm8 */
    { { K_M64, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x1D }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(F16C) }, /* vcvtps2ph m64, xmm, imm8 */
    { { K_M128, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x1D }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(F16C) }, /* vcvtps2ph m128, ymm, imm8 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2si r32, xmm */
    { { K_R32, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2si r32, m64 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2si r64, xmm */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2si r64, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsd2ss xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsi2sd xmm, xmm, r32 */
    { { K_XMM, K_XMM, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsi2sd xmm, xmm, r64 */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsi2sd xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvtsi2sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_R32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtsi2ss xmm, xmm, r32 */
    { { K_XMM, K_XMM, K_R64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvtsi2ss xmm, xmm, r64 */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtsi2ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2A }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvtsi2ss xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5A }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2sd xmm, xmm, m32 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2si r32, xmm */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2si r32, m32 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2si r64, xmm */
    { { K_R64, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2D }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvtss2si r64, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvttpd2dq xmm, xmm */
    { { K_XMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvttpd2dq xmm, ymm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vcvttpd2dq xmm, m128 */
    { { K_XMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xE6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vcvttpd2dq xmm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvttps2dq xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvttps2dq xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vcvttps2dq ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x5B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vcvttps2dq ymm, m256 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvttsd2si r32, xmm */
    { { K_R32, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vcvttsd2si r32, m64 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvttsd2si r64, xmm */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 3, 0), CPU(AVX) }, /* vcvttsd2si r64, m64 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvttss2si r32, xmm */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vcvttss2si r32, m32 */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvttss2si r64, xmm */
    { { K_R64, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2C }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 2, 0), CPU(AVX) }, /* vcvttss2si r64, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vdivpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vdivpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vdivpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vdivpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vdivps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vdivps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vdivps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vdivps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vdivsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vdivsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vdivss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5E }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vdivss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x41 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vdppd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x41 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vdppd xmm, xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x40 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vdpps xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x40 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vdpps xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x40 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vdpps ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x40 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vdpps ymm, ymm, m256, imm8 */
    { { K_XMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x19 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vextractf128 xmm, ymm, imm8 */
    { { K_M128, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x19 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vextractf128 m128, ymm, imm8 */
    { { K_XMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x39 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vextracti128 xmm, ymm, imm8 */
    { { K_M128, K_YMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x39 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vextracti128 m128, ymm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vextractps r32, xmm, imm8 */
    { { K_M32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vextractps m32, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x98 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x99 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x99 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x99 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x99 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd132ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA8 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA9 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA9 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA9 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA9 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd213ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB8 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB9 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB9 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB9 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB9 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmadd231ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x96 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA6 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB6 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmaddsub231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9B }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9B }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub132ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAA }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAB }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAB }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub213ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBA }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBB }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBB }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBB }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsub231ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x97 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xA7 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xB7 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfmsubadd231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9D }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9D }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd132ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAC }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAD }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAD }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd213ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBC }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBD }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBD }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBD }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmadd231ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9F }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9F }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x9F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub132ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAE }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAF }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAF }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xAF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub213ss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231pd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231pd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231pd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231pd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBE }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBF }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231sd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBF }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231sd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xBF }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(FMA) }, /* vfnmsub231ss xmm, xmm, m32 */
    { { K_XMM, K_VM32X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x92 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherdpd xmm, vm32x, xmm */
    { { K_YMM, K_VM32X, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x92 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherdpd ymm, vm32x, ymm */
    { { K_XMM, K_VM32X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x92 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherdps xmm, vm32x, xmm */
    { { K_YMM, K_VM32Y, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x92 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherdps ymm, vm32y, ymm */
    { { K_XMM, K_VM64X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x93 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherqpd xmm, vm64x, xmm */
    { { K_YMM, K_VM64Y, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x93 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherqpd ymm, vm64y, ymm */
    { { K_XMM, K_VM64X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x93 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherqps xmm, vm64x, xmm */
    { { K_XMM, K_VM64Y, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x93 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vgatherqps xmm, vm64y, xmm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vhaddpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vhaddpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vhaddpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vhaddpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vhaddps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vhaddps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vhaddps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vhaddps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vhsubpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vhsubpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vhsubpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vhsubpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vhsubps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vhsubps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vhsubps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x7D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vhsubps ymm, ymm, m256 */
    { { K_YMM, K_YMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x18 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vinsertf128 ymm, ymm, xmm, imm8 */
    { { K_YMM, K_YMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x18 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vinsertf128 ymm, ymm, m128, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x38 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vinserti128 ymm, ymm, xmm, imm8 */
    { { K_YMM, K_YMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x38 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vinserti128 ymm, ymm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x21 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vinsertps xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x21 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vinsertps xmm, xmm, m32, imm8 */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xF0 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vlddqu xmm, m128 */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xF0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vlddqu ymm, m256 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xAE }, 1, 2, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vldmxcsr m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xF7 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmaskmovdqu xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovpd ymm, ymm, m256 */
    { { K_M128, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x2F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovpd m128, xmm, xmm */
    { { K_M256, K_YMM, K_YMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x2F }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovpd m256, ymm, ymm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovps ymm, ymm, m256 */
    { { K_M128, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x2E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovps m128, xmm, xmm */
    { { K_M256, K_YMM, K_YMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x2E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vmaskmovps m256, ymm, ymm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmaxpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmaxpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmaxpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmaxpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmaxps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmaxps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmaxps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmaxps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmaxsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmaxsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmaxss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmaxss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vminpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vminpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vminpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vminpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vminps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vminps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vminps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vminps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vminsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vminsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vminss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5D }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vminss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovapd m256, ymm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovaps m256, ymm */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovd r32, xmm */
    { { K_XMM, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovd xmm, r32 */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovd xmm, m32 */
    { { K_M32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovd m32, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovddup xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovddup xmm, m64 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vmovddup ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX) }, /* vmovddup ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovdqa m256, ymm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7F }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovdqu m256, ymm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovhlps xmm, xmm, xmm */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovhpd m64, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovhpd xmm, xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovhps m64, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovhps xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovlhps xmm, xmm, xmm */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovlpd m64, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovlpd xmm, xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x13 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovlps m64, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovlps xmm, xmm, m64 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x50 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovmskpd r32, xmm */
    { { K_R32, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x50 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovmskpd r32, ymm */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x50 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovmskps r32, xmm */
    { { K_R32, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x50 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovmskps r32, ymm */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0xE7 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovntdq m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0xE7 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovntdq m256, ymm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vmovntdqa xmm, m128 */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vmovntdqa ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovntpd m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovntpd m256, ymm */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovntps m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x2B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovntps m256, ymm */
    { { K_R64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 1, 0), CPU(AVX) }, /* vmovq r64, xmm */
    { { K_XMM, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6E }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 1, 0), CPU(AVX) }, /* vmovq xmm, r64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovq xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0xD6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovq xmm, m64 */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x6E }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 1, 0), CPU(AVX) }, /* vmovq xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0xD6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovq m64, xmm */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x7E }, 1, 0x08, F_VEX | F_VEXW, VEX(1, 1, 0), CPU(AVX) }, /* vmovq m64, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovsd xmm, m64 */
    { { K_M64, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovsd m64, xmm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmovsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovshdup xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovshdup xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovshdup ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovshdup ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovsldup xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovsldup xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovsldup ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x12 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX) }, /* vmovsldup ymm, m256 */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovss xmm, m32 */
    { { K_M32, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovss m32, xmm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmovss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vmovupd m256, ymm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovups xmm, xmm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovups xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovups xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovups ymm, ymm */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovups ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x10 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovups ymm, m256 */
    { { K_M128, K_XMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vmovups m128, xmm */
    { { K_M256, K_YMM, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x11 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vmovups m256, ymm */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x42 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vmpsadbw xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x42 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vmpsadbw xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x42 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vmpsadbw ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x42 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vmpsadbw ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vmulpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vmulpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vmulpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vmulpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vmulps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vmulps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vmulps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vmulps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmulsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vmulsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmulss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vmulss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vorpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vorpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vorpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vorpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vorps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vorps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vorps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x56 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vorps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsb xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsb xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsb ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsb ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsd xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsd ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsd ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpabsw xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsw ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x1D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpabsw ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6B }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpackssdw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6B }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpackssdw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpackssdw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6B }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpackssdw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x63 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpacksswb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x63 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpacksswb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x63 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpacksswb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x63 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpacksswb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpackusdw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpackusdw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpackusdw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x2B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpackusdw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x67 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpackuswb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x67 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpackuswb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x67 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpackuswb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x67 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpackuswb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddsb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddsb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddsb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddsb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xED }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xED }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xED }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xED }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddusb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddusb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddusb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDC }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddusb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddusw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddusw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddusw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDD }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddusw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFD }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFD }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpaddw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFD }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFD }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpaddw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0F }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpalignr xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0F }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpalignr xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0F }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpalignr ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0F }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpalignr ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDB }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpand xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDB }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpand xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpand ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpand ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpandn xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpandn xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpandn ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDF }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpandn ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE0 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpavgb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE0 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpavgb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpavgb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE0 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpavgb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE3 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpavgw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE3 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpavgw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpavgw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpavgw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x02 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x02 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendd xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x02 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendd ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x02 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendd ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4C }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpblendvb xmm, xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_XMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4C }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpblendvb xmm, xmm, m128, xmm */
    { { K_YMM, K_YMM, K_YMM, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4C }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendvb ymm, ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_YMM }, ROLES(R_REG, R_VVVV, R_RM, R_IS4), { 0x4C }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendvb ymm, ymm, m256, ymm */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0E }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpblendw xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0E }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpblendw xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0E }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendw ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0E }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpblendw ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x78 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastb xmm, xmm */
    { { K_XMM, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x78 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastb xmm, m8 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x78 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastb ymm, xmm */
    { { K_YMM, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x78 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastb ymm, m8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x58 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastd xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastd ymm, xmm */
    { { K_YMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x58 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastd ymm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x59 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastq xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastq ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x59 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastq ymm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x79 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastw xmm, xmm */
    { { K_XMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x79 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastw xmm, m16 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x79 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastw ymm, xmm */
    { { K_YMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x79 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpbroadcastw ymm, m16 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x44 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpclmulqdq xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x44 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpclmulqdq xmm, xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x74 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x74 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x74 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x74 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x76 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x76 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x76 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x76 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpcmpeqq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x29 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpcmpeqq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpcmpeqq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x29 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpcmpeqq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x75 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x75 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpcmpeqw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x75 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x75 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpcmpeqw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x61 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpestri xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x61 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpestri xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x60 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpestrm xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x60 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpestrm xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x64 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x64 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x64 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x64 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x66 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x66 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x66 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x66 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x37 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpcmpgtq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x37 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpcmpgtq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x37 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpcmpgtq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x37 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpcmpgtq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x65 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x65 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpcmpgtw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x65 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x65 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpcmpgtw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x63 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpistri xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x63 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpistri xmm, m128, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x62 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpistrm xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x62 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpcmpistrm xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x06 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vperm2f128 ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x06 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vperm2f128 ymm, ymm, m256, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x46 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vperm2i128 ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x46 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vperm2i128 ymm, ymm, m256, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x36 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpermd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x36 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpermd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x05 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpermilpd xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpermilpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpermilpd xmm, xmm, m128 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x05 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpermilpd xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x05 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vpermilpd ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vpermilpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vpermilpd ymm, ymm, m256 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x05 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vpermilpd ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x04 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpermilps xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpermilps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpermilps xmm, xmm, m128 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x04 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpermilps xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x04 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vpermilps ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vpermilps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vpermilps ymm, ymm, m256 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x04 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vpermilps ymm, m256, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x01 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpermpd ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x01 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpermpd ymm, m256, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpermps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpermps ymm, ymm, m256 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x00 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpermq ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x00 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(3, 1, 0), CPU(AVX2) }, /* vpermq ymm, m256, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrb r32, xmm, imm8 */
    { { K_M8, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrb m8, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrd r32, xmm, imm8 */
    { { K_M32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x16 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrd m32, xmm, imm8 */
    { { K_R64, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXW, VEX(3, 1, 0), CPU(AVX) }, /* vpextrq r64, xmm, imm8 */
    { { K_M64, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x16 }, 1, 0x08, F_VEX | F_VEXW, VEX(3, 1, 0), CPU(AVX) }, /* vpextrq m64, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0xC5 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpextrw r32, xmm, imm8 */
    { { K_R32, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrw r32, xmm, imm8 */
    { { K_M16, K_XMM, K_IMM8, K_NONE }, ROLES(R_RM, R_REG, R_IMM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpextrw m16, xmm, imm8 */
    { { K_XMM, K_VM32X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x90 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherdd xmm, vm32x, xmm */
    { { K_YMM, K_VM32Y, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x90 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherdd ymm, vm32y, ymm */
    { { K_XMM, K_VM32X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x90 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherdq xmm, vm32x, xmm */
    { { K_YMM, K_VM32X, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x90 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherdq ymm, vm32x, ymm */
    { { K_XMM, K_VM64X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x91 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherqd xmm, vm64x, xmm */
    { { K_XMM, K_VM64Y, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x91 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherqd xmm, vm64y, xmm */
    { { K_XMM, K_VM64X, K_XMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x91 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherqq xmm, vm64x, xmm */
    { { K_YMM, K_VM64Y, K_YMM, K_NONE }, ROLES(R_REG, R_RM, R_VVVV, R_NONE), { 0x91 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpgatherqq ymm, vm64y, ymm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x02 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x02 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x02 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x02 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x03 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x03 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x03 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x03 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x01 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x01 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphaddw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x01 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x01 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphaddw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x41 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphminposuw xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x41 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphminposuw xmm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x06 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x06 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x06 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x06 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x07 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x07 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x07 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x07 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x05 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x05 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vphsubw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x05 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x05 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vphsubw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_R32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x20 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrb xmm, xmm, r32, imm8 */
    { { K_XMM, K_XMM, K_M8, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x20 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrb xmm, xmm, m8, imm8 */
    { { K_XMM, K_XMM, K_R32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x22 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrd xmm, xmm, r32, imm8 */
    { { K_XMM, K_XMM, K_M32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x22 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrd xmm, xmm, m32, imm8 */
    { { K_XMM, K_XMM, K_R64, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x22 }, 1, 0x08, F_VEX | F_VEXW, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrq xmm, xmm, r64, imm8 */
    { { K_XMM, K_XMM, K_M64, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x22 }, 1, 0x08, F_VEX | F_VEXW, VEX(3, 1, 0), CPU(AVX) }, /* vpinsrq xmm, xmm, m64, imm8 */
    { { K_XMM, K_XMM, K_R32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC4 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpinsrw xmm, xmm, r32, imm8 */
    { { K_XMM, K_XMM, K_M16, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC4 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpinsrw xmm, xmm, m16, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x04 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaddubsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x04 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaddubsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x04 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaddubsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x04 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaddubsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaddwd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaddwd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaddwd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaddwd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x8C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x8C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovd ymm, ymm, m256 */
    { { K_M128, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x8E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovd m128, xmm, xmm */
    { { K_M256, K_YMM, K_YMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x8E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovd m256, ymm, ymm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x8C }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x8C }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovq ymm, ymm, m256 */
    { { K_M128, K_XMM, K_XMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x8E }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovq m128, xmm, xmm */
    { { K_M256, K_YMM, K_YMM, K_NONE }, ROLES(R_RM, R_VVVV, R_REG, R_NONE), { 0x8E }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaskmovq m256, ymm, ymm */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxsb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3C }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxsb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxsb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3C }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxsb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3D }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxsd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxsd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3D }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxsd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaxsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaxsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaxsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaxsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaxub xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmaxub xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaxub ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDE }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmaxub ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxud xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxud xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3F }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxud ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3F }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxud ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxuw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmaxuw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxuw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmaxuw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x38 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminsb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x38 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminsb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x38 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminsb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x38 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminsb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x39 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x39 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminsd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x39 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminsd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x39 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminsd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEA }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpminsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEA }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpminsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpminsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpminsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDA }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpminub xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDA }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpminub xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpminub ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xDA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpminub ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminud xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminud xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminud ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminud ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminuw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpminuw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminuw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x3A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpminuw ymm, ymm, m256 */
    { { K_R32, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xD7 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpmovmskb r32, xmm */
    { { K_R32, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0xD7 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpmovmskb r32, ymm */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbd xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbd ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x21 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbd ymm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbq xmm, xmm */
    { { K_XMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbq xmm, m16 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbq ymm, xmm */
    { { K_YMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x22 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbq ymm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x20 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbw xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x20 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxbw xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x20 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbw ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x20 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxbw ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x25 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxdq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x25 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxdq xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x25 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxdq ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x25 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxdq ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxwd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxwd xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxwd ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x23 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxwd ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x24 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxwq xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x24 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovsxwq xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x24 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxwq ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x24 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovsxwq ymm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbd xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbd xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbd ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbd ymm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbq xmm, xmm */
    { { K_XMM, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbq xmm, m16 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbq ymm, xmm */
    { { K_YMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbq ymm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x30 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbw xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x30 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxbw xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x30 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbw ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x30 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxbw ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x35 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxdq xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x35 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxdq xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x35 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxdq ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x35 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxdq ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxwd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxwd xmm, m64 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxwd ymm, xmm */
    { { K_YMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxwd ymm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x34 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxwq xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x34 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmovzxwq xmm, m32 */
    { { K_YMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x34 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxwq ymm, xmm */
    { { K_YMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x34 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmovzxwq ymm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmuldq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x28 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmuldq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmuldq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x28 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmuldq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmulhrsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0B }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmulhrsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmulhrsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0B }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmulhrsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmulhuw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmulhuw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmulhuw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmulhuw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmulhw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmulhw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmulhw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmulhw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x40 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmulld xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x40 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpmulld xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x40 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmulld ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x40 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpmulld ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmullw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD5 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmullw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmullw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD5 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmullw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmuludq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF4 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpmuludq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmuludq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF4 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpmuludq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEB }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpor xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEB }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpor xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpor ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpor ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpsadbw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpsadbw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpsadbw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpsadbw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x00 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpshufb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x00 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpshufb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x00 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpshufb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x00 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpshufb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpshufd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpshufd xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpshufd ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpshufd ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vpshufhw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vpshufhw xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX2) }, /* vpshufhw ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 2, 0), CPU(AVX2) }, /* vpshufhw ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vpshuflw xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vpshuflw xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX2) }, /* vpshuflw ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x70 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 3, 0), CPU(AVX2) }, /* vpshuflw ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x08 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x08 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x08 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x08 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0A }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x0A }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x09 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x09 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vpsignw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x09 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x09 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsignw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 6, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpslld xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpslld xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpslld xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 6, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpslld ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpslld ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpslld ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 7, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpslldq xmm, xmm, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 7, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpslldq ymm, ymm, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 6, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllq xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF3 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF3 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 6, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllq ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllq ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllq ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x47 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsllvq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 6, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllw xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsllw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 6, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllw ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllw ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsllw ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 4, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrad xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrad xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrad xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 4, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrad ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrad ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrad ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x46 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsravd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x46 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsravd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x46 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsravd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x46 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsravd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 4, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsraw xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsraw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsraw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 4, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsraw ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsraw ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsraw ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 2, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrld xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrld xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD2 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrld xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x72 }, 1, 2, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrld ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrld ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD2 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrld ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 3, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrldq xmm, xmm, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 3, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrldq ymm, ymm, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 2, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlq xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD3 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD3 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x73 }, 1, 2, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlq ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlq ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD3 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlq ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXW, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x45 }, 1, 0x08, F_VEX | F_VEXW | F_VEXL, VEX(2, 1, 0), CPU(AVX2) }, /* vpsrlvq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 2, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlw xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD1 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsrlw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_VVVV, R_RM, R_IMM, R_NONE), { 0x71 }, 1, 2, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlw ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlw ymm, ymm, xmm */
    { { K_YMM, K_YMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD1 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsrlw ymm, ymm, m128 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFA }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFA }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFA }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFB }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFB }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xFB }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubsb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubsb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubsb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubsb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubsw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubsw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubsw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xE9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubsw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubusb xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD8 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubusb xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubusb ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD8 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubusb ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubusw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubusw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubusw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xD9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubusw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF9 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpsubw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xF9 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpsubw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vptest xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vptest xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vptest ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x17 }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vptest ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x68 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhbw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x68 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhbw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x68 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhbw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x68 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhbw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6A }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhdq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6A }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhdq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhdq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6A }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhdq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhqdq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6D }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhqdq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhqdq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6D }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhqdq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x69 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhwd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x69 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckhwd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x69 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhwd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x69 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckhwd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x60 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklbw xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x60 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklbw xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x60 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklbw ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x60 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklbw ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x62 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckldq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x62 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpckldq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x62 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckldq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x62 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpckldq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklqdq xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklqdq xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklqdq ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x6C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklqdq ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x61 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklwd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x61 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vpunpcklwd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x61 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklwd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x61 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX2) }, /* vpunpcklwd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEF }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpxor xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEF }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vpxor xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEF }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpxor ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0xEF }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX2) }, /* vpxor ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x53 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vrcpps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x53 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vrcpps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x53 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vrcpps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x53 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vrcpps ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x53 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vrcpss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x53 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vrcpss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x09 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundpd xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x09 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundpd xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x09 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vroundpd ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x09 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vroundpd ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x08 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundps xmm, xmm, imm8 */
    { { K_XMM, K_M128, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x08 }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundps xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x08 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vroundps ymm, ymm, imm8 */
    { { K_YMM, K_M256, K_IMM8, K_NONE }, ROLES(R_REG, R_RM, R_IMM, R_NONE), { 0x08 }, 1, 0x08, F_VEX | F_VEXL, VEX(3, 1, 0), CPU(AVX) }, /* vroundps ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0B }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundsd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M64, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0B }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundsd xmm, xmm, m64, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0A }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundss xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M32, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0x0A }, 1, 0x08, F_VEX, VEX(3, 1, 0), CPU(AVX) }, /* vroundss xmm, xmm, m32, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x52 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vrsqrtps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x52 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vrsqrtps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x52 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vrsqrtps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x52 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vrsqrtps ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x52 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vrsqrtss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x52 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vrsqrtss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vshufpd xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vshufpd xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vshufpd ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vshufpd ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_XMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vshufps xmm, xmm, xmm, imm8 */
    { { K_XMM, K_XMM, K_M128, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vshufps xmm, xmm, m128, imm8 */
    { { K_YMM, K_YMM, K_YMM, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vshufps ymm, ymm, ymm, imm8 */
    { { K_YMM, K_YMM, K_M256, K_IMM8 }, ROLES(R_REG, R_VVVV, R_RM, R_IMM), { 0xC6 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vshufps ymm, ymm, m256, imm8 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vsqrtpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vsqrtpd xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vsqrtpd ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vsqrtpd ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vsqrtps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vsqrtps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vsqrtps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x51 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vsqrtps ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vsqrtsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vsqrtsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vsqrtss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x51 }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vsqrtss xmm, xmm, m32 */
    { { K_M32, K_NONE, K_NONE, K_NONE }, ROLES(R_RM, R_NONE, R_NONE, R_NONE), { 0xAE }, 1, 3, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vstmxcsr m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vsubpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vsubpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vsubpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vsubpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vsubps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vsubps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vsubps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vsubps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vsubsd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M64, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 3, 0), CPU(AVX) }, /* vsubsd xmm, xmm, m64 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vsubss xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M32, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x5C }, 1, 0x08, F_VEX, VEX(1, 2, 0), CPU(AVX) }, /* vsubss xmm, xmm, m32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vtestpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vtestpd xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vtestpd ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vtestpd ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vtestps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0E }, 1, 0x08, F_VEX, VEX(2, 1, 0), CPU(AVX) }, /* vtestps xmm, m128 */
    { { K_YMM, K_YMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vtestps ymm, ymm */
    { { K_YMM, K_M256, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0E }, 1, 0x08, F_VEX | F_VEXL, VEX(2, 1, 0), CPU(AVX) }, /* vtestps ymm, m256 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vucomisd xmm, xmm */
    { { K_XMM, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2E }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vucomisd xmm, m64 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2E }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vucomiss xmm, xmm */
    { { K_XMM, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x2E }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vucomiss xmm, m32 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vunpckhpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vunpckhpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vunpckhpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vunpckhpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vunpckhps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vunpckhps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vunpckhps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x15 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vunpckhps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vunpcklpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(1, 1, 0), CPU(AVX) }, /* vunpcklpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vunpcklpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 0), CPU(AVX) }, /* vunpcklpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vunpcklps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vunpcklps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vunpcklps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x14 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vunpcklps ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vxorpd xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX, VEX(1, 1, 1), CPU(AVX) }, /* vxorpd xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vxorpd ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 1, 1), CPU(AVX) }, /* vxorpd ymm, ymm, m256 */
    { { K_XMM, K_XMM, K_XMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vxorps xmm, xmm, xmm */
    { { K_XMM, K_XMM, K_M128, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX, VEX(1, 0, 1), CPU(AVX) }, /* vxorps xmm, xmm, m128 */
    { { K_YMM, K_YMM, K_YMM, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vxorps ymm, ymm, ymm */
    { { K_YMM, K_YMM, K_M256, K_NONE }, ROLES(R_REG, R_VVVV, R_RM, R_NONE), { 0x57 }, 1, 0x08, F_VEX | F_VEXL, VEX(1, 0, 1), CPU(AVX) }, /* vxorps ymm, ymm, m256 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x77 }, 1, 0xFF, F_VEX | F_VEXL, VEX(1, 0, 0), CPU(AVX) }, /* vzeroall */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x77 }, 1, 0xFF, F_VEX, VEX(1, 0, 0), CPU(AVX) }, /* vzeroupper */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC0 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xadd r8, r8 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xadd r16, r16 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xadd r32, r32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xadd r64, r64 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC0 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xadd m8, r8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xadd m16, r16 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xadd m32, r32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x0F, 0xC1 }, 2, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xadd m64, r64 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x86 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x86 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x86 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r8, m8 */
    { { K_R16, K_AX, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg r16, ax */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg r16, m16 */
    { { K_R32, K_EAX, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r32, eax */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg r32, m32 */
    { { K_R64, K_RAX, K_NONE, K_NONE }, ROLES(R_OPC, R_NONE, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg r64, rax */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg r64, m64 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x86 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg m8, r8 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg m16, r16 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg m32, r32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x87 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg m64, r64 */
    { { K_AX, K_R16, K_NONE, K_NONE }, ROLES(R_NONE, R_OPC, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xchg ax, r16 */
    { { K_EAX, K_R32, K_NONE, K_NONE }, ROLES(R_NONE, R_OPC, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xchg eax, r32 */
    { { K_RAX, K_R64, K_NONE, K_NONE }, ROLES(R_NONE, R_OPC, R_NONE, R_NONE), { 0x90 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xchg rax, r64 */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0x0F, 0x01, 0xD0 }, 3, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xgetbv */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xD7 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xlatb */
    { { K_NONE, K_NONE, K_NONE, K_NONE }, ROLES(R_NONE, R_NONE, R_NONE, R_NONE), { 0xD7 }, 1, 0xFF, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xlatb */
    { { K_R8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r8, imm8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x30 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r8, r8 */
    { { K_R8, K_R8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r8, r8 */
    { { K_R8, K_M8, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x32 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r8, m8 */
    { { K_R16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor r16, imm8 */
    { { K_R16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor r16, imm16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor r16, r16 */
    { { K_R16, K_R16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor r16, r16 */
    { { K_R16, K_M16, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor r16, m16 */
    { { K_R32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor r32, imm8 */
    { { K_R32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r32, imm32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r32, r32 */
    { { K_R32, K_R32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r32, r32 */
    { { K_R32, K_M32, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor r32, m32 */
    { { K_R64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor r64, imm8 */
    { { K_R64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor r64, imm32 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xor r64, r64 */
    { { K_R64, K_R64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xor r64, r64 */
    { { K_R64, K_M64, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x33 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xor r64, m64 */
    { { K_M8, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x80 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor m8, imm8 */
    { { K_M8, K_R8, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x30 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor m8, r8 */
    { { K_M16, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_P66 | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor m16, imm8 */
    { { K_M16, K_IMM16, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor m16, imm16 */
    { { K_M16, K_R16, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor m16, r16 */
    { { K_M32, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor m32, imm8 */
    { { K_M32, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor m32, imm32 */
    { { K_M32, K_R32, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor m32, r32 */
    { { K_M64, K_IMM8, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x83 }, 1, 6, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor m64, imm8 */
    { { K_M64, K_IMM32, K_NONE, K_NONE }, ROLES(R_RM, R_IMM, R_NONE, R_NONE), { 0x81 }, 1, 6, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor m64, imm32 */
    { { K_M64, K_R64, K_NONE, K_NONE }, ROLES(R_RM, R_REG, R_NONE, R_NONE), { 0x31 }, 1, 0x08, F_REXW, VEX(0, 0, 0), CPU(BASE) }, /* xor m64, r64 */
    { { K_AL, K_IMM8, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x34 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor al, imm8 */
    { { K_AX, K_IMM16, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x35 }, 1, 0xFF, F_P66, VEX(0, 0, 0), CPU(BASE) }, /* xor ax, imm16 */
    { { K_EAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x35 }, 1, 0xFF, 0, VEX(0, 0, 0), CPU(BASE) }, /* xor eax, imm32 */
    { { K_RAX, K_IMM32, K_NONE, K_NONE }, ROLES(R_NONE, R_IMM, R_NONE, R_NONE), { 0x35 }, 1, 0xFF, F_REXW | F_IMMSEXT, VEX(0, 0, 0), CPU(BASE) }, /* xor rax, imm32 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x57 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* xorpd xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x57 }, 2, 0x08, F_P66, VEX(0, 0, 0), CPU(SSE2) }, /* xorpd xmm, m128 */
    { { K_XMM, K_XMM, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x57 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* xorps xmm, xmm */
    { { K_XMM, K_M128, K_NONE, K_NONE }, ROLES(R_REG, R_RM, R_NONE, R_NONE), { 0x0F, 0x57 }, 2, 0x08, 0, VEX(0, 0, 0), CPU(SSE) }, /* xorps xmm, m128 */
};

const size_t spasm_x86_64_forms_count = 2967;
