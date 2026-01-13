/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#include <stdint.h>
#if !defined(__SPASM_COFF)
#define __SPASM_COFF

#include "spasm/data.h"
#include "spasm/bytecode.h"

/*
 * See: https://learn.microsoft.com/en-us/windows/win32/debug/pe-format#coff-file-header-object-and-image
 */

#pragma pack(push, 1)
 typedef struct {
    uint16_t machine;
    uint16_t number_of_sections;
    uint32_t time_date_stamp;
    uint32_t pointer_to_symbol_table;
    uint32_t number_of_symbols;
    uint16_t size_of_optional_header;
    uint16_t characteristics;
} SpasmCoffHeader;
#pragma pack(pop)

typedef enum : uint16_t {
    // The content of this field is assumed to be applicable to any machine type
    SpasmCoffMachineType_UNKNOWN = 0x0,
    // Alpha AXP, 32-bit address space
    SpasmCoffMachineType_ALPHA = 0x184,
    // Alpha 64, 64-bit address space
    SpasmCoffMachineType_ALPHA64 = 0x284,
    // Matsushita AM33
    SpasmCoffMachineType_AM33 = 0x1d3,
    // x64
    SpasmCoffMachineType_AMD64 = 0x8664,
    // ARM little endian
    SpasmCoffMachineType_ARM = 0x1c0,
    // ARM64 little endian
    SpasmCoffMachineType_ARM64 = 0xaa64,
    // ABI that enables interoperability between native ARM64 and emulated x64 code.
    SpasmCoffMachineType_ARM64EC = 0xA641,
    // Binary format that allows both native ARM64 and ARM64EC code to coexist in the same file.
    SpasmCoffMachineType_ARM64X = 0xA64E,
    // ARM Thumb-2 little endian
    SpasmCoffMachineType_ARMNT = 0x1c4,
    // AXP 64 (Same as Alpha 64)
    SpasmCoffMachineType_AXP64 = 0x284,
    // EFI byte code
    SpasmCoffMachineType_EBC = 0xebc,
    // Intel 386 or later processors and compatible processors
    SpasmCoffMachineType_I386 = 0x14c,
    // Intel Itanium processor family
    SpasmCoffMachineType_IA64 = 0x200,
    // LoongArch 32-bit processor family
    SpasmCoffMachineType_LOONGARCH32 = 0x6232,
    // LoongArch 64-bit processor family
    SpasmCoffMachineType_LOONGARCH64 = 0x6264,
    // Mitsubishi M32R little endian
    SpasmCoffMachineType_M32R = 0x9041,
    // MIPS16
    SpasmCoffMachineType_MIPS16 = 0x266,
    // MIPS with FPU
    SpasmCoffMachineType_MIPSFPU = 0x366,
    // MIPS16 with FPU
    SpasmCoffMachineType_MIPSFPU16 = 0x466,
    // Power PC little endian
    SpasmCoffMachineType_POWERPC = 0x1f0,
    // Power PC with floating point support
    SpasmCoffMachineType_POWERPCFP = 0x1f1,
    // MIPS I compatible 32-bit big endian
    SpasmCoffMachineType_R3000BE = 0x160,
    // MIPS I compatible 32-bit little endian
    SpasmCoffMachineType_R3000 = 0x162,
    // MIPS III compatible 64-bit little endian
    SpasmCoffMachineType_R4000 = 0x166,
    // MIPS IV compatible 64-bit little endian
    SpasmCoffMachineType_R10000 = 0x168,
    // RISC-V 32-bit address space
    SpasmCoffMachineType_RISCV32 = 0x5032,
    // RISC-V 64-bit address space
    SpasmCoffMachineType_RISCV64 = 0x5064,
    // RISC-V 128-bit address space
    SpasmCoffMachineType_RISCV128 = 0x5128,
    // Hitachi SH3
    SpasmCoffMachineType_SH3 = 0x1a2,
    // Hitachi SH3 DSP
    SpasmCoffMachineType_SH3DSP = 0x1a3,
    // Hitachi SH4
    SpasmCoffMachineType_SH4 = 0x1a6,
    // Hitachi SH5
    SpasmCoffMachineType_SH5 = 0x1a8,
    // Thumb
    SpasmCoffMachineType_THUMB = 0x1c2,
    // MIPS little-endian WCE v2
    SpasmCoffMachineType_WCEMIPSV2 = 0x169,
} SpasmCoffMachineType;

