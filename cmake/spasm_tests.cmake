# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

include(target_options)
include(spasm_runtime)

# Adds one test executable per test_*.c file of the calling directory
function(spasm_add_test_directory)
    file(GLOB_RECURSE TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test_*.c)

    foreach(test_file ${TEST_FILES})
        get_filename_component(TESTNAME ${test_file} NAME_WLE)
        message(STATUS "Adding spasm test : ${TESTNAME}")

        add_executable(${TESTNAME} ${test_file})
        set_target_options(${TESTNAME})
        target_link_libraries(${TESTNAME} ${LIB_NAME})

        add_test(NAME ${TESTNAME} COMMAND ${TESTNAME})

        spasm_copy_runtime(${TESTNAME})
    endforeach()
endfunction()
