# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# Differential test of the x86_64 encoder against llvm-mc, see difftest.py

include(target_options)

find_package(Python3 COMPONENTS Interpreter)

find_program(LLVM_MC_EXECUTABLE
             NAMES llvm-mc llvm-mc-21 llvm-mc-20 llvm-mc-19 llvm-mc-18 llvm-mc-17 llvm-mc-16 llvm-mc-15)

if(NOT Python3_Interpreter_FOUND OR NOT LLVM_MC_EXECUTABLE)
    message(WARNING "python3 or llvm-mc not found, the x86_64 llvm-mc differential test is disabled")
    return()
endif()

message(STATUS "Adding spasm test : x86_64_difftest (${LLVM_MC_EXECUTABLE})")

add_executable(difftest_dump difftest_dump.c)
set_target_options(difftest_dump)
target_link_libraries(difftest_dump ${LIB_NAME})

add_test(NAME x86_64_difftest
         COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/difftest.py
                 --dump $<TARGET_FILE:difftest_dump>
                 --llvm-mc ${LLVM_MC_EXECUTABLE}
                 --known ${CMAKE_CURRENT_SOURCE_DIR}/known_differences.txt)
