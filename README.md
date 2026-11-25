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
#include "spasm/assembler.h"
#include "spasm/instruction.h"
#include "spasm/operand.h"
#include "spasm/register.h"
#include "spasm/error.h"
#include "spasm/data.h"

SpasmABI abi = spasm_get_current_abi();
SpasmJitAssembler assembler = spasm_get_jit_assembler(abi);

if(assembler == NULL)
{
    spasm_error("Cannot find an assembler for current abi");
    exit(1);
}

SpasmData data;
spasm_data_init(&data);

spasm_data_add_bytes(&data,
                     "message",
                     (uint8_t*)"Hello, World!\n",
                     14,
                     SpasmDataType_Data);

SpasmInstructions instructions = spasm_instructions_new();

/* Print "Hello, World!" to stdout */
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmOpReg(SpasmRegister_x86_64_RAX),
                             SpasmOpImm32(1));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmOpReg(SpasmRegister_x86_64_RDI),
                             SpasmOpImm32(1));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmOpReg(SpasmRegister_x86_64_RSI),
                             SpasmOpData("message"));
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmOpReg(SpasmRegister_x86_64_RDX),
                             SpasmOpImm32(14));
spasm_instructions_push_backz(&instructions, "syscall");

/* Exit */
spasm_instructions_push_back(&instructions,
                             "mov",
                             SpasmOpReg(SpasmRegister_x86_64_RAX),
                             SpasmOpImm32(60));
spasm_instructions_push_back(&instructions,
                             "xor",
                             SpasmOpReg(SpasmRegister_x86_64_EDI),
                             SpasmOpReg(SpasmRegister_x86_64_EDI));
spasm_instructions_push_backz(&instructions, "syscall");

spasm_instructions_debug(&instructions, abi, 1);

SpasmByteCode bytecode = spasm_bytecode_new();

if(!assembler(&instructions, &bytecode, &data))
{
    spasm_error("Error when assembling instructions, check the log for more details");
}

spasm_bytecode_debug(&bytecode);

spasm_data_release(&data);
spasm_instructions_destroy(&instructions);
spasm_bytecode_destroy(&bytecode);
```

For more examples, you can look at the /tests subdirectory.

### Operands

| Operand | Macro | Notes |
| --- | --- | --- |
| Register | `SpasmOpReg(SpasmRegister_x86_64_RAX)` | `spasm_register_from_string("rax", 3)` looks a register up by name (case-insensitive) |
| Memory | `SpasmOpMemory(base, index, disp, scale)` | `[base + index * scale + disp]`, `base`/`index` can be `0` (none), `base` can be `rip` |
| Sized memory | `SpasmOpMemByte`, `SpasmOpMemWord`, `SpasmOpMemDword`, `SpasmOpMemQword`, `SpasmOpMemXmmword`, `SpasmOpMemYmmword` | Needed when the other operands do not give the size (`add qword ptr [rax], 1`), the encoder reports an ambiguous size otherwise |
| Immediate | `SpasmOpImm8/16/32/64(value)` | Matched by value: the shortest encoding that holds the value is used whatever the macro |
| Fixed immediate | `SpasmOpImmFixed8/16/32/64(value)` | Keeps the width of the macro, for values patched later |

## x86_64 encoding

The encoder covers the legacy, REX and VEX encodings: general purpose instructions, SSE to SSE4.2,
AVX, AVX2, FMA, F16C, BMI1/2 and the other VEX extensions listed by
[Opcodes](https://github.com/Maratyszcza/Opcodes). EVEX (AVX-512), XOP, 3DNow!, MMX and x87 are not supported yet.

- Mnemonics and registers are looked up in gperf perfect hash tables (case-insensitive), each mnemonic maps to the
  range of its forms in the instruction table.
- Every addressing mode is encoded: base + index * scale + disp with disp8/disp32, rip-relative, absolute,
  no base, the rsp/r12 base SIB and the rbp/r13 base zero disp8 cases, VSIB for gathers.
- The shortest encoding is picked, with the same choices as llvm-mc: sign-extended imm8 forms, short
  `al`/`ax`/`eax`/`rax` forms, `B8+r` moves, 2-byte VEX (commuting the sources of commutative instructions
  when it allows it).

### Instruction tables

The tables in `x86_64/` are generated from [Opcodes](https://github.com/Maratyszcza/Opcodes) and gperf, and
committed. To regenerate them (needs `pip install Opcodes==0.3.14` and gperf 3.1):

```bash
# Instruction table and gperf mnemonic table
python x86_64/generate.py -o x86_64_instructions.c

# Only rerun gperf (e.g. after editing x86_64_registers.gperf)
python x86_64/generate.py --gperf-only
```

## Tests

```bash
./build.sh --tests --debug
```

Tests assert in debug builds only. When python3 and `llvm-mc` are found, the `x86_64_difftest` test
encodes generated operands for every form of the x86_64 table and compares the bytes with
`llvm-mc --show-encoding`. Equivalent encodings that differ on purpose are listed in
`tests/x86_64/difftest/known_differences.txt`.

## Disclaimer

As it is under development, expect things to break and not work as expected. Currently only supports Windows x64 and Linux x64.