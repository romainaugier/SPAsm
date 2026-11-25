/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/x86_64.h"
#include "spasm/bytecode.h"
#include "spasm/common.h"
#include "spasm/instruction.h"
#include "spasm/operand.h"
#include "spasm/register.h"
#include "spasm/error.h"

#include <string.h>

#if defined(SPASM_MSVC)
#include <io.h>
#elif defined(SPASM_GCC)
#include <unistd.h>
#endif /* defined(SPASM_MSVC) */

#if defined(SPASM_ENABLE_X86_64)

/* Debug funcs */

const char* spasm_x86_64_get_register_as_string(SpasmRegister reg)
{
    SPASM_ASSERT(reg >= SpasmRegister_x86_64_NONE && reg < SpasmRegister_x86_64_COUNT,
                 "reg is not an x86_64 register");

    switch(reg)
    {
        case SpasmRegister_x86_64_NONE: return "none";
        case SpasmRegister_x86_64_RAX: return "rax";
        case SpasmRegister_x86_64_RBX: return "rbx";
        case SpasmRegister_x86_64_RCX: return "rcx";
        case SpasmRegister_x86_64_RDX: return "rdx";
        case SpasmRegister_x86_64_RSI: return "rsi";
        case SpasmRegister_x86_64_RDI: return "rdi";
        case SpasmRegister_x86_64_RSP: return "rsp";
        case SpasmRegister_x86_64_RBP: return "rbp";
        case SpasmRegister_x86_64_R8: return "r8";
        case SpasmRegister_x86_64_R9: return "r9";
        case SpasmRegister_x86_64_R10: return "r10";
        case SpasmRegister_x86_64_R11: return "r11";
        case SpasmRegister_x86_64_R12: return "r12";
        case SpasmRegister_x86_64_R13: return "r13";
        case SpasmRegister_x86_64_R14: return "r14";
        case SpasmRegister_x86_64_R15: return "r15";
        case SpasmRegister_x86_64_EAX: return "eax";
        case SpasmRegister_x86_64_EBX: return "ebx";
        case SpasmRegister_x86_64_ECX: return "ecx";
        case SpasmRegister_x86_64_EDX: return "edx";
        case SpasmRegister_x86_64_ESI: return "esi";
        case SpasmRegister_x86_64_EDI: return "edi";
        case SpasmRegister_x86_64_ESP: return "esp";
        case SpasmRegister_x86_64_EBP: return "ebp";
        case SpasmRegister_x86_64_R8D: return "r8d";
        case SpasmRegister_x86_64_R9D: return "r9d";
        case SpasmRegister_x86_64_R10D: return "r10d";
        case SpasmRegister_x86_64_R11D: return "r11d";
        case SpasmRegister_x86_64_R12D: return "r12d";
        case SpasmRegister_x86_64_R13D: return "r13d";
        case SpasmRegister_x86_64_R14D: return "r14d";
        case SpasmRegister_x86_64_R15D: return "r15d";
        case SpasmRegister_x86_64_AX: return "ax";
        case SpasmRegister_x86_64_BX: return "bx";
        case SpasmRegister_x86_64_CX: return "cx";
        case SpasmRegister_x86_64_DX: return "dx";
        case SpasmRegister_x86_64_SI: return "si";
        case SpasmRegister_x86_64_DI: return "di";
        case SpasmRegister_x86_64_SP: return "sp";
        case SpasmRegister_x86_64_BP: return "bp";
        case SpasmRegister_x86_64_R8W: return "r8w";
        case SpasmRegister_x86_64_R9W: return "r9w";
        case SpasmRegister_x86_64_R10W: return "r10w";
        case SpasmRegister_x86_64_R11W: return "r11w";
        case SpasmRegister_x86_64_R12W: return "r12w";
        case SpasmRegister_x86_64_R13W: return "r13w";
        case SpasmRegister_x86_64_R14W: return "r14w";
        case SpasmRegister_x86_64_R15W: return "r15w";
        case SpasmRegister_x86_64_AL: return "al";
        case SpasmRegister_x86_64_BL: return "bl";
        case SpasmRegister_x86_64_CL: return "cl";
        case SpasmRegister_x86_64_DL: return "dl";
        case SpasmRegister_x86_64_SIL: return "sil";
        case SpasmRegister_x86_64_DIL: return "dil";
        case SpasmRegister_x86_64_SPL: return "spl";
        case SpasmRegister_x86_64_BPL: return "bpl";
        case SpasmRegister_x86_64_R8B: return "r8b";
        case SpasmRegister_x86_64_R9B: return "r9b";
        case SpasmRegister_x86_64_R10B: return "r10b";
        case SpasmRegister_x86_64_R11B: return "r11b";
        case SpasmRegister_x86_64_R12B: return "r12b";
        case SpasmRegister_x86_64_R13B: return "r13b";
        case SpasmRegister_x86_64_R14B: return "r14b";
        case SpasmRegister_x86_64_R15B: return "r15b";
        case SpasmRegister_x86_64_XMM0: return "xmm0";
        case SpasmRegister_x86_64_XMM1: return "xmm1";
        case SpasmRegister_x86_64_XMM2: return "xmm2";
        case SpasmRegister_x86_64_XMM3: return "xmm3";
        case SpasmRegister_x86_64_XMM4: return "xmm4";
        case SpasmRegister_x86_64_XMM5: return "xmm5";
        case SpasmRegister_x86_64_XMM6: return "xmm6";
        case SpasmRegister_x86_64_XMM7: return "xmm7";
        case SpasmRegister_x86_64_XMM8: return "xmm8";
        case SpasmRegister_x86_64_XMM9: return "xmm9";
        case SpasmRegister_x86_64_XMM10: return "xmm10";
        case SpasmRegister_x86_64_XMM11: return "xmm11";
        case SpasmRegister_x86_64_XMM12: return "xmm12";
        case SpasmRegister_x86_64_XMM13: return "xmm13";
        case SpasmRegister_x86_64_XMM14: return "xmm14";
        case SpasmRegister_x86_64_XMM15: return "xmm15";
        case SpasmRegister_x86_64_YMM0: return "ymm0";
        case SpasmRegister_x86_64_YMM1: return "ymm1";
        case SpasmRegister_x86_64_YMM2: return "ymm2";
        case SpasmRegister_x86_64_YMM3: return "ymm3";
        case SpasmRegister_x86_64_YMM4: return "ymm4";
        case SpasmRegister_x86_64_YMM5: return "ymm5";
        case SpasmRegister_x86_64_YMM6: return "ymm6";
        case SpasmRegister_x86_64_YMM7: return "ymm7";
        case SpasmRegister_x86_64_YMM8: return "ymm8";
        case SpasmRegister_x86_64_YMM9: return "ymm9";
        case SpasmRegister_x86_64_YMM10: return "ymm10";
        case SpasmRegister_x86_64_YMM11: return "ymm11";
        case SpasmRegister_x86_64_YMM12: return "ymm12";
        case SpasmRegister_x86_64_YMM13: return "ymm13";
        case SpasmRegister_x86_64_YMM14: return "ymm14";
        case SpasmRegister_x86_64_YMM15: return "ymm15";
        case SpasmRegister_x86_64_ZMM0: return "zmm0";
        case SpasmRegister_x86_64_ZMM1: return "zmm1";
        case SpasmRegister_x86_64_ZMM2: return "zmm2";
        case SpasmRegister_x86_64_ZMM3: return "zmm3";
        case SpasmRegister_x86_64_ZMM4: return "zmm4";
        case SpasmRegister_x86_64_ZMM5: return "zmm5";
        case SpasmRegister_x86_64_ZMM6: return "zmm6";
        case SpasmRegister_x86_64_ZMM7: return "zmm7";
        case SpasmRegister_x86_64_ZMM8: return "zmm8";
        case SpasmRegister_x86_64_ZMM9: return "zmm9";
        case SpasmRegister_x86_64_ZMM10: return "zmm10";
        case SpasmRegister_x86_64_ZMM11: return "zmm11";
        case SpasmRegister_x86_64_ZMM12: return "zmm12";
        case SpasmRegister_x86_64_ZMM13: return "zmm13";
        case SpasmRegister_x86_64_ZMM14: return "zmm14";
        case SpasmRegister_x86_64_ZMM15: return "zmm15";
        case SpasmRegister_x86_64_K0: return "k0";
        case SpasmRegister_x86_64_K1: return "k1";
        case SpasmRegister_x86_64_K2: return "k2";
        case SpasmRegister_x86_64_K3: return "k3";
        case SpasmRegister_x86_64_K4: return "k4";
        case SpasmRegister_x86_64_K5: return "k5";
        case SpasmRegister_x86_64_K6: return "k6";
        case SpasmRegister_x86_64_K7: return "k7";
        case SpasmRegister_x86_64_RIP: return "rip";
        default: return "???";
    }
}

