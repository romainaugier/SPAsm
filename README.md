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
#include "spasm/abi.h"
#include "spasm/instruction.h"
#include "spasm/jit.h"
#include "spasm/operand.h"
#include "spasm/register.h"
#include "spasm/error.h"
#include "spasm/data.h"

SpasmABI abi = spasm_get_current_abi();
SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

if(assembler == NULL)
{
    spasm_error("Cannot find an assembler for current abi");
    spasm_exit(1);
}

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
                             SpasmImm8(1));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmReg(SpasmRegister_x86_64_RDI),
                             SpasmImm16(1));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmReg(SpasmRegister_x86_64_RSI),
                             SpasmImm64(spasm_data_get_address("message")));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmReg(SpasmRegister_x86_64_RDX),
                             SpasmImm8(14));
spasm_instructions_push_back(&instructions,
                                "syscall");

/* Exit */
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmReg(SpasmRegister_x86_64_RAX),
                             SpasmImm8(60));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmReg(SpasmRegister_x86_64_RDI),
                             SpasmImm8(0));
spasm_instructions_push_back(&instructions,
                             "syscall");

spasm_instructions_debug(&instructions, abi, 1);

SpasmByteCode bytecode = spasm_bytecode_new();

if(!assembler(&instructions, &bytecode, &data))
{
    spasm_error("Error when assembling instructions, check the log for more details");
}

spasm_bytecode_debug(&bytecode);

spasm_data_destroy(&data);
spasm_instructions_destroy(&instructions);
spasm_bytecode_destroy(&bytecode);
```

For more examples, you can look at the /tests subdirectory.

## Disclaimer

As it is under development, expect things to break and not work as expected. Currently only supports Windows x64 and Linux x64.