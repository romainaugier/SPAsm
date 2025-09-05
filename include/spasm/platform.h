/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_PLATFORM)
#define __SPASM_PLATFORM

#include "spasm/common.h"

typedef enum
{
    SpasmPlatform_Invalid,
    SpasmPlatform_Windows,
    SpasmPlatform_Linux,
    SpasmPlatform_MacOS,
} SpasmPlatform;

SPASM_API SpasmPlatform spasm_get_current_platform();

SPASM_API const char* spasm_get_platform_as_string(SpasmPlatform platform);

typedef enum
{
    SpasmISA_Invalid,
#if defined(SPASM_ENABLE_X86_64)
    SpasmISA_x86_64,
#endif /* defined(SPASM_ENABLE_X86_64) */
    
#if defined(SPASM_ENABLE_AARCH64)
    SpasmISA_aarch64,
#endif /* defined(SPASM_ENABLE_X86_64) */
} SpasmISA;

SPASM_API SpasmISA spasm_get_current_isa();

SPASM_API const char* spasm_get_isa_as_string(SpasmISA isa);

#endif /* !defined(__SPASM_PLATFORM) */