size_t spasm_x86_64_operand_debug(SpasmOperand* operand, char* fmt_buf, size_t max_fmt_sz)
{
    switch(operand->type)
    {
        case SpasmOperandType_Register:
            return (size_t)snprintf(fmt_buf,
                                    max_fmt_sz,
                                    "%s",
                                    spasm_x86_64_get_register_as_string(operand->reg));
        case SpasmOperandType_Mem:
        {
            static const char* size_prefixes[] = { "", "byte ptr ", "word ptr ", "", "dword ptr ", "", "", "",
                                                   "qword ptr ", "", "", "", "", "", "", "", "xmmword ptr " };

            const char* size_prefix = operand->mem_size < 17 ? size_prefixes[operand->mem_size] :
                                      operand->mem_size == 32 ? "ymmword ptr " : "";

            size_t sz = (size_t)snprintf(fmt_buf, max_fmt_sz, "%s[", size_prefix);
            const char* separator = "";

            if(operand->mem_reg != SpasmRegister_x86_64_NONE)
            {
                sz += (size_t)snprintf(fmt_buf + sz,
                                       max_fmt_sz - sz,
                                       "%s",
                                       spasm_x86_64_get_register_as_string(operand->mem_reg));
                separator = " + ";
            }

            if(operand->mem_index != SpasmRegister_x86_64_NONE)
            {
                sz += (size_t)snprintf(fmt_buf + sz,
                                       max_fmt_sz - sz,
                                       "%s%s * %u",
                                       separator,
                                       spasm_x86_64_get_register_as_string(operand->mem_index),
                                       (uint32_t)(operand->mem_scale == 0 ? 1 : operand->mem_scale));
                separator = " + ";
            }

            if(operand->mem_displacement != 0 || separator[0] == '\0')
                sz += (size_t)snprintf(fmt_buf + sz,
                                       max_fmt_sz - sz,
                                       "%s%d",
                                       separator,
                                       operand->mem_displacement);

            sz += (size_t)snprintf(fmt_buf + sz, max_fmt_sz - sz, "]");

            return sz;
        }
        case SpasmOperandType_Imm8:
        case SpasmOperandType_Imm16:
        case SpasmOperandType_Imm32:
        case SpasmOperandType_Imm64:
            return (size_t)snprintf(fmt_buf, max_fmt_sz, "0x%zx", operand->imm_value);
        case SpasmOperandType_Symbol:
            return (size_t)snprintf(fmt_buf, max_fmt_sz, "%s", operand->symbol_name);
        default:
            return (size_t)snprintf(fmt_buf, max_fmt_sz, "???");
    }
}


