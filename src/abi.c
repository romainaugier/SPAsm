/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/abi.h"
#include "spasm/register.h"
#include "spasm/platform.h"

SpasmABI spasm_get_current_abi()
{
    switch(spasm_get_current_isa())
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmISA_x86_64:
        {
            switch(spasm_get_current_platform())
            {
                case SpasmPlatform_Windows: return SpasmABI_WindowsX64;
                case SpasmPlatform_Linux: return SpasmABI_LinuxX64;
                case SpasmPlatform_MacOS: return SpasmABI_MacOSX64;
                default: return SpasmABI_Invalid;
            }
        }
#endif /* defined(SPASM_ENABLE_X86_64) */

#if defined(SPASM_ENABLE_AARCH64)
        case SpasmISA_aarch64:
        {
            switch(spasm_get_current_platform())
            {
                case SpasmPlatform_MacOS: return SpasmABI_MacOSAarch64;
                default: return SpasmABI_Invalid;
            }
        }
#endif /* defined(SPASM_ENABLE_AARCH64) */

        default: return SpasmABI_Invalid;
    }
}

size_t get_max_available_gp_registers(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return 4; /* RCX, RDX, R8, R9 */
        case SpasmABI_LinuxX64: return 6; /* RSI, RDI, RCX, RDX, R8, R9 */
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

size_t get_max_available_fp_registers(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return 6; /* XMM0-XMM5 */
        case SpasmABI_LinuxX64: return 8; /* XMM0-XMM7 */
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

SpasmRegister get_call_return_value_gp_register(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return SpasmRegister_x86_64_RAX;
        case SpasmABI_LinuxX64: return SpasmRegister_x86_64_RAX;
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

SpasmRegister get_call_return_value_fp_register(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return SpasmRegister_x86_64_XMM0;
        case SpasmABI_LinuxX64: return SpasmRegister_x86_64_XMM0;
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

size_t get_call_max_args_gp_registers(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return 4; /* RCX, RDX, R8, R9 */
        case SpasmABI_LinuxX64: return 6; /* RSI, RDI, RCX, RDX, R8, R9 */
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

size_t get_call_max_args_fp_registers(SpasmABI abi)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64: return 5; /* XMM0-XMM4 */
        case SpasmABI_LinuxX64: return 8; /* XMM0-XMM7 */
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

const SpasmRegister* get_call_args_gp_registers(SpasmABI abi, size_t* num_registers)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64:
        {
            static SpasmRegister regs[4] = {
                SpasmRegister_x86_64_RCX,
                SpasmRegister_x86_64_RDX,
                SpasmRegister_x86_64_R8,
                SpasmRegister_x86_64_R9,
            };

            *num_registers = 4;

            return regs;
        }
        case SpasmABI_LinuxX64:
        {
            static SpasmRegister regs[6] = {
                SpasmRegister_x86_64_RSI,
                SpasmRegister_x86_64_RDI,
                SpasmRegister_x86_64_RCX,
                SpasmRegister_x86_64_RDX,
                SpasmRegister_x86_64_R8,
                SpasmRegister_x86_64_R9,
            };

            *num_registers = 6;

            return regs;
        }
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}

const SpasmRegister* get_call_args_fp_registers(SpasmABI abi, size_t* num_registers)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64:
        {
            static const SpasmRegister regs[6] = {
                SpasmRegister_x86_64_XMM0,
                SpasmRegister_x86_64_XMM1,
                SpasmRegister_x86_64_XMM2,
                SpasmRegister_x86_64_XMM3,
                SpasmRegister_x86_64_XMM4,
                SpasmRegister_x86_64_XMM5,
            };

            *num_registers = 6;

            return regs;
        }
        case SpasmABI_LinuxX64:
        {
            static const SpasmRegister regs[8] = {
                SpasmRegister_x86_64_XMM0,
                SpasmRegister_x86_64_XMM1,
                SpasmRegister_x86_64_XMM2,
                SpasmRegister_x86_64_XMM3,
                SpasmRegister_x86_64_XMM4,
                SpasmRegister_x86_64_XMM5,
                SpasmRegister_x86_64_XMM6,
                SpasmRegister_x86_64_XMM7,
            };

            *num_registers = 8;

            return regs;
        }
#endif /* defined(SPASM_ENABLE_X86_64) */

        /* TODO: apple */

        default: return 0;
    }
}