typedef enum : uint16_t {
    // Image only, Windows CE, and Microsoft Windows NT and later. This indicates that the file does not contain base relocations and must therefore be loaded at its preferred base address. If the base address is not available, the loader reports an error. The default behavior of the linker is to strip base relocations from executable (EXE) files.
    SpasmCoffCharacteristics_RELOCS_STRIPPED = 0x0001,
    // Image only. This indicates that the image file is valid and can be run. If this flag is not set, it indicates a linker error.
    SpasmCoffCharacteristics_EXECUTABLE_IMAGE = 0x0002,
    // COFF line numbers have been removed. This flag is deprecated and should be zero.
    SpasmCoffCharacteristics_LINE_NUMS_STRIPPED = 0x0004,
    // COFF symbol table entries for local symbols have been removed. This flag is deprecated and should be zero.
    SpasmCoffCharacteristics_LOCAL_SYMS_STRIPPED = 0x0008,
    // Obsolete. Aggressively trim working set. This flag is deprecated for Windows 2000 and later and must be zero.
    SpasmCoffCharacteristics_AGGRESSIVE_WS_TRIM = 0x0010,
    // Application can handle > 2-GB addresses.
    SpasmCoffCharacteristics_LARGE_ADDRESS_AWARE = 0x0020,
	// Little endian: the least significant bit (LSB) precedes the most significant bit (MSB) in memory. This flag is deprecated and should be zero.
    SpasmCoffCharacteristics_BYTES_REVERSED_LO = 0x0080,
    // Machine is based on a 32-bit-word architecture.
    SpasmCoffCharacteristics_32BIT_MACHINE = 0x0100,
    // Debugging information is removed from the image file.
    SpasmCoffCharacteristics_DEBUG_STRIPPED = 0x0200,
    // If the image is on removable media, fully load it and copy it to the swap file.
    SpasmCoffCharacteristics_REMOVABLE_RUN_FROM_SWAP = 0x0400,
    // If the image is on network media, fully load it and copy it to the swap file.
    SpasmCoffCharacteristics_NET_RUN_FROM_SWAP = 0x0800,
    // The image file is a system file, not a user program.
    SpasmCoffCharacteristics_SYSTEM = 0x1000,
    // The image file is a dynamic-link library (DLL). Such files are considered executable files for almost all purposes, although they cannot be directly run.
    SpasmCoffCharacteristics_DLL = 0x2000,
    // The file should be run only on a uniprocessor machine.
    SpasmCoffCharacteristics_UP_SYSTEM_ONLY = 0x4000,
    // Big endian: the MSB precedes the LSB in memory. This flag is deprecated and should be zero.
    SpasmCoffCharacteristics_BYTES_REVERSED_HI = 0x8000,
} SpasmCoffCharacteristics;

#pragma pack(push, 1)
typedef struct {
    char name[8];
    uint32_t virtual_size;
    uint32_t virtual_address;
    uint32_t size_of_raw_data;
    uint32_t pointer_to_raw_data;
    uint32_t pointer_to_relocations;
    uint32_t pointer_to_line_numbers;
    uint16_t number_of_relocations;
    uint16_t number_of_line_numbers;
    uint32_t characteristics;
} SpasmCoffSectionHeader;
#pragma pack(pop)

/*
 * See: https://learn.microsoft.com/en-us/windows/win32/debug/pe-format#section-table-section-headers
 */