/*
    Takes an instruction, a buffer and a max_format_sz and
    returns the size of the formatted string (uses snprintf internally)
*/
size_t spasm_x86_64_instruction_debug(SpasmInstruction* instr, char* fmt_buf, size_t max_fmt_sz)
{
    size_t sz = 0;

    sz += (size_t)snprintf(fmt_buf + sz,
                           max_fmt_sz - sz,
                           "%.*s ",
                           instr->mnemonic_len,
                           instr->mnemonic);

    for(uint8_t i = 0; i < instr->num_operands; i++)
    {
        sz += spasm_x86_64_operand_debug(&instr->operands[i], fmt_buf + sz, max_fmt_sz - sz);
        sz += (size_t)snprintf(fmt_buf + sz, max_fmt_sz - sz, ", ");
    }

    return sz - (size_t)(instr->num_operands > 0) * 2;
}

void spasm_x86_64_instructions_debug(SpasmInstructions* instructions, int32_t fd)
{
    size_t buffer_size = 0;
    size_t buffer_capacity = 1024;
    char* buffer = (char*)malloc(buffer_capacity);

    for(size_t i = 0; i < vector_size(&instructions->instructions); i++)
    {
        SpasmInstruction* instr = *(SpasmInstruction**)vector_at(&instructions->instructions, i);

        buffer_size += spasm_x86_64_instruction_debug(instr, buffer + buffer_size, 128);

        if(buffer_size >= ((size_t)((float)buffer_capacity * 0.90f)))
        {
            buffer_capacity <<= 1;
            buffer = (char*)realloc(buffer, buffer_capacity);
        }

        snprintf(buffer + buffer_size, 3, "\n\r");

        buffer_size++;
    }

#if defined(SPASM_MSVC)
    _write(fd, buffer, (unsigned int)buffer_size);
#elif defined(SPASM_GCC) || defined(SPASM_CLANG)
    write(fd, buffer, buffer_size);
#endif /* defined(SPASM_MSVC) */

    free(buffer);
}

/* Encoding funcs */

/*
    In the registers enum, registers are listed in a way that follows the X.reg encoding that
    you can find in the following table

    +------------+----------+-----------+-----------+-----------+------------+------------+-------------+-------------+-------------+----------------+----------------+--------------+
    | X.Reg      | 8-bit GP | 16-bit GP | 32-bit GP | 64-bit GP | 80-bit x87 | 64-bit MMX | 128-bit XMM | 256-bit YMM | 512-bit ZMM | 16-bit Segment | 32-bit Control | 32-bit Debug |
    +------------+----------+-----------+-----------+-----------+------------+------------+-------------+-------------+-------------+----------------+----------------+--------------+
    | b0.000 (0) | AL       | AX        | EAX       | RAX       | ST0        | MMX0       | XMM0        | YMM0        | ZMM0        | ES             | CR0            | DR0          |
    | b0.001 (1) | CL       | CX        | ECX       | RCX       | ST1        | MMX1       | XMM1        | YMM1        | ZMM1        | CS             | CR1            | DR1          |
    | b0.010 (2) | DL       | DX        | EDX       | RDX       | ST2        | MMX2       | XMM2        | YMM2        | ZMM2        | SS             | CR2            | DR2          |
    | b0.011 (3) | BL       | BX        | EBX       | RBX       | ST3        | MMX3       | XMM3        | YMM3        | ZMM3        | DS             | CR3            | DR3          |
    | b0.100 (4) | AH, SPL¹ | SP        | ESP       | RSP       | ST4        | MMX4       | XMM4        | YMM4        | ZMM4        | FS             | CR4            | DR4          |
    | b0.101 (5) | CH, BPL¹ | BP        | EBP       | RBP       | ST5        | MMX5       | XMM5        | YMM5        | ZMM5        | GS             | CR5            | DR5          |
    | b0.110 (6) | DH, SIL¹ | SI        | ESI       | RSI       | ST6        | MMX6       | XMM6        | YMM6        | ZMM6        | -              | CR6            | DR6          |
    | b0.111 (7) | BH, DIL¹ | DI        | EDI       | RDI       | ST7        | MMX7       | XMM7        | YMM7        | ZMM7        | -              | CR7            | DR7          |
    | b1.000 (8) | R8L      | R8W       | R8D       | R8        | -          | MMX8       | XMM8        | YMM8        | ZMM8        | ES             | CR8            | DR8          |
    | b1.001 (9) | R9L      | R9W       | R9D       | R9        | -          | MMX9       | XMM9        | YMM9        | ZMM9        | CS             | CR9            | DR9          |
    | b1.010 (10)| R10L     | R10W      | R10D      | R10       | -          | MMX10      | XMM10       | YMM10       | ZMM10       | SS             | CR10           | DR10         |
    | b1.011 (11)| R11L     | R11W      | R11D      | R11       | -          | MMX11      | XMM11       | YMM11       | ZMM11       | DS             | CR11           | DR11         |
    | b1.100 (12)| R12L     | R12W      | R12D      | R12       | -          | MMX12      | XMM12       | YMM12       | ZMM12       | FS             | CR12           | DR12         |
    | b1.101 (13)| R13L     | R13W      | R13D      | R13       | -          | MMX13      | XMM13       | YMM13       | ZMM13       | GS             | CR13           | DR13         |
    | b1.110 (14)| R14L     | R14W      | R14D      | R14       | -          | MMX14      | XMM14       | YMM14       | ZMM14       | -              | CR14           | DR14         |
    | b1.111 (15)| R15L     | R15W      | R15D      | R15       | -          | MMX15      | XMM15       | YMM15       | ZMM15       | -              | CR15           | DR15         |
    +------------+----------+-----------+-----------+-----------+------------+------------+-------------+-------------+-------------+----------------+----------------+--------------+

*/

