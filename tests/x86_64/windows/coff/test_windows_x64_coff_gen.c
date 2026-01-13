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

    /* Exit */
    spasm_instructions_push_back(&instructions,
                                 "mov",
                                 SpasmOpReg(SpasmRegister_x86_64_RCX),
                                 SpasmOpImm32(0xAAAA));
    spasm_instructions_push_back(&instructions,
                                 "call",
                                 SpasmOpSymbol("ExitProcess"));

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

    spasm_data_destroy(&data);
    spasm_instructions_destroy(&instructions);
    spasm_bytecode_destroy(&bytecode);

    return 0;
}
