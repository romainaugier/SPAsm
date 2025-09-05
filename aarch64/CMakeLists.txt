set(AARCH64_INSTRUCTIONS_FILE "${CMAKE_CURRENT_LIST_DIR}/aarch64_instructions.c")

if(EXISTS ${AARCH64_INSTRUCTIONS_FILE})
    set(BACKEND_INSTRUCTIONS_FILES ${BACKEND_INSTRUCTIONS_FILES} ${AARCH64_INSTRUCTIONS_FILE} PARENT_SCOPE)
else()
    # TODO: findpython and autogen the file if it does not exist
    message(FATAL_ERROR "Cannot find the aarch64 instructions table c file")
endif()