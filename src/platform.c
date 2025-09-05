/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/platform.h"

SpasmPlatform spasm_get_current_platform()
{
#if defined(SPASM_WIN)
    return SpasmPlatform_Windows;
#elif defined(SPASM_LINUX)
    return SpasmPlatform_Linux;
#elif defined(SPASM_MACOS)
    return SpasmPlatform_MacOS;
#else
    return SpasmPlatform_Invalid;
#endif /* defined(SPASM_WIN) */
}

const char* spasm_get_platform_as_string(SpasmPlatform platform)
{
    switch(platform)
    {
        case SpasmPlatform_Windows: return "windows";
        case SpasmPlatform_Linux: return "linux";
        case SpasmPlatform_MacOS: return "macos";
        default: return "invalid";
    }
}

SpasmISA spasm_get_current_isa()
{
#if defined(SPASM_X86_64) && defined(SPASM_ENABLE_X86_64)
    return SpasmISA_x86_64;
#elif defined(SPASM_AARCH64) && defined(SPASM_ENABLE_AARCH64)
    return SpasmISA_aarch64;
#else
    return SpasmISA_Invalid;
#endif /* defined(SPASM_X86_64) && defined(SPASM_ENABLE_X86_64) */
}

const char* spasm_get_isa_as_string(SpasmISA isa)
{
    switch(isa)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmISA_x86_64: return "x86_64";
#endif /* defined(SPASM_ENABLE_X86_64) */

#if defined(SPASM_ENABLE_AARCH64)
        case SpasmISA_aarch64: return "aarch64";
#endif /* defined(SPASM_ENABLE_AARCH64) */

        default: return "invalid";
    }
}