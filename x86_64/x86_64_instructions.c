/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/x86_64.h"

const Spasm_x86_64_InstructionInfo spasm_x86_64_instruction_table[3] = {
    {
        .mnemonic = "mov",
        .mnemonic_len = 3,
        .operand_types = { SpasmOperandType_Register, SpasmOperandType_Imm8, SpasmOperandType_None, SpasmOperandType_None },
        .operand_sizes = { 64, 64, 0, 0 },
        .opcode = { 0x89 },
        .opcode_len = 1,
        .needs_modrm = true,
        .prefix = Spasm_x86_64_PrefixType_REX,
        .pp = 0x00,
        .mmmmm = 00,
        .cpu_flag = Spasm_x86_64_CPUFlag_BASE
    },
    {
        .mnemonic = "mov",
        .mnemonic_len = 3,
        .operand_types = { SpasmOperandType_Register, SpasmOperandType_Register, SpasmOperandType_None, SpasmOperandType_None },
        .operand_sizes = { 64, 64, 0, 0 },
        .opcode = { 0x89 },
        .opcode_len = 1,
        .needs_modrm = true,
        .prefix = Spasm_x86_64_PrefixType_REX,
        .pp = 0x00,
        .mmmmm = 00,
        .cpu_flag = Spasm_x86_64_CPUFlag_BASE
    },
    {
        .mnemonic = "syscall",
        .mnemonic_len = 7,
        .operand_types = { SpasmOperandType_None, SpasmOperandType_None, SpasmOperandType_None, SpasmOperandType_None },
        .operand_sizes = { 0, 0, 0, 0 },
        .opcode = { 0x0F, 0x05 },
        .opcode_len = 2,
        .needs_modrm = false,
        .prefix = Spasm_x86_64_PrefixType_NONE,
        .pp = 0x00,
        .mmmmm = 00,
        .cpu_flag = Spasm_x86_64_CPUFlag_BASE
    },
};

const size_t spasm_x86_64_instruction_table_size = 3;
