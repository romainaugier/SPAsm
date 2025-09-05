# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

include(CMakePrintHelpers)

cmake_minimum_required(VERSION 3.15)

project(spasm VERSION ${VERSION})

option(ENABLE_X86_64 "Enable x86_64 backend" ON)
option(ENABLE_AARCH64 "Enable aarch64 backend" OFF) # off for now, will work on it when I get a mac

set(LIB_NAME "lib${PROJECT_NAME}")
set(ASM_NAME ${PROJECT_NAME})
set(DISASM_NAME "di${PROJECT_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_VERBOSE_MAKEFILE ON)

if(RUN_TESTS EQUAL 1)
    message(STATUS "RUN_TESTS enabled, building and running tests")
    enable_testing()
endif()

set(libromano_DIR "${CMAKE_SOURCE_DIR}/ext/libromano/install/cmake")
find_package(libromano)

set(BACKEND_INSTRUCTIONS_FILES "")

if(ENABLE_X86_64)
    add_subdirectory(x86_64)
endif()

if(ENABLE_AARCH64)
    add_subdirectory(aarch64)
endif()

add_subdirectory(src)

if(RUN_TESTS EQUAL 1)
    add_subdirectory(tests)
endif()