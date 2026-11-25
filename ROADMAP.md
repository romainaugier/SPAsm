# SPAsm Roadmap

## Common
- :clock9: asm lexer/parser
- :x: jit runtime utilities (manage runtime data...)

## x86_64
- :white_check_mark: x86_64 instruction encoding (legacy, REX, VEX: up to AVX2/FMA/BMI), checked against llvm-mc
- :x: x86_64 EVEX encoding (AVX-512)
- :clock9: x86_64 jit code generation
- :x: Windows x86_64 EXE generation
- :x: Windows x86_64 DLL generation
- :x: Linux x86_64 ELF executable generation
- :x: Linux x86_64 ELF shared library generation

## aarch64
- :x: aarch64 jit code generation
- :x: Windows aarch64 EXE generation
- :x: Windows aarch64 DLL generation
- :x: Linux aarch64 ELF executable generation
- :x: Linux aarch64 ELF shared library generation