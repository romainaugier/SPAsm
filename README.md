# SPAsm 

Super Powerful Assembler library and application.

## Application

Application usage (see -h for available flags):
```bash
spasm hello_world.asm -o hello_world.exe
```

## Library

SPAsm provides a powerful library to jit-assemble assembly code. It tries to be as agnostic as possible but for some parts it's not possible trivially (i.e registers), and thus for example using aarch64 registers for an x86_64 abi will raise errors.

```c
/* Exit syscall example */
#include "spasm/jit.h"

SpasmBackend current_backend = spasm_get_current_backend();
SpasmJitAssembler assembler = spasm_get_jit_assembler(current_backend);

SpasmInstructions instructions = spasm_instructions_new();

spasm_instructions_push_back(instructions,
                             SpasmInstruction_Mov,
                             SpasmRegister_x86_64_RAX,
                             SpasmImmediate_Byte(60));
spasm_instructions_push_back(instructions,
                             SpasmInstruction_Mov,
                             SpasmRegister_x86_64_RDI,
                             SpasmImmediate_Byte(0));
spasm_instructions_push_back(instructions,
                             SpasmInstruction_SysCall);

SpasmByteCode bytecode = spasm_bytecode_new();

if(!assembler(&instructions, &bytecode, NULL))
{
    spasm_error("Error when assembling instructions, check the log for more details");
}

spasm_instructions_destroy(instructions);
spasm_bytecode_destroy(bytecode);
```

```c
/* Hello, World! and exit syscall example */
#include "spasm/jit.h"

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
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RAX),
                                SpasmImmediate_Byte(1));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RDI),
                                SpasmImmediate_Byte(1));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RSI),
                                SpasmImmediate_QWord(spasm_data_get_address("message")));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RDX),
                                SpasmImmediate_Byte(14));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_SysCall);

/* Exit */
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RAX),
                                SpasmImmediate_Byte(60));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_Mov,
                                SpasmReg(SpasmRegister_x86_64_RDI),
                                SpasmImmediate_Byte(0));
spasm_instructions_push_back(&instructions,
                                SpasmInstruction_SysCall);

spasm_instructions_debug(&instructions, abi, 1);

SpasmByteCode bytecode = spasm_bytecode_new();

if(!assembler(&instructions, &bytecode, &data))
{
    spasm_error("Error when assembling instructions, check the log for more details");
}

spasm_data_destroy(&data);
spasm_instructions_destroy(&instructions);
spasm_bytecode_destroy(&bytecode);
```

For more examples, you can look at the /tests subdirectory.

## Disclaimer

As it is under development, expect things to break and not work as expected. Currently only supports Windows x64 and Linux x64.