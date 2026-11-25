# SPAsm 

**S**uper **P**owerful **Asm**(ssem)bler library and application.

SPAsm is the assembler and object/executable generation layer of the **S**uper **P**owerful compiler trilogy toolchain.

| Library | Role |
|---------|------|
| [SPIROU](https://github.com/romainaugier/SPIROU) | Target-independent IR and optimizations |
| [SPLICE](https://github.com/roaminaugier/SPLICE) | Machine IR, instruction selection, register allocation |
| **[SPAsm](https://github.com/romainaugier/SPAsm)** | Encoding and object files |

SPAsm does not depend on SPLICE: any frontend can emit assembly directly.

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
| Register | `SpasmOpReg(SpasmRegister_x86_64_RAX)` | `spasm_register_from_string("rax", 3)` looks a register up by name (case-insensitive). `ah`, `ch`, `dh` and `bh` cannot be used in an instruction that needs a REX prefix |
| Memory | `SpasmOpMemory(base, index, disp, scale)` | `[base + index * scale + disp]`, `base`/`index` can be `0` (none), `base` can be `rip`. 32-bit `base`/`index` (or `eip`) use 32-bit addressing (`67` prefix) |
| Sized memory | `SpasmOpMemByte`, `SpasmOpMemWord`, `SpasmOpMemDword`, `SpasmOpMemQword`, `SpasmOpMemXmmword`, `SpasmOpMemYmmword`, `SpasmOpMemZmmword` | Needed when the other operands do not give the size (`add qword ptr [rax], 1`), the encoder reports an ambiguous size otherwise |
| Immediate | `SpasmOpImm8/16/32/64(value)` | Matched by value: the shortest encoding that holds the value is used whatever the macro |
| Fixed immediate | `SpasmOpImmFixed8/16/32/64(value)` | Keeps the width of the macro, for values patched later |
| AVX-512 opmask | `SpasmOpRegMask(reg, k)`, `SpasmOpRegMaskZ(reg, k)`, `SpasmOpMemoryMask(base, index, disp, scale, size, k)` | `zmm1 {k1}`, `zmm1 {k1} {z}`, `xmmword ptr [rax] {k1}`: destination only, `k1`-`k7`, zeroing only on registers. Required by gathers and scatters |
| AVX-512 broadcast | `SpasmOpMemoryBroadcast(base, index, disp, scale, element_size, count)` | `dword ptr [rax]{1to16}` is `(RAX, 0, 0, 1, 4, 16)` |
| AVX-512 rounding | `SpasmOpRounding(SpasmRounding_Nearest/Down/Up/Zero)`, `SpasmOpSae()` | `{rn-sae}`...`{rz-sae}`, `{sae}`: placed before the immediate, or last (`vcmpps k1, zmm1, zmm2, {sae}, 0`) |

## x86_64 encoding

The encoder covers the legacy, REX, VEX and EVEX encodings: general purpose instructions, SSE to SSE4.2,
AVX, AVX2, FMA, F16C, BMI1/2, AVX-512 (F, CD, BW, DQ, VL, IFMA, VBMI, VPOPCNTDQ) and the other extensions
listed by [Opcodes](https://github.com/Maratyszcza/Opcodes). XOP, 3DNow!, MMX, x87 and the Xeon Phi
AVX512ER/PF are not supported.

- Mnemonics and registers are looked up in gperf perfect hash tables (case-insensitive), each mnemonic maps to the range of its forms in the instruction table.
- Every addressing mode is encoded: base + index * scale + disp with disp8/disp32, rip-relative, absolute, no base, the rsp/r12 base SIB and the rbp/r13 base zero disp8 cases, VSIB for gathers, and 32-bit addressing with the `67` prefix (32-bit base/index or eip-relative).
- The shortest encoding is picked, with the same choices as llvm-mc: sign-extended imm8 forms, short `al`/`ax`/`eax`/`rax` forms, `B8+r` moves, 2-byte VEX (commuting the sources of commutative instructions when it allows it). EVEX is only used when VEX cannot encode the instruction (registers 16-31, zmm, masks, broadcast, rounding), with the compressed disp8*N.
- AVX-512: 32 vector registers, opmasks and zeroing, embedded broadcast, embedded rounding and sae, VSIB with zmm indexes. The Opcodes AVX-512 data has a few errors and missing forms, fixed in `generate.py` (found with the llvm-mc differential test).

### Instruction tables

The tables in `x86_64/` are generated from [Opcodes](https://github.com/Maratyszcza/Opcodes) and gperf, and committed. To regenerate them (needs `pip install Opcodes==0.3.14` and gperf 3.1):

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

Tests assert in debug builds only. When python3 and `llvm-mc` are found (Linux and Windows), the `x86_64_difftest` test encodes generated operands for every form of the x86_64 table and compares the bytes with `llvm-mc --show-encoding`. SPAsm must also reject the operand combinations llvm-mc rejects.

Equivalent encodings that differ on purpose are listed in `tests/x86_64/difftest/known_differences.txt`.

## LICENSE

BSD-3-Clause, see [LICENSE](LICENSE).

## Disclaimer

As it is under development, expect things to break and not work as expected. Currently only supports Windows x64 and Linux x64.
