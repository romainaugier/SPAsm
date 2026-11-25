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

`spasm` assembles a file written in the [assembly syntax](#assembly-syntax) into a flat image: the code, then the `.rodata`, `.data` and `.bss` sections (see [Flat images](#flat-images)).

```bash
spasm hello.s                         # writes hello.bin, image based at address 0
spasm hello.s -o hello.bin -b 0x400000
spasm hello.s -f hex                  # listing on stdout
```

| Option | Description |
| --- | --- |
| `input` | Assembly file |
| `-o`, `--output` | Output file, defaults to the input with a `.bin` extension (stdout for `hex`) |
| `-f`, `--format` | `bin`: the raw image (default). `hex`: a listing with the address, the bytes and the source line of every instruction, then the data blocks |
| `-b`, `--base` | Address of the first byte of the image, used by the absolute references to symbols (default `0`, `0x` prefix for hexadecimal) |

```
$ spasm hello.s -f hex -b 0x400000       # hello.s from the Assembly syntax section
00400000                                                _start:
00400000  b8 01 00 00 00                                mov eax, 1                          ; write(1, msg, MSG_LEN)
00400005  bf 01 00 00 00                                mov edi, 1
0040000a  48 8d 35 1f 00 00 00                          lea rsi, [rip + msg]
00400011  ba 0e 00 00 00                                mov edx, MSG_LEN
00400016  0f 05                                         syscall
00400018  b8 3c 00 00 00                                mov eax, 60                         ; exit(0)
0040001d  31 ff                                         xor edi, edi
0040001f  0f 05                                         syscall
00400030                                                msg:
00400030  48 65 6c 6c 6f 2c 20 57
00400038  6f 72 6c 64 21 0a
```

The exit code is 0 on success, 1 when the file cannot be assembled and 2 for invalid arguments.

## Assembly syntax

The parser reads Intel syntax, the `.intel_syntax noprefix` subset of llvm-mc and gas. Every line is `[label:]... [directive | instruction] [; comment]` (`#` also starts a comment). Mnemonics, registers and keywords are case-insensitive, labels and constants are not.

```asm
.intel_syntax noprefix
.equ MSG_LEN, 14

.text
_start:
    mov eax, 1                          ; write(1, msg, MSG_LEN)
    mov edi, 1
    lea rsi, [rip + msg]
    mov edx, MSG_LEN
    syscall
    mov eax, 60                         ; exit(0)
    xor edi, edi
    syscall

.rodata
msg: .ascii "Hello, World!\n"
```

| Operand | Syntax |
| --- | --- |
| Register | `rax`, `ah`, `xmm17`, `k1` |
| Immediate | An expression of numbers (`42`, `0x2A`, `0b101010`, `0o52`, `'*'`), constants and `+ - * / % ~ ( )` |
| Memory | `[base + index * scale + displacement]` in any order, optionally after a size: `byte`, `word`, `dword`, `qword`, `xmmword` (`oword`), `ymmword` or `zmmword`, with or without `ptr` |
| Symbol | A label or data block name: the address as an immediate (`mov rax, table + 8`), the target of a branch (`jnz loop`), or the displacement of a memory operand (`[rip + msg]`, `[table + rcx * 8]`) |
| AVX-512 | `zmm0 {k1} {z}`, `dword ptr [rax]{1to16}`, and the rounding operand `{rn-sae}`, `{rd-sae}`, `{ru-sae}`, `{rz-sae}` or `{sae}` |

| Directive | Description |
| --- | --- |
| `.text`, `.rodata` (`.rdata`), `.data`, `.bss`, `.section <name>` | Switches the section (section flags are ignored) |
| `.byte`, `.word` (`.short`, `.2byte`), `.dword` (`.long`, `.int`, `.4byte`), `.qword` (`.quad`, `.8byte`) | Integers, `.byte` also takes strings |
| `.ascii`, `.asciz` (`.string`) | Strings, with the C escapes (`\n`, `\t`, `\0`, `\x41`...), `.asciz` adds a null byte |
| `.zero`, `.skip`, `.space` | `count[, fill]` bytes, the only data allowed in `.bss` |
| `.align`, `.balign`, `.p2align` | Aligns on `n` bytes (`2^n` for `.p2align`) |
| `.equ`, `.set` | `name, expression` defines a constant, `.set` can redefine it |
| `.global`, `.globl`, `.extern` | Accepted and ignored: a flat image has no symbol table |
| `.intel_syntax [noprefix]` | Accepted, `.att_syntax` is an error |

In the data sections a label starts a data block (data without a label goes to an anonymous block), and `.align` pads the current block or aligns the next one when it comes before its label. Errors are reported with their position and the parser goes on with the next line, to report them all:

```
hello.s:12:21: error: the scale must be 1, 2, 4 or 8
      mov rax, [rbx + rcx*3]
                      ^
```

Not supported yet: alignment in `.text`, symbols in data (jump tables), segment overrides, the `lock`/`rep` prefixes and the string instructions (they are not in the instruction table).

Directives and keywords are looked up in a gperf table (`src/parser_keywords.gperf`), directives dispatch to their handler through a function table indexed by the keyword value.

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
| AVX-512 rounding | `SpasmOpRounding(SpasmRounding_Nearest/Down/Up/Zero)`, `SpasmOpSae()` | `{rn-sae}`...`{rz-sae}`, `{sae}`, at any position (`vcmpps k1, zmm1, zmm2, {sae}, 0`) |

## Flat images

`spasm_assemble_flat` (`spasm/flat.h`) assembles instructions and data into one image, without object file or relocations: the code, then the rodata, data and bss (zero-filled) blocks in definition order, each section aligned on 16 bytes. Labels are pseudo-instructions (`spasm_instructions_push_label`), data blocks are added with `spasm_data_add`, and both are referenced by name:

- `SpasmOpSymbol("loop")` as a branch target: branches start short (rel8) and are promoted to rel32 when the target is out of range, until the sizes do not change anymore.
- `SpasmOpSymbol("table")` or `SpasmOpSymbolOffset("table", 8)` elsewhere: the absolute address, an imm32 while the base address is below 0x70000000, an imm64 above.
- A memory operand with `symbol_name` set: rip-relative with `rip`/`eip` as base, an absolute 32-bit displacement otherwise (`[table + rcx * 8]`).

`spasm_parse` (`spasm/parser.h`) fills the instructions and the data from source text, see [Assembly syntax](#assembly-syntax).

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

# Only rerun gperf on every table (x86_64 registers and mnemonics, parser keywords), or on one
python scripts/gperf.py
python scripts/gperf.py x86_64/x86_64_registers.gperf
```

## Tests

```bash
./build.sh --tests --debug
```

Tests assert in debug builds only. When python3 and `llvm-mc` are found (Linux and Windows), the `x86_64_difftest` test encodes generated operands for every form of the x86_64 table and compares the bytes with `llvm-mc --show-encoding`. SPAsm must also reject the operand combinations llvm-mc rejects.

Equivalent encodings that differ on purpose are listed in `tests/x86_64/difftest/known_differences.txt`.

<<<<<<< ours
## LICENSE

BSD-3-Clause, see [LICENSE](LICENSE).
=======
With python3, the `x86_64_parser_roundtrip` test assembles the same instructions from text with the `spasm`
executable (`-f hex`) and checks the bytes match the ones of the encoder.
>>>>>>> theirs

## Disclaimer

As it is under development, expect things to break and not work as expected. Currently only supports Windows x64 and Linux x64.