#define SPASM_X86_64_MAX_INSTRUCTION_SIZE 15

typedef struct
{
    SpasmByte bytes[SPASM_X86_64_MAX_INSTRUCTION_SIZE];
    uint32_t len;
} Spasm_x86_64_Encoding;

static SPASM_FORCE_INLINE void spasm_x86_64_emit(Spasm_x86_64_Encoding* enc, SpasmByte byte)
{
    enc->bytes[enc->len++] = byte;
}

static SPASM_FORCE_INLINE void spasm_x86_64_emit_le(Spasm_x86_64_Encoding* enc, int64_t value, uint32_t size)
{
    for(uint32_t i = 0; i < size; i++)
        enc->bytes[enc->len++] = (SpasmByte)(((uint64_t)value >> (i * 8)) & 0xFF);
}

static SPASM_FORCE_INLINE SpasmByte spasm_x86_64_get_register_code(SpasmRegister reg)
{
    return (SpasmByte)((reg - 1) % 16);
}

static SPASM_FORCE_INLINE Spasm_x86_64_OperandKind spasm_x86_64_get_register_kind(SpasmRegister reg)
{
    if(reg < SpasmRegister_x86_64_AL || reg > SpasmRegister_x86_64_YMM15)
        return Spasm_x86_64_OperandKind_NONE;

    return (Spasm_x86_64_OperandKind)(Spasm_x86_64_OperandKind_R8 + (reg - SpasmRegister_x86_64_AL) / 16);
}

/* SPL, BPL, SIL and DIL need a REX prefix (without it, codes 4-7 are AH, CH, DH, BH) */
static SPASM_FORCE_INLINE bool spasm_x86_64_is_uniform_byte_register(SpasmRegister reg)
{
    return reg >= SpasmRegister_x86_64_SPL && reg <= SpasmRegister_x86_64_DIL;
}


static SPASM_FORCE_INLINE bool spasm_x86_64_has_vector_index(const SpasmOperand* mem)
{
    const Spasm_x86_64_OperandKind index_kind = spasm_x86_64_get_register_kind(mem->mem_index);

    return index_kind == Spasm_x86_64_OperandKind_XMM || index_kind == Spasm_x86_64_OperandKind_YMM;
}

/* Size in bytes of a sized memory kind, 0 for unsized/vsib memory and non-memory kinds */
static uint8_t spasm_x86_64_get_memory_size(Spasm_x86_64_OperandKind kind)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_M8: return 1;
        case Spasm_x86_64_OperandKind_M16: return 2;
        case Spasm_x86_64_OperandKind_M32: return 4;
        case Spasm_x86_64_OperandKind_M64: return 8;
        case Spasm_x86_64_OperandKind_M128: return 16;
        case Spasm_x86_64_OperandKind_M256: return 32;
        default: return 0;
    }
}

static SPASM_FORCE_INLINE bool spasm_x86_64_is_immediate(const SpasmOperand* operand)
{
    return operand->type >= SpasmOperandType_Imm8 && operand->type <= SpasmOperandType_Imm64;
}

/*
    Immediates are matched by value, the operand type (Imm8...Imm64) is not a constraint, so the
    encoder can pick the shortest form. A sign-extended immediate (add r64, imm8) must fit the signed
    range, otherwise both the signed and unsigned ranges of the immediate width are accepted
*/
static bool spasm_x86_64_immediate_fits(int64_t value, Spasm_x86_64_OperandKind kind, bool sign_extended)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_IMM8:
            return value >= INT8_MIN && value <= (sign_extended ? INT8_MAX : UINT8_MAX);
        case Spasm_x86_64_OperandKind_IMM16:
            return value >= INT16_MIN && value <= (sign_extended ? INT16_MAX : UINT16_MAX);
        case Spasm_x86_64_OperandKind_IMM32:
            return value >= INT32_MIN && value <= (sign_extended ? INT32_MAX : (int64_t)UINT32_MAX);
        case Spasm_x86_64_OperandKind_IMM64:
            return true;
        default:
            return false;
    }
}

