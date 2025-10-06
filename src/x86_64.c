/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

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

/* Generated table */
extern const Spasm_x86_64_InstructionInfo spasm_x86_64_instruction_table[];
extern const size_t spasm_x86_64_instruction_table_size;

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
            if(operand->mem_index == 0)
            {
                if(operand->mem_displacement == 0)
                    return (size_t)snprintf(fmt_buf,
                                            max_fmt_sz,
                                            "[%s]",
                                            spasm_x86_64_get_register_as_string(operand->mem_reg));

                
                return (size_t)snprintf(fmt_buf,
                                        max_fmt_sz,
                                        "[%s + %d]",
                                        spasm_x86_64_get_register_as_string(operand->mem_reg),
                                        operand->mem_displacement);
            }
            else 
            {
                if(operand->mem_displacement == 0)
                    return (size_t)snprintf(fmt_buf,
                                            max_fmt_sz,
                                            "[%s + %s * %d]",
                                            spasm_x86_64_get_register_as_string(operand->mem_reg),
                                            spasm_x86_64_get_register_as_string(operand->mem_index),
                                            (int32_t)operand->mem_scale);

                
                return (size_t)snprintf(fmt_buf,
                                        max_fmt_sz,
                                        "[%s + %s * %d + %d]",
                                        spasm_x86_64_get_register_as_string(operand->mem_reg),
                                        spasm_x86_64_get_register_as_string(operand->mem_index),
                                        (int32_t)operand->mem_scale,
                                        operand->mem_displacement);
            }
        case SpasmOperandType_Imm8:
        case SpasmOperandType_Imm16:
        case SpasmOperandType_Imm32:
        case SpasmOperandType_Imm64:
            return (size_t)snprintf(fmt_buf, max_fmt_sz, "0x%llx", operand->imm_value);
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
    write(fd, buffer, buffer_size)
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

SPASM_FORCE_INLINE SpasmByte spasm_x86_64_get_register_code(SpasmRegister reg) 
{
    return (reg - 1) % 16;
}

typedef enum
{
    Spasm_x86_64_RegisterWidth_Invalid,
    Spasm_x86_64_RegisterWidth_8,
    Spasm_x86_64_RegisterWidth_16,
    Spasm_x86_64_RegisterWidth_32,
    Spasm_x86_64_RegisterWidth_64,
    Spasm_x86_64_RegisterWidth_128,
    Spasm_x86_64_RegisterWidth_256,
    Spasm_x86_64_RegisterWidth_512,
    Spasm_x86_64_RegisterWidth_OpMask,
} Spasm_x86_64_RegisterWidth;

SPASM_FORCE_INLINE Spasm_x86_64_RegisterWidth spasm_x86_64_get_register_width(SpasmRegister reg)
{
    return (reg - 1) / 16 + 1;
}

SPASM_FORCE_INLINE size_t spasm_x86_64_get_register_size(SpasmRegister reg)
{
    return 8 << ((reg - 1) / 16);
}

size_t spasm_x86_64_get_operand_size(SpasmOperand* operand, size_t default_value)
{
    switch(operand->type)
    {
        case SpasmOperandType_Register:
            return spasm_x86_64_get_register_size(operand->reg);
        case SpasmOperandType_Mem:
            return default_value;
        case SpasmOperandType_Imm8:
            return 8;
        case SpasmOperandType_Imm16:
            return 16;
        case SpasmOperandType_Imm32:
            return 32;
        case SpasmOperandType_Imm64:
            return 64;
        default:
            return 0;
    }
}

bool spasm_x86_64_needs_rex(SpasmInstruction* instr)
{
    bool needs_rex = false;

    for(int i = 0; i < instr->num_operands; i++)
    {
        needs_rex = instr->operands[i].type == SpasmOperandType_Register && 
                    spasm_x86_64_get_register_code(instr->operands[i].reg) > 7;
    }

    return needs_rex;
}

typedef struct
{
    SpasmByte bytes[4];
    uint32_t len;
} Spasm_x86_64_PrefixBytes;

