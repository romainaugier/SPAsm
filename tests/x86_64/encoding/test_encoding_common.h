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

static inline void assemble_ops_and_expect(const char* mnemonic,
                                           const SpasmOperand* ops,
                                           uint8_t num_ops,
                                           const uint8_t* expected,
                                           size_t expected_size)
{
    SpasmABI abi = spasm_get_current_abi();
    SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmByteCode bytecode = spasm_bytecode_new();
    SpasmData data;

    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    switch(num_ops)
    {
        case 0: spasm_instructions_push_backz(&instructions, mnemonic); break;
        case 1: spasm_instructions_push_back(&instructions, mnemonic, ops[0]); break;
        case 2: spasm_instructions_push_back(&instructions, mnemonic, ops[0], ops[1]); break;
        case 3: spasm_instructions_push_back(&instructions, mnemonic, ops[0], ops[1], ops[2]); break;
        case 4: spasm_instructions_push_back(&instructions, mnemonic, ops[0], ops[1], ops[2], ops[3]); break;
        default: SPASM_ASSERT(0, "too many operands");
    }

    SPASM_ASSERT(assembler(&instructions, &bytecode, &data),
                 "assembler failed");

    size_t sz;
    const SpasmByte* bytes = spasm_bytecode_get(&bytecode, &sz);

    if(sz != expected_size || memcmp(bytes, expected, expected_size) != 0)
    {
        spasm_instructions_debug(&instructions, abi, 1);
        spasm_bytecode_debug(&bytecode);
        SPASM_ASSERT(0, "bytecode mismatch");
    }

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
    spasm_bytecode_destroy(&bytecode);
}

static inline void assemble_and_expect_z(const char* mnemonic,
                                         const uint8_t* expected,
                                         size_t expected_size)
{
    assemble_ops_and_expect(mnemonic, NULL, 0, expected, expected_size);
}

static inline void assemble_and_expect_1(const char* mnemonic,
                                         SpasmOperand a,
                                         const uint8_t* expected,
                                         size_t expected_size)
{
    assemble_ops_and_expect(mnemonic, &a, 1, expected, expected_size);
}

static inline void assemble_and_expect(const char* mnemonic,
                                       SpasmOperand a,
                                       SpasmOperand b,
                                       const uint8_t* expected,
                                       size_t expected_size)
{
    const SpasmOperand ops[2] = { a, b };
    assemble_ops_and_expect(mnemonic, ops, 2, expected, expected_size);
}

static inline void assemble_and_expect_3(const char* mnemonic,
                                         SpasmOperand a,
                                         SpasmOperand b,
                                         SpasmOperand c,
                                         const uint8_t* expected,
                                         size_t expected_size)
{
    const SpasmOperand ops[3] = { a, b, c };
    assemble_ops_and_expect(mnemonic, ops, 3, expected, expected_size);
}

static inline void assemble_and_expect_4(const char* mnemonic,
                                         SpasmOperand a,
                                         SpasmOperand b,
                                         SpasmOperand c,
                                         SpasmOperand d,
                                         const uint8_t* expected,
                                         size_t expected_size)
{
    const SpasmOperand ops[4] = { a, b, c, d };
    assemble_ops_and_expect(mnemonic, ops, 4, expected, expected_size);
}

static inline void assemble_and_expect_failure(const char* mnemonic,
                                               SpasmOperand a,
                                               SpasmOperand b)
{
    SpasmABI abi = spasm_get_current_abi();
    SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmByteCode bytecode = spasm_bytecode_new();
    SpasmData data;

    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    spasm_instructions_push_back(&instructions, mnemonic, a, b);

    SPASM_ASSERT(!assembler(&instructions, &bytecode, &data), "assembler should have failed");

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
    spasm_bytecode_destroy(&bytecode);
}
