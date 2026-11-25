/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/register.h"

#if defined(SPASM_ENABLE_X86_64)
extern SpasmRegister spasm_x86_64_register_from_string(const char* s, size_t s_sz);
#endif /* defined(SPASM_ENABLE_X86_64) */

SpasmRegister spasm_register_from_string(const char* s, size_t s_sz)
{
#if defined(SPASM_ENABLE_X86_64)
    SpasmRegister reg = spasm_x86_64_register_from_string(s, s_sz);

    if(reg != SpasmRegister_Invalid)
        return reg;
#endif /* defined(SPASM_ENABLE_X86_64) */

    return SpasmRegister_Invalid;
}
