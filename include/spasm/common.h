/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM)
#define __SPASM

#if defined(_MSC_VER)
#define SPASM_MSVC
#pragma warning(disable:4711) /* function selected for automatic inline expansion */
#define _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS
#elif defined(__GNUC__)
#define SPASM_GCC
#elif defined(__clang__)
#define SPASM_CLANG
#endif /* defined(_MSC_VER) */

#define SPASM_STRIFY(x) #x
#define SPASM_STRIFY_MACRO(m) SPASM_STRIFY(m)

#if !defined(SPASM_VERSION_MAJOR)
#define SPASM_VERSION_MAJOR 0
#endif /* !defined(SPASM_VERSION_MAJOR) */

#if !defined(SPASM_VERSION_MINOR)
#define SPASM_VERSION_MINOR 0
#endif /* !defined(SPASM_VERSION_MINOR) */

#if !defined(SPASM_VERSION_PATCH)
#define SPASM_VERSION_PATCH 0
#endif /* !defined(SPASM_VERSION_PATCH) */

#if !defined(SPASM_VERSION_REVISION)
#define SPASM_VERSION_REVISION 0
#endif /* !defined(SPASM_VERSION_REVISION) */

#define SPASM_VERSION_STR SPASM_STRIFY_MACRO(SPASM_VERSION_MAJOR)"." \
                              SPASM_STRIFY_MACRO(SPASM_VERSION_MINOR)"." \
                              SPASM_STRIFY_MACRO(SPASM_VERSION_PATCH)"." \
                              SPASM_STRIFY_MACRO(SPASM_VERSION_REVISION)

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

#if INTPTR_MAX == INT64_MAX || defined(__x86_64__)
#define SPASM_X64
#define SPASM_SIZEOF_PTR 8
#elif INTPTR_MAX == INT32_MAX
#define SPASM_X86
#define SPASM_SIZEOF_PTR 4
#endif /* INTPTR_MAX == INT64_MAX || defined(__x86_64__) */

/* https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170 */
#if defined(__x86_64__) || defined(_M_AMD64)
#define SPASM_X86_64
#elif defined(__aarch64__)
#define SPASM_AARCH64
#else
#error "Unsupported architecture (SPAsm only supports x86_64 and aarch64)"
#endif /* defined(__x86_64__) */

/* https://sourceforge.net/p/predef/wiki/OperatingSystems */

#if defined(_WIN32)
#define SPASM_WIN
#if !defined(WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN
#endif /* !defined(WIN32_LEAN_AND_MEAN) */
#if !defined(NOMINMAX)
#define NOMINMAX
#endif /* !defined(NOMINMAX) */
#if defined(SPASM_X64)
#define SPASM_PLATFORM_STR "WIN64"
#else
#define SPASM_PLATFORM_STR "WIN32"
#endif /* defined(SPASM_x64) */
#elif defined(__linux__)
#define SPASM_LINUX
#if defined(SPASM_X64)
#define SPASM_PLATFORM_STR "LINUX64"
#else
#define SPASM_PLATFORM_STR "LINUX32"
#endif /* defined(SPASM_X64) */
#elif defined(__APPLE__)
#define SPASM_MACOS
#endif /* defined(_WIN32) */

#if defined(SPASM_WIN)
#if defined(SPASM_MSVC)
#define SPASM_EXPORT __declspec(dllexport)
#define SPASM_IMPORT __declspec(dllimport)
#elif defined(SPASM_GCC) || defined(SPASM_CLANG)
#define SPASM_EXPORT __attribute__((dllexport))
#define SPASM_IMPORT __attribute__((dllimport))
#endif /* defined(SPASM_MSVC) */
#elif defined(SPASM_LINUX)
#define SPASM_EXPORT __attribute__((visibility("default")))
#define SPASM_IMPORT
#endif /* defined(SPASM_WIN) */

