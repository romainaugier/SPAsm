# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

include(GNUInstallDirs)
include(target_options)
include(spasm_runtime)

add_executable(${ASM_NAME} main.c)
set_target_options(${ASM_NAME})
set_target_properties(${ASM_NAME} PROPERTIES C_STANDARD 11)
target_link_libraries(${ASM_NAME} ${LIB_NAME})

spasm_copy_runtime(${ASM_NAME})

install(TARGETS ${ASM_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