typedef enum : uint32_t {
    // The section should not be padded to the next boundary. This flag is obsolete and is replaced by SpasmCoffSectionHeaderFlag_ALIGN_1BYTES. This is valid only for object files.PE_NO_PAD
	SpasmCoffSectionHeaderFlag_TY = 0x00000008,
    // The section contains executable code.
    SpasmCoffSectionHeaderFlag_CNT_CODE = 0x00000020,
    // The section contains initialized data.
    SpasmCoffSectionHeaderFlag_CNT_INITIALIZED_DATA = 0x00000040,
    // The section contains uninitialized data.
    SpasmCoffSectionHeaderFlag_CNT_UNINITIALIZED_DATA = 0x00000080,
    // Reserved for future use.
    SpasmCoffSectionHeaderFlag_LNK_OTHER = 0x00000100,
    // The section contains comments or other information. The .drectve section has this type. This is valid for object files only.
    SpasmCoffSectionHeaderFlag_LNK_INFO = 0x00000200,
    // The section will not become part of the image. This is valid only for object files.
    SpasmCoffSectionHeaderFlag_LNK_REMOVE = 0x00000800,
    // The section contains COMDAT data. For more information, see COMDAT Sections (Object Only). This is valid only for object files.
    SpasmCoffSectionHeaderFlag_LNK_COMDAT = 0x00001000,
    // The section contains data referenced through the global pointer (GP).
    SpasmCoffSectionHeaderFlag_GPREL = 0x00008000,
    // Reserved for future use.
	SpasmCoffSectionHeaderFlag_MEM_PURGEABLE = 0x00020000,
    // Reserved for future use.
    SpasmCoffSectionHeaderFlag_MEM_16BIT = 0x00020000,
    // Reserved for future use.
    SpasmCoffSectionHeaderFlag_MEM_LOCKED = 0x00040000,
    // Reserved for future use.
    SpasmCoffSectionHeaderFlag_MEM_PRELOAD = 0x00080000,
    // Align data on a 1-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_1BYTES = 0x00100000,
    // Align data on a 2-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_2BYTES = 0x00200000,
    // Align data on a 4-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_4BYTES = 0x00300000,
    // Align data on an 8-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_8BYTES = 0x00400000,
    // Align data on a 16-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_16BYTES = 0x00500000,
    // Align data on a 32-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_32BYTES = 0x00600000,
    // Align data on a 64-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_64BYTES = 0x00700000,
    // Align data on a 128-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_128BYTES = 0x00800000,
    // Align data on a 256-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_256BYTES = 0x00900000,
    // Align data on a 512-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_512BYTES = 0x00A00000,
    // Align data on a 1024-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_1024BYTES = 0x00B00000,
    // Align data on a 2048-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_2048BYTES = 0x00C00000,
    // Align data on a 4096-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_4096BYTES = 0x00D00000,
    // Align data on an 8192-byte boundary. Valid only for object files.
    SpasmCoffSectionHeaderFlag_ALIGN_8192BYTES = 0x00E00000,
    // The section contains extended relocations.
    SpasmCoffSectionHeaderFlag_LNK_NRELOC_OVFL = 0x01000000,
    // The section can be discarded as needed.
    SpasmCoffSectionHeaderFlag_MEM_DISCARDABLE = 0x02000000,
    // The section cannot be cached.
    SpasmCoffSectionHeaderFlag_MEM_NOT_CACHED = 0x04000000,
    // The section is not pageable.
    SpasmCoffSectionHeaderFlag_MEM_NOT_PAGED = 0x08000000,
    // The section can be shared in memory.
    SpasmCoffSectionHeaderFlag_MEM_SHARED = 0x10000000,
    // The section can be executed as code.
    SpasmCoffSectionHeaderFlag_MEM_EXECUTE = 0x20000000,
    // The section can be read.
    SpasmCoffSectionHeaderFlag_MEM_READ = 0x40000000,
    // The section can be written to.
    SpasmCoffSectionHeaderFlag_MEM_WRITE = 0x80000000,
} SpasmCoffSectionHeaderFlag;

