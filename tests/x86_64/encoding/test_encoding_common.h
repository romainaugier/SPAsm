/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#include "spasm/abi.h"
#include "spasm/assembler.h"
#include "spasm/instruction.h"
#include "spasm/operand.h"
#include "spasm/bytecode.h"
#include "spasm/data.h"
#include "spasm/error.h"

#include <string.h>

static void assemble_and_expect(const char* mnemonic,
                                SpasmOperand a,
                                SpasmOperand b,
                                const uint8_t* expected,
                                size_t expected_size)
{
    SpasmABI abi = spasm_get_current_abi();
    SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmByteCode bytecode = spasm_bytecode_new();
    SpasmData data;

    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    spasm_instructions_push_back(&instructions, mnemonic, a, b);

    SPASM_ASSERT(assembler(&instructions, &bytecode, &data),
                 "assembler failed");

    size_t sz;
    const SpasmByte* bytes = spasm_bytecode_get(&bytecode, &sz);

    if(sz != expected_size)
    {
        spasm_instructions_debug(&instructions, abi, 1);
        spasm_bytecode_debug(&bytecode);
        SPASM_ASSERT(0, "bytecode size mismatch");
    }

    if(memcmp(bytes, expected, expected_size) != 0)
    {
        spasm_instructions_debug(&instructions, abi, 1);
        spasm_bytecode_debug(&bytecode);
        SPASM_ASSERT(0, "bytecode mismatch");
    }

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
    spasm_bytecode_destroy(&bytecode);
}

static void assemble_and_expect_z(const char* mnemonic,
                                  const uint8_t* expected,
                                  size_t expected_size)
{
    SpasmABI abi = spasm_get_current_abi();
    SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

    SpasmInstructions ins = spasm_instructions_new();
    SpasmByteCode bc = spasm_bytecode_new();
    SpasmData data;

    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    spasm_instructions_push_backz(&ins, mnemonic);

    SPASM_ASSERT(assembler(&ins, &bc, &data),
                 "assembler failed");

    size_t sz;
    const SpasmByte* bytes = spasm_bytecode_get(&bc, &sz);

    SPASM_ASSERT(sz == expected_size, "invalid bytecode size");
    SPASM_ASSERT(memcmp(bytes, expected, expected_size) == 0,
                 "bytecode mismatch");

    spasm_data_release(&data);
    spasm_instructions_destroy(&ins);
    spasm_bytecode_destroy(&bc);
}
