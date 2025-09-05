/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/jit.h"
#include "spasm/abi.h"
#include "spasm/common.h"
#include "spasm/error.h"

#if defined(SPASM_ENABLE_X86_64)
extern bool spasm_windows_x64_jit(SpasmInstructions*, SpasmByteCode*, SpasmData*);
extern bool spasm_linux_x64_jit(SpasmInstructions*, SpasmByteCode*, SpasmData*);
#endif /* defined(SPASM_ENABLE_X86_64) */

static SpasmJitAssembler g_jit_assemblers[SpasmABI_COUNT] = {
    NULL,

#if defined(SPASM_ENABLE_X86_64)
    spasm_windows_x64_jit,
    spasm_linux_x64_jit,
    NULL,
#endif /* defined(SPASM_ENABLE_X86_64) */

#if defined(SPASM_ENABLE_AARCH64)
    NULL,
#endif /* defined(SPASM_ENABLE_AARCH64) */
};

SpasmJitAssembler spasm_get_jit_assembler(SpasmABI abi)
{
    SPASM_ASSERT(abi < SpasmABI_COUNT, "ABI is not registered in SpasmABI");

    /* Return NULL anyway for Release code */
    if(abi >= SpasmABI_COUNT)
    {
        spasm_error("Unknown backend (code: %d)", abi);
        return NULL;
    }

    return g_jit_assemblers[abi];
}