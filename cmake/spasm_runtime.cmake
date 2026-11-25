# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# Copies the dlls (libspasm, libromano and the MSVC ASan runtime) and the libspasm pdb next to a Windows
# executable
function(spasm_copy_runtime target)
    if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
        get_filename_component(CL_DIR ${CMAKE_C_COMPILER} DIRECTORY)

        set(ASAN_COPY_COMMAND
            ${CMAKE_COMMAND} -E copy_if_different ${CL_DIR}/clang_rt.asan_dynamic-x86_64.dll $<TARGET_FILE_DIR:${target}>
        )

        add_custom_command(
            TARGET ${target} POST_BUILD
            COMMAND "$<$<CONFIG:Debug,RelWithDebInfo>:${ASAN_COPY_COMMAND}>"
            COMMAND_EXPAND_LISTS
        )

        set(PDB_COPY_COMMAND
            ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE_DIR:${LIB_NAME}>/$<TARGET_FILE_BASE_NAME:${LIB_NAME}>.pdb $<TARGET_FILE_DIR:${target}>
        )

        add_custom_command(
            TARGET ${target} POST_BUILD
            COMMAND "$<$<CONFIG:Debug,RelWithDebInfo>:${PDB_COPY_COMMAND}>"
            COMMAND_EXPAND_LISTS
        )
    endif()

    if(WIN32)
        add_custom_command(
            TARGET ${target} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
                $<TARGET_RUNTIME_DLLS:${target}>
                $<TARGET_FILE_DIR:${target}>
            COMMAND_EXPAND_LISTS
        )
    endif()
endfunction()