static bool spasm_x86_64_operand_matches(const SpasmOperand* operand,
                                         Spasm_x86_64_OperandKind kind,
                                         bool sign_extended_imm)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_R8:
        case Spasm_x86_64_OperandKind_R16:
        case Spasm_x86_64_OperandKind_R32:
        case Spasm_x86_64_OperandKind_R64:
        case Spasm_x86_64_OperandKind_XMM:
        case Spasm_x86_64_OperandKind_YMM:
            return operand->type == SpasmOperandType_Register &&
                   spasm_x86_64_get_register_kind(operand->reg) == kind;

        case Spasm_x86_64_OperandKind_AL:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_AL;
        case Spasm_x86_64_OperandKind_AX:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_AX;
        case Spasm_x86_64_OperandKind_EAX:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_EAX;
        case Spasm_x86_64_OperandKind_RAX:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_RAX;
        case Spasm_x86_64_OperandKind_CL:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_CL;
        case Spasm_x86_64_OperandKind_XMM0:
            return operand->type == SpasmOperandType_Register && operand->reg == SpasmRegister_x86_64_XMM0;

        case Spasm_x86_64_OperandKind_M:
            return operand->type == SpasmOperandType_Mem && !spasm_x86_64_has_vector_index(operand);

        case Spasm_x86_64_OperandKind_M8:
        case Spasm_x86_64_OperandKind_M16:
        case Spasm_x86_64_OperandKind_M32:
        case Spasm_x86_64_OperandKind_M64:
        case Spasm_x86_64_OperandKind_M128:
        case Spasm_x86_64_OperandKind_M256:
            return operand->type == SpasmOperandType_Mem &&
                   !spasm_x86_64_has_vector_index(operand) &&
                   (operand->mem_size == 0 || operand->mem_size == spasm_x86_64_get_memory_size(kind));

        case Spasm_x86_64_OperandKind_VM32X:
        case Spasm_x86_64_OperandKind_VM64X:
            return operand->type == SpasmOperandType_Mem &&
                   spasm_x86_64_get_register_kind(operand->mem_index) == Spasm_x86_64_OperandKind_XMM;
        case Spasm_x86_64_OperandKind_VM32Y:
        case Spasm_x86_64_OperandKind_VM64Y:
            return operand->type == SpasmOperandType_Mem &&
                   spasm_x86_64_get_register_kind(operand->mem_index) == Spasm_x86_64_OperandKind_YMM;

        case Spasm_x86_64_OperandKind_IMM8:
        case Spasm_x86_64_OperandKind_IMM16:
        case Spasm_x86_64_OperandKind_IMM32:
        case Spasm_x86_64_OperandKind_IMM64:
            if(!spasm_x86_64_is_immediate(operand))
                return false;

            if(operand->imm_fixed &&
               (int)(kind - Spasm_x86_64_OperandKind_IMM8) != (int)(operand->type - SpasmOperandType_Imm8))
                return false;

            return spasm_x86_64_immediate_fits(operand->imm_value, kind, sign_extended_imm);

        /* The displacement depends on the instruction size, so the width is the one requested */
        case Spasm_x86_64_OperandKind_REL8:
            return operand->type == SpasmOperandType_Imm8;
        case Spasm_x86_64_OperandKind_REL32:
            return operand->type == SpasmOperandType_Imm32;

        case Spasm_x86_64_OperandKind_ONE:
            return spasm_x86_64_is_immediate(operand) && operand->imm_value == 1;
        case Spasm_x86_64_OperandKind_THREE:
            return spasm_x86_64_is_immediate(operand) && operand->imm_value == 3;

        default:
            return false;
    }
}

static uint8_t spasm_x86_64_get_form_memory_size(const Spasm_x86_64_Form* form)
{
    for(uint8_t i = 0; i < 4; i++)
    {
        const uint8_t size = spasm_x86_64_get_memory_size((Spasm_x86_64_OperandKind)form->operands[i]);

        if(size != 0)
            return size;
    }

    return 0;
}

static bool spasm_x86_64_form_matches(const Spasm_x86_64_Form* form, const SpasmInstruction* instr)
{
    if(instr->num_operands > 4)
        return false;

    /* 90 is nop: xchg eax, eax must zero the upper half of rax, so it needs 87 /r */
    if(form->opcode_len == 1 &&
       form->opcode[0] == 0x90 &&
       instr->num_operands == 2 &&
       instr->operands[0].type == SpasmOperandType_Register &&
       instr->operands[1].type == SpasmOperandType_Register &&
       instr->operands[0].reg == SpasmRegister_x86_64_EAX &&
       instr->operands[1].reg == SpasmRegister_x86_64_EAX)
        return false;

    for(uint8_t i = 0; i < 4; i++)
    {
        if(i >= instr->num_operands)
            return form->operands[i] == Spasm_x86_64_OperandKind_NONE;

        if(!spasm_x86_64_operand_matches(&instr->operands[i],
                                         (Spasm_x86_64_OperandKind)form->operands[i],
                                         (form->flags & Spasm_x86_64_FormFlag_IMMSEXT) != 0))
            return false;
    }

    return true;
}