typedef struct
{
    bool needs_rex;
    bool needs_vex2;
    bool needs_vex3;
    bool needs_evex;
    uint8_t pp;
    uint8_t mmmmm;
    uint8_t vector_len; /* 0=128-bit, 1=256-bit, 2=512-bit */
    uint8_t vvvv;
    uint8_t aaa;
    bool z;
} Spasm_x86_64_PrefixInfo;

Spasm_x86_64_PrefixBytes spasm_encode_x86_64_prefix(Spasm_x86_64_PrefixInfo info,
                                                    SpasmOperand* operands,
                                                    uint8_t num_operands) 
{
    Spasm_x86_64_PrefixBytes result;
    memset(&result, 0, sizeof(Spasm_x86_64_PrefixBytes));

    if(info.needs_evex) 
    {
        SpasmByte R = 0, X = 0, B = 0, R_prime = 0, W = 0, V_prime = 0, b = 0;
        SpasmByte L_prime_L = info.vector_len;
        SpasmByte mm = info.mmmmm;
        SpasmByte pp = info.pp;

        for(uint8_t i = 0; i < num_operands; i++) 
        {
            if(operands[i].type == SpasmOperandType_Register) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].reg);

                if(code > 7) 
                {
                    if(i == 0) 
                        R = 1;
                    else if(i == 1)
                        info.vvvv = code & 0xF;
                    else if(i == 2)
                        B = 1;
                }

                if(spasm_x86_64_get_register_size(operands[i].reg) == Spasm_x86_64_RegisterWidth_OpMask) 
                {
                    /* TODO: add zeroing support */
                    info.aaa = code & 0x7;
                    info.z = false;
                }

                if(spasm_x86_64_get_register_width(operands[i].reg) == Spasm_x86_64_RegisterWidth_64)
                    W = 1;
            }
            if(operands[i].type == SpasmOperandType_Mem) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].mem_reg);

                if(code > 7)
                    B = 1;

                if(operands[i].mem_index != SpasmRegister_x86_64_NONE) 
                {
                    code = spasm_x86_64_get_register_code(operands[i].mem_index);

                    if(code > 7)
                        X = 1;
                }
            }
        }

        result.bytes[0] = 0x62;
        result.bytes[1] = (R << 7) | (X << 6) | (B << 5) | (R_prime << 4) | mm;
        result.bytes[2] = (W << 7) | (info.vvvv << 3) | (1 << 2) | pp;
        result.bytes[3] = (info.z << 7) | (L_prime_L << 5) | (b << 4) | (V_prime << 3) | info.aaa;
        result.len = 4;
    } 
    else if(info.needs_vex2 || info.needs_vex3) 
    {
        SpasmByte R = 0, X = 0, B = 0, W = 0, vvvv = 0;
        SpasmByte L = info.vector_len & 0x1;
        SpasmByte pp = info.pp;
        SpasmByte mmmmm = info.mmmmm;

        for(uint8_t i = 0; i < num_operands; i++) 
        {
            if(operands[i].type == SpasmOperandType_Register) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].reg);

                if(code > 7) 
                {
                    if(i == 0)
                        R = 1;

                    else if(i == 1)
                        vvvv = code & 0xF;

                    else if(i == 2)
                        B = 1;
                }

                if(spasm_x86_64_get_register_width(operands[i].reg) == Spasm_x86_64_RegisterWidth_64)
                    W = 1;
            }

            if(operands[i].type == SpasmOperandType_Mem) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].mem_reg);

                if(code > 7)
                    B = 1;

                if(operands[i].mem_index != SpasmRegister_x86_64_NONE)
                {
                    code = spasm_x86_64_get_register_code(operands[i].mem_index);

                    if(code > 7)
                        X = 1;
                }
            }
        }

        if(info.needs_vex3 || X || B || mmmmm != 0x01 || W) 
        {
            result.bytes[0] = 0xC4;
            result.bytes[1] = (R << 7) | (X << 6) | (B << 5) | mmmmm;
            result.bytes[2] = (W << 7) | (vvvv << 3) | (L << 2) | pp;
            result.len = 3;
        }
        else
        {
            result.bytes[0] = 0xC5;
            result.bytes[1] = (R << 7) | (vvvv << 3) | (L << 2) | pp;
            result.len = 2;
        }
    }
    else if(info.needs_rex) 
    {
        SpasmByte W = 0, R = 0, X = 0, B = 0;

        for(uint8_t i = 0; i < num_operands; i++) 
        {
            if(operands[i].type == SpasmOperandType_Register) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].reg);

                if(code > 7) 
                {
                    if(i == 0)
                        R = 1;
                    else if(i == 1)
                        B = 1;
                }

                if(spasm_x86_64_get_register_width(operands[i].reg) == Spasm_x86_64_RegisterWidth_64)
                    W = 1;
            }

            if(operands[i].type == SpasmOperandType_Mem) 
            {
                SpasmByte code = spasm_x86_64_get_register_code(operands[i].mem_reg);

                if(code > 7)
                    B = 1;

                if(operands[i].mem_index != SpasmRegister_x86_64_NONE) 
                {
                    code = spasm_x86_64_get_register_code(operands[i].mem_index);

                    if(code > 7)
                        X = 1;
                }
            }
        }

        result.bytes[0] = 0x40 | (W << 3) | (R << 2) | (X << 1) | B;
        result.len = (W || R || X || B) ? 1 : 0; /* Omit REX if not needed */
    }

    return result;
}