/* Symbols, relocations and line numbers are 2 bytes packed */
#pragma pack(push, 2)
typedef struct {
    uint32_t virtual_address;
    uint32_t symbol_table_index;
    uint16_t type;
} SpasmCoffRelocation;
#pragma pack(pop)

typedef enum : uint16_t {
    // x64 Processors

    // The relocation is ignored.
    SpasmCoffRelocationType_AMD64_ABSOLUTE = 0x0000,
    // The 64-bit VA of the relocation target.
	SpasmCoffRelocationType_AMD64_ADDR64 = 0x0001,
	// The 32-bit VA of the relocation target.
	SpasmCoffRelocationType_AMD64_ADDR32 = 0x0002,
	// The 32-bit address without an image base (RVA).
	SpasmCoffRelocationType_AMD64_ADDR32NB = 0x0003,
	// The 32-bit relative address from the byte following the relocation.
    SpasmCoffRelocationType_AMD64_REL32 = 0x0004,
    // The 32-bit address relative to byte distance 1 from the relocation.
	SpasmCoffRelocationType_AMD64_REL32_1 = 0x0005,
	// The 32-bit address relative to byte distance 2 from the relocation.
	SpasmCoffRelocationType_AMD64_REL32_2 = 0x0006,
	// The 32-bit address relative to byte distance 3 from the relocation.
	SpasmCoffRelocationType_AMD64_REL32_3 = 0x0007,
	// The 32-bit address relative to byte distance 4 from the relocation.
	SpasmCoffRelocationType_AMD64_REL32_4 = 0x0008,
	// The 32-bit address relative to byte distance 5 from the relocation.
	SpasmCoffRelocationType_AMD64_REL32_5 = 0x0009,
	// The 16-bit section index of the section that contains the target. This is used to support debugging information.
	SpasmCoffRelocationType_AMD64_SECTION = 0x000A,
	// The 32-bit offset of the target from the beginning of its section. This is used to support debugging information and static thread local storage.
	SpasmCoffRelocationType_AMD64_SECREL = 0x000B,
	// A 7-bit unsigned offset from the base of the section that contains the target.
	SpasmCoffRelocationType_AMD64_SECREL7 = 0x000C,
	// CLR tokens.
	SpasmCoffRelocationType_AMD64_TOKEN = 0x000D,
	// A 32-bit signed span-dependent value emitted into the object.
	SpasmCoffRelocationType_AMD64_SREL32 = 0x000E,
	// A pair that must immediately follow every span-dependent value.
	SpasmCoffRelocationType_AMD64_PAIR = 0x000F,
	// A 32-bit signed span-dependent value that is applied at link time.
	SpasmCoffRelocationType_AMD64_SSPAN32 = 0x0010,

	// Intel 386 Processors

	// The relocation is ignored.
	SpasmCoffRelocationType_I386_ABSOLUTE = 0x0000,
	// Not supported.
	SpasmCoffRelocationType_I386_DIR16 = 0x0001,
	// Not supported.
	SpasmCoffRelocationType_I386_REL16 = 0x0002,
	// The target's 32-bit VA.
	SpasmCoffRelocationType_I386_DIR32 = 0x0006,
	// The target's 32-bit RVA.
	SpasmCoffRelocationType_I386_DIR32NB = 0x0007,
	// Not supported.
	SpasmCoffRelocationType_I386_SEG12 = 0x0009,
	// The 16-bit section index of the section that contains the target. This is used to support debugging information.
	SpasmCoffRelocationType_I386_SECTION = 0x000A,
	// The 32-bit offset of the target from the beginning of its section. This is used to support debugging information and static thread local storage.
	SpasmCoffRelocationType_I386_SECREL = 0x000B,
	// The CLR token.
	SpasmCoffRelocationType_I386_TOKEN = 0x000C,
	// A 7-bit offset from the base of the section that contains the target.
	SpasmCoffRelocationType_I386_SECREL7 = 0x000D,
	// The 32-bit relative displacement to the target. This supports the x86 relative branch and call instructions.
	SpasmCoffRelocationType_I386_REL32 = 0x0014,

	// ARM64 Processors

	// 	The relocation is ignored.
	SpasmCoffRelocationType_ARM64_ABSOLUTE = 0x0000,
	// The 32-bit VA of the target.
	SpasmCoffRelocationType_ARM64_ADDR32 = 0x0001,
	// The 32-bit RVA of the target.
	SpasmCoffRelocationType_ARM64_ADDR32NB = 0x0002,
	// The 26-bit relative displacement to the target, for B and BL instructions.
	SpasmCoffRelocationType_ARM64_BRANCH26 = 0x0003,
	// 	The page base of the target, for ADRP instruction.
	SpasmCoffRelocationType_ARM64_PAGEBASE_REL21 = 0x0004,
	// The 12-bit relative displacement to the target, for instruction ADR
	SpasmCoffRelocationType_ARM64_REL21 = 0x0005,
	// The 12-bit page offset of the target, for instructions ADD/ADDS (immediate) with zero shift.
	SpasmCoffRelocationType_ARM64_PAGEOFFSET_12A = 0x0006,
	// The 12-bit page offset of the target, for instruction LDR (indexed, unsigned immediate).
	SpasmCoffRelocationType_ARM64_PAGEOFFSET_12L = 0x0007,
	// The 32-bit offset of the target from the beginning of its section. This is used to support debugging information and static thread local storage.
	SpasmCoffRelocationType_ARM64_SECREL = 0x0008,
	// Bit 0:11 of section offset of the target, for instructions ADD/ADDS (immediate) with zero shift.
	SpasmCoffRelocationType_ARM64_SECREL_LOW12A = 0x0009,
	// Bit 12:23 of section offset of the target, for instructions ADD/ADDS (immediate) with zero shift.
	SpasmCoffRelocationType_ARM64_SECREL_HIGH12A = 0x000A,
	// Bit 0:11 of section offset of the target, for instruction LDR (indexed, unsigned immediate).
	SpasmCoffRelocationType_ARM64_SECREL_LOW12L = 0x000B,
	// CLR token.
	SpasmCoffRelocationType_ARM64_TOKEN = 0x000C,
	// The 16-bit section index of the section that contains the target. This is used to support debugging information.
	SpasmCoffRelocationType_ARM64_SECTION = 0x000D,
	// The 64-bit VA of the relocation target.
	SpasmCoffRelocationType_ARM64_ADDR64 = 0x000E,
	// The 19-bit offset to the relocation target, for conditional B instruction.
	SpasmCoffRelocationType_ARM64_BRANCH19 = 0x000F,
	// The 14-bit offset to the relocation target, for instructions TBZ and TBNZ.
	SpasmCoffRelocationType_ARM64_BRANCH14 = 0x0010,
	// The 32-bit relative address from the byte following the relocation.
	SpasmCoffRelocationType_ARM64_REL32 = 0x0011,

	// ARM Processors

	// The relocation is ignored.
	SpasmCoffRelocationType_ARM_ABSOLUTE = 0x0000,
	// The 32-bit VA of the target.
	SpasmCoffRelocationType_ARM_ADDR32 = 0x0001,
	// The 32-bit RVA of the target.
	SpasmCoffRelocationType_ARM_ADDR32NB = 0x0002,
	// The 24-bit relative displacement to the target.
	SpasmCoffRelocationType_ARM_BRANCH24 = 0x0003,
	// The reference to a subroutine call. The reference consists of two 16-bit instructions with 11-bit offsets.
	SpasmCoffRelocationType_ARM_BRANCH11 = 0x0004,
	// The 32-bit relative address from the byte following the relocation.
	SpasmCoffRelocationType_ARM_REL32 = 0x000A,
	// The 16-bit section index of the section that contains the target. This is used to support debugging information.
	SpasmCoffRelocationType_ARM_SECTION = 0x000E,
	// The 32-bit offset of the target from the beginning of its section. This is used to support debugging information and static thread local storage.
	SpasmCoffRelocationType_ARM_SECREL = 0x000F,
	// The 32-bit VA of the target. This relocation is applied using a MOVW instruction for the low 16 bits followed by a MOVT for the high 16 bits.
	SpasmCoffRelocationType_ARM_MOV32 = 0x0010,
	// The 32-bit VA of the target. This relocation is applied using a MOVW instruction for the low 16 bits followed by a MOVT for the high 16 bits.
	SpasmCoffRelocationType_THUMB_MOV32 = 0x0011,
	// The instruction is fixed up with the 21-bit relative displacement to the 2-byte aligned target. The least significant bit of the displacement is always zero and is not stored. This relocation corresponds to a Thumb-2 32-bit conditional B instruction.
	SpasmCoffRelocationType_THUMB_BRANCH20 = 0x0012,
	// The instruction is fixed up with the 25-bit relative displacement to the 2-byte aligned target. The least significant bit of the displacement is zero and is not stored.This relocation corresponds to a Thumb-2 B instruction.
	SpasmCoffRelocationType_THUMB_BRANCH24 = 0x0014,
	// The instruction is fixed up with the 25-bit relative displacement to the 4-byte aligned target. The low 2 bits of the displacement are zero and are not stored.
	// This relocation corresponds to a Thumb-2 BLX instruction.
	SpasmCoffRelocationType_THUMB_BLX23 = 0x0015,
	// The relocation is valid only when it immediately follows a ARM_REFHI or THUMB_REFHI. Its SymbolTableIndex contains a displacement and not an index into the symbol table.
    SpasmCoffRelocationType_ARM_PAIR = 0x0016,
} SpasmCoffRelocationType;