static uint32_t spasm_x86_64_get_immediate_size(Spasm_x86_64_OperandKind kind)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_IMM8:
        case Spasm_x86_64_OperandKind_REL8:
            return 1;
        case Spasm_x86_64_OperandKind_IMM16:
            return 2;
        case Spasm_x86_64_OperandKind_IMM32:
        case Spasm_x86_64_OperandKind_REL32:
            return 4;
        case Spasm_x86_64_OperandKind_IMM64:
            return 8;
        default:
            return 0;
    }
}

/*
    Encodes the ModR/M byte of a memory operand, with the optional SIB byte and displacement.
    reg_field is the 3-bit ModR/M.reg (register number or /digit).

    Special cases of the 64-bit ModR/M encoding:
     - rm=100 means a SIB byte follows: rsp/r12 as base always need a SIB
     - mod=00 rm=101 means [rip + disp32]: rbp/r13 as base need mod=01 with a zero disp8
     - SIB base=101 with mod=00 means no base + disp32: used for [disp32] and [index * scale + disp32]
*/
static bool spasm_x86_64_encode_memory(const SpasmOperand* mem,
                                       SpasmByte reg_field,
                                       Spasm_x86_64_Encoding* enc)
{
    const SpasmRegister base = mem->mem_reg;
    const SpasmRegister index = mem->mem_index;
    const int32_t disp = mem->mem_displacement;

    SpasmByte scale_bits;

    switch(mem->mem_scale)
    {
        case 0:
        case 1: scale_bits = 0; break;
        case 2: scale_bits = 1; break;
        case 4: scale_bits = 2; break;
        case 8: scale_bits = 3; break;
        default:
            spasm_error("Invalid memory operand scale: %u (must be 1, 2, 4 or 8)", (uint32_t)mem->mem_scale);
            return false;
    }

    const Spasm_x86_64_OperandKind index_kind = spasm_x86_64_get_register_kind(index);

    if(index != SpasmRegister_x86_64_NONE &&
       index_kind != Spasm_x86_64_OperandKind_R64 &&
       index_kind != Spasm_x86_64_OperandKind_XMM &&
       index_kind != Spasm_x86_64_OperandKind_YMM)
    {
        spasm_error("Invalid memory operand index: must be a 64-bit register (or xmm/ymm for vsib)");
        return false;
    }

    if(index == SpasmRegister_x86_64_RSP)
    {
        spasm_error("Invalid memory operand index: rsp cannot be used as an index");
        return false;
    }

    if(base == SpasmRegister_x86_64_RIP)
    {
        if(index != SpasmRegister_x86_64_NONE)
        {
            spasm_error("Invalid memory operand: rip-relative addressing cannot have an index");
            return false;
        }

        spasm_x86_64_emit(enc, (SpasmByte)((reg_field << 3) | 0x5));
        spasm_x86_64_emit_le(enc, disp, 4);

        return true;
    }

    const SpasmByte index_code = index != SpasmRegister_x86_64_NONE ?
                                 spasm_x86_64_get_register_code(index) & 0x7 :
                                 0x4;

    if(base == SpasmRegister_x86_64_NONE)
    {
        spasm_x86_64_emit(enc, (SpasmByte)((reg_field << 3) | 0x4));
        spasm_x86_64_emit(enc, (SpasmByte)((scale_bits << 6) | (index_code << 3) | 0x5));
        spasm_x86_64_emit_le(enc, disp, 4);

        return true;
    }

    if(spasm_x86_64_get_register_kind(base) != Spasm_x86_64_OperandKind_R64)
    {
        spasm_error("Invalid memory operand base: must be a 64-bit register or rip");
        return false;
    }

    const SpasmByte base_code = spasm_x86_64_get_register_code(base) & 0x7;

    SpasmByte mod;

    if(disp == 0 && base_code != 0x5)
        mod = 0x0;
    else if(disp >= -128 && disp <= 127)
        mod = 0x1;
    else
        mod = 0x2;

    if(index != SpasmRegister_x86_64_NONE || base_code == 0x4)
    {
        spasm_x86_64_emit(enc, (SpasmByte)((mod << 6) | (reg_field << 3) | 0x4));
        spasm_x86_64_emit(enc, (SpasmByte)((scale_bits << 6) | (index_code << 3) | base_code));
    }
    else
    {
        spasm_x86_64_emit(enc, (SpasmByte)((mod << 6) | (reg_field << 3) | base_code));
    }

    if(mod == 0x1)
        spasm_x86_64_emit_le(enc, disp, 1);
    else if(mod == 0x2)
        spasm_x86_64_emit_le(enc, disp, 4);

    return true;
}