/*
    The ModRMSibOffset struct holds the encoded ModR/M byte, optional SIB byte,
    and displacement (8-bit or 32-bit) for memory operands

    modrm: encodes addressing mode (mod), destination register (reg),
           and source register or memory (rm)
    sib: encodes scale, index and base for complex memory addressing

    The ModR/M and SIB bytes are needed if the instruction has two operands (destination and source)
    It handles:
     Register-to-register instructions (mov rax, rbx).
     Register-to-memory or memory-to-register instructions (mov rax, [rbx], mov [rax], rbx).
     Memory addressing with SIB (mov rax, [rbx + rcx * 4 + 16]).
     Extended registers (R8, XMM8) for REX/VEX/EVEX prefixes.
*/

typedef struct
{
    SpasmByte modrm;
    SpasmByte sib;
    bool has_sib;
    bool has_disp8;
    bool has_disp32;
    SpasmByte disp8;
    int32_t disp32;
} Spasm_x86_64_ModRMSibOffset;

SpasmByte spasm_x86_64_get_rm(SpasmRegister reg)
{
    SpasmByte code = spasm_x86_64_get_register_code(reg);
    return code & 0x7;
}

Spasm_x86_64_ModRMSibOffset spasm_x86_64_operands_as_modrm_sib_offset(SpasmOperand* dest,
                                                                      SpasmOperand* src,
                                                                      Spasm_x86_64_PrefixInfo* prefix_info)
{
    Spasm_x86_64_ModRMSibOffset result = { 0 };

    if(dest->type == SpasmOperandType_Register && src->type == SpasmOperandType_Register)
    {
        /* mod=11 (register-direct) */
        result.modrm = (0x3 << 6) |
                       (spasm_x86_64_get_rm(dest->reg) << 3) |
                       spasm_x86_64_get_rm(src->reg);
        return result;
    }

    if(dest->type == SpasmOperandType_Register && src->type >= SpasmOperandType_Imm8)
    {
        /* mod=11 (register-direct) */
        result.modrm = (0x3 << 6) |
                       (spasm_x86_64_get_rm(dest->reg));
        return result;
    }

    const SpasmOperand* mem_operand = (dest->type == SpasmOperandType_Mem) ? dest : src;
    const SpasmOperand* reg_operand = (dest->type == SpasmOperandType_Mem) ? src : dest;
    bool mem_is_dest = (dest->type == SpasmOperandType_Mem);

    SpasmRegister base = mem_operand->mem_reg;
    SpasmRegister index = mem_operand->mem_index;
    uint8_t scale = mem_operand->mem_scale;
    int32_t disp = mem_operand->mem_displacement;

    uint8_t scale_bits = 0;

    if(scale == 2)
        scale_bits = 1;
    else if (scale == 4)
        scale_bits = 2;
    else if (scale == 8)
        scale_bits = 3;
    else if (scale != 1 && scale != 0)
        /* Invalid scale, return empty result */
        return result;

    uint8_t mod = 0;

    if(disp == 0 && base != SpasmRegister_x86_64_RBP && base != SpasmRegister_x86_64_R13) 
    {
        mod = 0;
    }
    else if (disp >= -128 && disp <= 127) 
    {
        mod = 1;
        result.has_disp8 = true;
        result.disp8 = (SpasmByte)disp;
    }
    else
    {
        mod = 2;
        result.has_disp32 = true;
        result.disp32 = disp;
    }

    uint8_t rm = 0;

    if(index != SpasmRegister_x86_64_NONE || 
       scale != 0 || 
       base == SpasmRegister_x86_64_RSP ||
       base == SpasmRegister_x86_64_R12) 
    {
        /* SIB is required for index, non-1 scale, or RSP/R12 as base */
        result.has_sib = true;
        rm = 4; /* rm=100 indicates SIB follows */

        if(index == SpasmRegister_x86_64_NONE) 
            result.sib = (scale_bits << 6) | (4 << 3) | spasm_x86_64_get_rm(base); /* index=100 (none) */
        else
            result.sib = (scale_bits << 6) | (spasm_x86_64_get_rm(index) << 3) | spasm_x86_64_get_rm(base);
    }
    else if (base == SpasmRegister_x86_64_RIP) 
    {
        /* RIP-relative addressing */
        mod = 0; /* mod=00 for RIP-relative */
        rm = 5;  /* rm=101 for RIP */
        result.has_disp32 = true;
        result.disp32 = disp;
    } 
    else if(base == SpasmRegister_x86_64_NONE) 
    {
        /* Absolute addressing ([disp32]) */
        mod = 0;
        rm = 5; /* rm=101 with no base */
        result.has_disp32 = true;
        result.disp32 = disp;
    }
    else 
    {
        /* Simple base addressing ([base] or [base + disp]) */
        rm = spasm_x86_64_get_rm(base);
    }

    /* Set ModR/M: mod, reg, rm */
    result.modrm = (mod << 6) | (spasm_x86_64_get_rm(reg_operand->reg) << 3) | rm;

    /* Adjust for VEX/EVEX vvvv field if src is memory */
    if(mem_is_dest && prefix_info->needs_vex2 || prefix_info->needs_vex3 || prefix_info->needs_evex)
        prefix_info->vvvv = spasm_x86_64_get_rm(src->reg) & 0xF;

    return result;
}