/* Symbols, relocations and line numbers are 2 bytes packed */
#pragma pack(push, 2)
typedef struct {
    union {
        char short_name[8];
        uint32_t long_name[2];
    };
    uint32_t value;
    int16_t section_number;
    uint16_t type;
    uint8_t storage_class;
    uint8_t number_of_aux_symbols;
} SpasmCoffSymbol;
#pragma pack(pop)

typedef enum : uint8_t {
    // A special symbol that represents the end of function, for debugging purposes.
    SpasmCoffStorageClass_END_OF_FUNCTION = 0xff,
    // No assigned storage class.
    SpasmCoffStorageClass_NUL = 0,
    // The automatic (stack) variable. The Value field specifies the stack frame offset.
    SpasmCoffStorageClass_AUTOMATIC = 1,
    // A value that Microsoft tools use for external symbols. The Value field indicates the size if the section number is IMAGE_SYM_UNDEFINED (0). If the section number is not zero, then the Value field specifies the offset within the section.
    SpasmCoffStorageClass_EXTERNAL = 2,
    // The offset of the symbol within the section. If the Value field is zero, then the symbol represents a section name.
    SpasmCoffStorageClass_STATIC = 3,
    // A register variable. The Value field specifies the register number.
    SpasmCoffStorageClass_REGISTER = 4,
    // A symbol that is defined externally.
    SpasmCoffStorageClass_EXTERNAL_DEF = 5,
    // A code label that is defined within the module. The Value field specifies the offset of the symbol within the section.
    SpasmCoffStorageClass_LABEL = 6,
    // A reference to a code label that is not defined.
    SpasmCoffStorageClass_UNDEFINED_LABEL = 7,
    // The structure member. The Value field specifies the n th member.
    SpasmCoffStorageClass_MEMBER_OF_STRUCT = 8,
    // A formal argument (parameter) of a function. The Value field specifies the n th argument.
    SpasmCoffStorageClass_ARGUMENT = 9,
    // The structure tag-name entry.
    SpasmCoffStorageClass_STRUCT_TAG = 10,
    // A union member. The Value field specifies the n th member.
    SpasmCoffStorageClass_MEMBER_OF_UNION = 11,
    // The Union tag-name entry.
    SpasmCoffStorageClass_UNION_TAG = 12,
    // A Typedef entry.
    SpasmCoffStorageClass_TYPE_DEFINITION = 13,
    // A static data declaration.
    SpasmCoffStorageClass_UNDEFINED_STATIC = 14,
    // An enumerated type tagname entry.
    SpasmCoffStorageClass_ENUM_TAG = 15,
    // A member of an enumeration. The Value field specifies the n th member.
    SpasmCoffStorageClass_MEMBER_OF_ENUM = 16,
    // A register parameter.
    SpasmCoffStorageClass_REGISTER_PARAM = 17,
    // A bit-field reference. The Value field specifies the n th bit in the bit field.
    SpasmCoffStorageClass_BIT_FIELD = 18,
    // A .bb (beginning of block) or .eb (end of block) record. The Value field is the relocatable address of the code location.
    SpasmCoffStorageClass_BLOCK = 100,
    // A value that Microsoft tools use for symbol records that define the extent of a function: begin function (.bf ), end function ( .ef ), and lines in function ( .lf ). For .lf records, the Value field gives the number of source lines in the function. For .ef records, the Value field gives the size of the function code.
    SpasmCoffStorageClass_FUNCTION = 101,
    // An end-of-structure entry.
    SpasmCoffStorageClass_END_OF_STRUCT = 102,
    // A value that Microsoft tools, as well as traditional COFF format, use for the source-file symbol record. The symbol is followed by auxiliary records that name the file.
    SpasmCoffStorageClass_FILE = 103,
    // A definition of a section (Microsoft tools use STATIC storage class instead).
    SpasmCoffStorageClass_SECTION = 104,
    // A weak external. For more information, see Auxiliary Format 3: Weak Externals.
    SpasmCoffStorageClass_WEAK_EXTERNAL = 105,
    // A CLR token symbol. The name is an ASCII string that consists of the hexadecimal value of the token. For more information, see CLR Token Definition (Object Only).
    SpasmCoffStorageClass_CLR_TOKEN = 107,
} SpasmCoffStorageClass;