static bool spasm_x86_64_encode_form(const Spasm_x86_64_Form* form,
                                     const SpasmInstruction* instr,
                                     Spasm_x86_64_Encoding* enc)
{
    const SpasmOperand* reg_operand = NULL;
    const SpasmOperand* rm_operand = NULL;
    const SpasmOperand* opcode_operand = NULL;
    const SpasmOperand* vvvv_operand = NULL;

    bool needs_rex = false;

    for(uint8_t i = 0; i < instr->num_operands; i++)
    {
        const SpasmOperand* operand = &instr->operands[i];

        switch(SPASM_X86_64_FORM_ROLE(form, i))
        {
            case Spasm_x86_64_OperandRole_ModRMReg: reg_operand = operand; break;
            case Spasm_x86_64_OperandRole_ModRMRm: rm_operand = operand; break;
            case Spasm_x86_64_OperandRole_OpcodeReg: opcode_operand = operand; break;
            case Spasm_x86_64_OperandRole_Vvvv: vvvv_operand = operand; break;
            default: break;
        }

        if(operand->type == SpasmOperandType_Register && spasm_x86_64_is_uniform_byte_register(operand->reg))
            needs_rex = true;
    }

    SpasmByte rex_w = (form->flags & Spasm_x86_64_FormFlag_REXW) ? 1 : 0;
    SpasmByte rex_r = 0;
    SpasmByte rex_x = 0;
    SpasmByte rex_b = 0;

    if(reg_operand != NULL)
        rex_r = spasm_x86_64_get_register_code(reg_operand->reg) >> 3;

    if(rm_operand != NULL && rm_operand->type == SpasmOperandType_Register)
        rex_b = spasm_x86_64_get_register_code(rm_operand->reg) >> 3;

    if(rm_operand != NULL && rm_operand->type == SpasmOperandType_Mem)
    {
        if(rm_operand->mem_reg != SpasmRegister_x86_64_NONE &&
           rm_operand->mem_reg != SpasmRegister_x86_64_RIP)
            rex_b = spasm_x86_64_get_register_code(rm_operand->mem_reg) >> 3;

        if(rm_operand->mem_index != SpasmRegister_x86_64_NONE)
            rex_x = spasm_x86_64_get_register_code(rm_operand->mem_index) >> 3;
    }

    if(opcode_operand != NULL)
        rex_b = spasm_x86_64_get_register_code(opcode_operand->reg) >> 3;

    if(form->flags & Spasm_x86_64_FormFlag_VEX)
    {
        /*
            VEX stores R, X, B and vvvv inverted. pp replaces the 66/F3/F2 prefix and mmmmm the
            0F/0F38/0F3A escape. The 2-byte form (C5) implies X = B = W = 0 and mmmmm = 0F
        */
        const SpasmByte vex_w = (form->flags & Spasm_x86_64_FormFlag_VEXW) ? 1 : 0;
        const SpasmByte vex_l = (form->flags & Spasm_x86_64_FormFlag_VEXL) ? 1 : 0;
        const SpasmByte vex_pp = (form->vex >> 5) & 0x3;
        const SpasmByte vex_mmmmm = form->vex & 0x1F;
        const SpasmByte vvvv = vvvv_operand != NULL ? spasm_x86_64_get_register_code(vvvv_operand->reg) : 0;
        const SpasmByte inverted_vvvv = (SpasmByte)(~vvvv & 0xF);

        if(rex_x == 0 && rex_b == 0 && vex_w == 0 && vex_mmmmm == 0x1)
        {
            spasm_x86_64_emit(enc, 0xC5);
            spasm_x86_64_emit(enc, (SpasmByte)(((rex_r ^ 1) << 7) | (inverted_vvvv << 3) | (vex_l << 2) | vex_pp));
        }
        else
        {
            spasm_x86_64_emit(enc, 0xC4);
            spasm_x86_64_emit(enc, (SpasmByte)(((rex_r ^ 1) << 7) | ((rex_x ^ 1) << 6) | ((rex_b ^ 1) << 5) | vex_mmmmm));
            spasm_x86_64_emit(enc, (SpasmByte)((vex_w << 7) | (inverted_vvvv << 3) | (vex_l << 2) | vex_pp));
        }
    }
    else
    {
        if(form->flags & Spasm_x86_64_FormFlag_P66)
            spasm_x86_64_emit(enc, 0x66);

        if(form->flags & Spasm_x86_64_FormFlag_PF2)
            spasm_x86_64_emit(enc, 0xF2);

        if(form->flags & Spasm_x86_64_FormFlag_PF3)
            spasm_x86_64_emit(enc, 0xF3);

        if(needs_rex || rex_w || rex_r || rex_x || rex_b)
            spasm_x86_64_emit(enc, (SpasmByte)(0x40 | (rex_w << 3) | (rex_r << 2) | (rex_x << 1) | rex_b));
    }

    for(uint8_t i = 0; i < form->opcode_len; i++)
        spasm_x86_64_emit(enc, form->opcode[i]);

    if(opcode_operand != NULL)
        enc->bytes[enc->len - 1] += spasm_x86_64_get_register_code(opcode_operand->reg) & 0x7;

    if(form->modrm != SPASM_X86_64_MODRM_NONE)
    {
        const SpasmByte reg_field = form->modrm == SPASM_X86_64_MODRM_REG ?
                                    spasm_x86_64_get_register_code(reg_operand->reg) & 0x7 :
                                    form->modrm;

        if(rm_operand->type == SpasmOperandType_Register)
        {
            spasm_x86_64_emit(enc, (SpasmByte)(0xC0 |
                                               (reg_field << 3) |
                                               (spasm_x86_64_get_register_code(rm_operand->reg) & 0x7)));
        }
        else if(!spasm_x86_64_encode_memory(rm_operand, reg_field, enc))
        {
            return false;
        }
    }

    for(uint8_t i = 0; i < instr->num_operands; i++)
    {
        const Spasm_x86_64_OperandRole role = SPASM_X86_64_FORM_ROLE(form, i);

        if(role == Spasm_x86_64_OperandRole_Imm || role == Spasm_x86_64_OperandRole_Rel)
            spasm_x86_64_emit_le(enc,
                                 instr->operands[i].imm_value,
                                 spasm_x86_64_get_immediate_size((Spasm_x86_64_OperandKind)form->operands[i]));
        else if(role == Spasm_x86_64_OperandRole_Is4)
            spasm_x86_64_emit(enc, (SpasmByte)(spasm_x86_64_get_register_code(instr->operands[i].reg) << 4));
    }

    return true;
}

