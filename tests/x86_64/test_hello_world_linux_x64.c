/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/abi.h"
#include "spasm/instruction.h"
#include "spasm/jit.h"
#include "spasm/operand.h"
#include "spasm/register.h"
#include "spasm/error.h"
#include "spasm/data.h"

#include <string.h>

const size_t result_size = 49;

int main(void)
{
    SpasmABI abi = spasm_get_current_abi();
    SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

    SpasmData data = spasm_data_new();

    spasm_data_add_bytes(&data,
                         "message",
                         (uint8_t*)"Hello, World!\n",
                         14,
                         SpasmDataType_Data);

    SpasmInstructions instructions = spasm_instructions_new();

    /* Print "Hello, World!" to stdout */
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RAX),
                                 SpasmImm32(1));
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RDI),
                                 SpasmImm32(1));
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RSI),
                                 SpasmData("message"));
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RDX),
                                 SpasmImm32(14));
    spasm_instructions_push_back0(&instructions,
                                  "syscall");

    /* Exit */
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RAX),
                                 SpasmImm32(60));
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmReg(SpasmRegister_x86_64_RSI),
                                 SpasmImm32(0));
    spasm_instructions_push_back0(&instructions,
                                  "syscall");

    spasm_instructions_debug(&instructions, abi, 1);

    SpasmByteCode bytecode = spasm_bytecode_new();

    if(!assembler(&instructions, &bytecode, &data))
    {
        spasm_error("Error when assembling instructions, check the log for more details");

        spasm_data_destroy(&data);
        spasm_instructions_destroy(&instructions);
        spasm_bytecode_destroy(&bytecode);

        return 1;
    }

    printf("%zu\n", vector_size(&bytecode.data));

    spasm_bytecode_debug(&bytecode);

    SPASM_ASSERT(vector_size(&bytecode.data) == result_size,
                 "Invalid bytecode size");

    spasm_data_destroy(&data);
    spasm_instructions_destroy(&instructions);
    spasm_bytecode_destroy(&bytecode);

    return 0;
}