typedef enum : uint16_t {
    // No type information or unknown base type. Microsoft tools use this setting
    SpasmCoffSymbolType_NULL = 0,
    // No valid type; used with void pointers and functions
    SpasmCoffSymbolType_VOID = 1,
    // A character (signed byte)
    SpasmCoffSymbolType_CHAR = 2,
    // A 2-byte signed integer
    SpasmCoffSymbolType_SHORT = 3,
    // A natural integer type (normally 4 bytes in Windows)
    SpasmCoffSymbolType_INT = 4,
    // A 4-byte signed integer
    SpasmCoffSymbolType_LONG = 5,
    // A 4-byte floating-point number
    SpasmCoffSymbolType_FLOAT = 6,
    // An 8-byte floating-point number
    SpasmCoffSymbolType_DOUBLE = 7,
    // A structure
    SpasmCoffSymbolType_STRUCT = 8,
    // A union
    SpasmCoffSymbolType_UNION = 9,
    // An enumerated type
    SpasmCoffSymbolType_ENUM = 10,
    // A member of enumeration (a specific value)
    SpasmCoffSymbolType_MOE = 11,
    // A byte; unsigned 1-byte integer
    SpasmCoffSymbolType_BYTE = 12,
    // A word; unsigned 2-byte integer
    SpasmCoffSymbolType_WORD = 13,
    // An unsigned integer of natural size (normally, 4 bytes)
    SpasmCoffSymbolType_UINT = 14,
    // An unsigned 4-byte integer
    SpasmCoffSymbolType_DWORD = 15,
} SpasmCoffSymbolType;

uint8_t* spasm_generate_coff(SpasmByteCode* bytecode,
                             SpasmData* data,
                             SpasmCoffMachineType machine,
                             size_t* out_size);

#endif /* !defined(__SPASM_COFF) */