bool spasm_x86_64_encode_instruction(SpasmInstruction* instr, SpasmByteCode* out)
{
    const Spasm_x86_64_InstructionInfo* info = NULL;

    for(size_t i = 0; i < spasm_x86_64_instruction_table_size; i++) 
    {
        if(strcmp(instr->mnemonic, spasm_x86_64_instruction_table[i].mnemonic) == 0) 
        {
            bool match = true;

            const Spasm_x86_64_InstructionInfo* current_instr = &spasm_x86_64_instruction_table[i];

            for(uint8_t j = 0; j < instr->num_operands; j++) 
            {
                if(instr->operands[j].type != current_instr->operand_types[j]) 
                {
                    match = false;
                    break;
                }

                const size_t operand_size = spasm_x86_64_get_operand_size(&instr->operands[j],
                                                                          current_instr->operand_sizes[j]);

                if(current_instr->operand_sizes[j] != 0 && operand_size != current_instr->operand_sizes[j] &&
                   instr->operands[j].type != SpasmOperandType_Register) 
                {
                    match = false;
                    break;
                }
            }

            if(match) 
            {
                info = current_instr;
                break;
            }
        }
    }

    if(info == NULL)
    {
        spasm_error("Cannot find encoding info for instruction: %s", instr->mnemonic);

        char instr_buffer[64];
        const size_t instr_buffer_len = spasm_x86_64_instruction_debug(instr, instr_buffer, 64);

        spasm_error("Instruction: %.*s", (int)instr_buffer_len, instr_buffer);

        return false;
    }

    /* 
        A REX prefix must be encoded when:
            - using 64-bit operand size and the instruction does not default to 64-bit operand size
            - using one of th extended registers (reg code > 7) 
            - using one of the uniform byte registers SPL, BPL, SIL or DIL
    */

    bool needs_rex = spasm_x86_64_needs_rex(instr);

    Spasm_x86_64_PrefixInfo prefix_info = 
    {
        .needs_rex = (info->prefix == Spasm_x86_64_PrefixType_REX) | needs_rex,
        .needs_vex2 = (info->prefix == Spasm_x86_64_PrefixType_VEX2),
        .needs_vex3 = (info->prefix == Spasm_x86_64_PrefixType_VEX3),
        .needs_evex = (info->prefix == Spasm_x86_64_PrefixType_EVEX),
        .pp = info->pp,
        .mmmmm = info->mmmmm,
        .vector_len = (info->operand_sizes[0] == 512) ? 2 :
                      (info->operand_sizes[0] == 256) ? 1 : 0
    };

    Spasm_x86_64_PrefixBytes prefix = spasm_encode_x86_64_prefix(prefix_info, instr->operands, instr->num_operands);

    Spasm_x86_64_ModRMSibOffset modrm_sib;
    memset(&modrm_sib, 0, sizeof(Spasm_x86_64_ModRMSibOffset));

    if(info->needs_modrm)
        modrm_sib = spasm_x86_64_operands_as_modrm_sib_offset(&instr->operands[0], &instr->operands[1], &prefix_info);

    for(uint8_t i = 0; i < prefix.len; i++)
    {
        spasm_bytecode_push_back(out, prefix.bytes[i]);
    }

    for(uint8_t i = 0; i < info->opcode_len; i++) 
    {
        SpasmByte opcode = info->opcode[i];

        if(info->opcode[i] == 0x00 && i == 0) // Handle +r
            opcode = info->opcode[i] + (spasm_x86_64_get_register_code(instr->operands[0].reg) & 0x7);

        spasm_bytecode_push_back(out, opcode);
    }

    if(info->needs_modrm) 
    {
        /* Adjust ModR/M for /0, /1, etc. */
        if(info->opcode[info->opcode_len - 1] != 0x00 && 
           (info->opcode[info->opcode_len - 1] & 0xF0) == 0x00)
            modrm_sib.modrm |= (info->opcode[info->opcode_len - 1] << 3); /* Set reg field for /0, /1, etc. */

        spasm_bytecode_push_back(out, modrm_sib.modrm);

        if(modrm_sib.has_sib)
            spasm_bytecode_push_back(out, modrm_sib.sib);

        if(modrm_sib.has_disp8) 
        {
            spasm_bytecode_push_back(out, modrm_sib.disp8);
        }
        else if(modrm_sib.has_disp32) 
        {
            spasm_bytecode_push_back(out, modrm_sib.disp32 & 0xFF);
            spasm_bytecode_push_back(out, (modrm_sib.disp32 >> 8) & 0xFF);
            spasm_bytecode_push_back(out, (modrm_sib.disp32 >> 16) & 0xFF);
            spasm_bytecode_push_back(out, (modrm_sib.disp32 >> 24) & 0xFF);
        }
    }

    for(uint8_t i = 0; i < instr->num_operands; i++) 
    {
        if (instr->operands[i].type >= SpasmOperandType_Imm8 &&
            instr->operands[i].type <= SpasmOperandType_Imm64) 
        {
            int64_t imm = instr->operands[i].imm_value;

            int bytes = 1 << (instr->operands[i].type - SpasmOperandType_Imm8);

            for(int j = 0; j < bytes; j++)
                spasm_bytecode_push_back(out, (imm >> (j * 8)) & 0xFF);
        }
    }

    return true;
}


#endif /* defined(SPASM_ENABLE_X86_64) */