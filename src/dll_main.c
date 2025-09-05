/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* # All rights reserved. */

#include "spasm/common.h"

#if SPASM_DEBUG
#include <stdio.h>
#endif /* SPASM_DEBUG */

#if defined(SPASM_WIN)
#include <Windows.h>
#endif /* defined(SPASM_WIN) */

void SPASM_LIB_ENTRY lib_entry(void)
{
#if SPASM_DEBUG
    printf("spasm entry\n");
#endif /* SPASM_DEBUG */
}

void SPASM_LIB_EXIT lib_exit(void)
{
#if SPASM_DEBUG
    printf("spasm exit\n");
#endif /* SPASM_DEBUG */
}

#if defined(SPASM_WIN)
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) 
{
    (void)hModule;
    (void)lpReserved;

    switch(ul_reason_for_call) 
    {
        case DLL_PROCESS_ATTACH:
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
        case DLL_PROCESS_DETACH:
            lib_exit();
            break;
    }

    return TRUE;
}
#endif /* defined(SPASM_WIN) */