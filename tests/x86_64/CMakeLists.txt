# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

add_subdirectory(encoding)

if(SPASM_WINDOWS)
    add_subdirectory(windows)
elseif(SPASM_LINUX)
    add_subdirectory(linux)
endif()