#if defined(SPASM_MSVC)
#define SPASM_FORCE_INLINE __forceinline
#define SPASM_LIB_ENTRY
#define SPASM_LIB_EXIT
#elif defined(SPASM_GCC)
#define SPASM_FORCE_INLINE inline __attribute__((always_inline))
#define SPASM_LIB_ENTRY __attribute__((constructor))
#define SPASM_LIB_EXIT __attribute__((destructor))
#elif defined(SPASM_CLANG)
#define SPASM_FORCE_INLINE __attribute__((always_inline))
#define SPASM_LIB_ENTRY __attribute__((constructor))
#define SPASM_LIB_EXIT __attribute__((destructor))
#endif /* defined(SPASM_MSVC) */

#if defined(SPASM_BUILD_SHARED)
#define SPASM_API SPASM_EXPORT
#else
#define SPASM_API SPASM_IMPORT
#endif /* defined(SPASM_BUILD_SHARED) */

#if defined(SPASM_WIN)
#define SPASM_FUNCTION __FUNCTION__
#elif defined(SPASM_GCC) || defined(SPASM_CLANG)
#define SPASM_FUNCTION __PRETTY_FUNCTION__
#endif /* SPASM_WIN */

#define SPASM_CONCAT_(prefix, suffix)     prefix##suffix
#define SPASM_CONCAT(prefix, suffix)      SPASM_CONCAT_(prefix, suffix)

#if defined(DEBUG_BUILD)
#define SPASM_ASSERT(expr, message) if(!(expr)) { fprintf(stderr, "Assertion failed in file %s at line %d: %s", __FILE__, __LINE__, message); abort(); }
#else
#define SPASM_ASSERT(expr, message)
#endif /* defined(DEBUG_BUILD) */

#define SPASM_STATIC_ASSERT(expr)        \
    struct CONCAT(__outscope_assert_, __COUNTER__)      \
    {                                                   \
        char                                            \
        outscope_assert                                 \
        [2*(expr)-1];                                   \
                                                        \
    } CONCAT(__outscope_assert_, __COUNTER__)

#define SPASM_NOT_IMPLEMENTED fprintf(stderr, "Function " SPASM_FUNCTION " not implemented"); exit(1);

#define SPASM_UNUSED(x) ((void)x)

#if defined(SPASM_MSVC)
#define SPASM_PACKED_STRUCT(__struct__) __pragma(pack(push, 1)) __struct__ __pragma(pack(pop))
#elif defined(SPASM_GCC) || defined(SPASM_CLANG)
#define SPASM_PACKED_STRUCT(__struct__) __struct__ __attribute__((__packed__))
#else
#define SPASM_PACKED_STRUCT(__struct__) __struct__
#endif /* defined(SPASM_MSVC) */

#if defined(SPASM_MSVC)
#define dump_struct(s)
#elif defined(SPASM_CLANG)
#define dump_struct(s) __builtin_dump_struct(s, printf)
#elif defined(SPASM_GCC)
#define dump_struct(s)
#endif /* defined(SPASM_MSVC) */

#if defined(DEBUG_BUILD)
#define SPASM_DEBUG 1
#else
#define SPASM_DEBUG 0
#endif /* defined(DEBUG_BUILD) */

#define SPASM_CPP_ENTER
#define SPASM_CPP_END

#if defined(SPASM_MSVC)
#define SPASM_TYPEOF(x) (__typeof__(x))
#elif defined(SPASM_GCC)
#define SPASM_TYPEOF(x) (typeof (x))
#endif /* defined(SPASM_MSVC) */

#define SPASM_ATEXIT_REGISTER(__func__, __exit__)                   \
        int res_##__func__ = atexit(__func__);                                     \
        if(res_##__func__ != 0)                                                    \
        {                                                                          \
            fprintf(stderr, "Cannot register function \""#__func__"\" in atexit"); \
            if(__exit__) exit(1);                                                  \
        }

#endif /* !defined(__SPASM) */
