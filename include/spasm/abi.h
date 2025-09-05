/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_ABI)
#define __SPASM_ABI

#include "spasm/register.h"

/* 
    ABIs

    https://www.thejat.in/learn/system-v-amd64-calling-convention
    https://learn.microsoft.com/en-us/cpp/build/x64-software-conventions?view=msvc-170#x64-register-usage
    https://developer.apple.com/documentation/xcode/writing-arm64-code-for-apple-platforms
*/

typedef enum
{
    SpasmABI_Invalid,
#if defined(SPASM_ENABLE_X86_64)
    SpasmABI_WindowsX64,
    SpasmABI_LinuxX64,
    SpasmABI_MacOSX64,
#endif /* defined(SPASM_ENABLE_X86_64) */

#if defined(SPASM_ENABLE_AARCH64)
    SpasmABI_MacOSAarch64,
#endif /* defined(SPASM_ENABLE_AARCH64) */
    SpasmABI_COUNT,
} SpasmABI;

SPASM_API SpasmABI spasm_get_current_abi();

SPASM_API const char* spasm_get_abi_as_string(SpasmABI abi);

/* 
    Returns the maximum number of registers that can be used simultaneously
    (can be used by a register allocator to know how many registers we can use)
*/
SPASM_API size_t get_max_available_gp_registers(SpasmABI abi);
SPASM_API size_t get_max_available_fp_registers(SpasmABI abi);

/* 
    Returns the register id of the register used to store the return value of a function call
*/
SPASM_API SpasmRegister get_call_return_value_gp_register(SpasmABI abi);
SPASM_API SpasmRegister get_call_return_value_fp_register(SpasmABI abi);

/* 
    Returns the number of registers we can use to store arguments for a function call
*/
SPASM_API size_t get_call_max_args_gp_registers(SpasmABI abi);
SPASM_API size_t get_call_max_args_fp_registers(SpasmABI abi);

/* 
    Returns the register order for arguments placement before a function call.
    The number of registers is passed to the parameter num_registers 
*/
SPASM_API const SpasmRegister* get_call_args_gp_registers(SpasmABI abi, size_t* num_registers);
SPASM_API const SpasmRegister* get_call_args_fp_registers(SpasmABI abi, size_t* num_registers);

#endif /* !defined(__SPASM_ABI) */