/*
    Commutative VEX forms: swapping the sources can move an extended register from ModRM.rm (VEX.B)
    to vvvv, which allows the 2-byte VEX prefix. Returns false if the sources cannot be swapped
*/
static bool spasm_x86_64_swap_vex_sources(const Spasm_x86_64_Form* form,
                                          const SpasmInstruction* instr,
                                          SpasmOperand* swapped_operands,
                                          SpasmInstruction* swapped)
{
    if(!(form->flags & Spasm_x86_64_FormFlag_VEX) || !(form->vex & SPASM_X86_64_VEX_COMMUTABLE))
        return false;

    int32_t vvvv_index = -1;
    int32_t rm_index = -1;
    int32_t imm_index = -1;

    for(uint8_t i = 0; i < instr->num_operands; i++)
    {
        switch(SPASM_X86_64_FORM_ROLE(form, i))
        {
            case Spasm_x86_64_OperandRole_Vvvv: vvvv_index = i; break;
            case Spasm_x86_64_OperandRole_ModRMRm: rm_index = i; break;
            case Spasm_x86_64_OperandRole_Imm: imm_index = i; break;
            default: break;
        }
    }

    if(vvvv_index < 0 || rm_index < 0 || instr->operands[rm_index].type != SpasmOperandType_Register)
        return false;

    /* vcmpps/vcmppd (0F C2) are only symmetric for the EQ, UNORD, NEQ and ORD predicates */
    if(form->opcode[form->opcode_len - 1] == 0xC2)
    {
        const int64_t predicate = imm_index >= 0 ? (instr->operands[imm_index].imm_value & 0x7) : -1;

        if(predicate != 0 && predicate != 3 && predicate != 4 && predicate != 7)
            return false;
    }

    memcpy(swapped_operands, instr->operands, instr->num_operands * sizeof(SpasmOperand));
    swapped_operands[vvvv_index] = instr->operands[rm_index];
    swapped_operands[rm_index] = instr->operands[vvvv_index];

    *swapped = *instr;
    swapped->operands = swapped_operands;

    return true;
}

bool spasm_x86_64_encode_instruction(SpasmInstruction* instr, SpasmByteCode* out)
{
    const Spasm_x86_64_MnemonicKeyword* mnemonic = spasm_x86_64_mnemonic_lookup(instr->mnemonic,
                                                                                instr->mnemonic_len);

    if(mnemonic == NULL)
    {
        spasm_error("Unknown instruction: %.*s", (int)instr->mnemonic_len, instr->mnemonic);
        return false;
    }

    /* Every matching form is encoded and the shortest one is kept, the first one on ties */
    Spasm_x86_64_Encoding enc;
    Spasm_x86_64_Encoding candidate;
    const Spasm_x86_64_Form* selected = NULL;
    uint8_t selected_memory_size = 0;

    for(uint32_t i = mnemonic->first; i < (uint32_t)(mnemonic->first + mnemonic->count); i++)
    {
        const Spasm_x86_64_Form* form = &spasm_x86_64_forms[i];

        if(!spasm_x86_64_form_matches(form, instr))
            continue;

        const uint8_t memory_size = spasm_x86_64_get_form_memory_size(form);

        if(selected != NULL && memory_size != selected_memory_size)
        {
            char instr_buffer[128];
            const size_t instr_buffer_len = spasm_x86_64_instruction_debug(instr, instr_buffer, 128);

            spasm_error("Ambiguous memory operand size, use a sized memory operand: %.*s",
                        (int)instr_buffer_len,
                        instr_buffer);

            return false;
        }

        candidate.len = 0;

        if(!spasm_x86_64_encode_form(form, instr, &candidate))
            return false;

        if(selected == NULL || candidate.len < enc.len)
            enc = candidate;

        SpasmOperand swapped_operands[4];
        SpasmInstruction swapped;

        if(spasm_x86_64_swap_vex_sources(form, instr, swapped_operands, &swapped))
        {
            candidate.len = 0;

            if(spasm_x86_64_encode_form(form, &swapped, &candidate) && candidate.len < enc.len)
                enc = candidate;
        }

        selected = form;
        selected_memory_size = memory_size;
    }

    if(selected == NULL)
    {
        char instr_buffer[128];
        const size_t instr_buffer_len = spasm_x86_64_instruction_debug(instr, instr_buffer, 128);

        spasm_error("Cannot find an encoding for instruction: %.*s", (int)instr_buffer_len, instr_buffer);

        return false;
    }

    for(uint32_t i = 0; i < enc.len; i++)
        spasm_bytecode_push_back(out, enc.bytes[i]);

    return true;
}

#endif /* defined(SPASM_ENABLE_X86_64) */
