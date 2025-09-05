set(X86_64_INSTRUCTIONS_FILE "${CMAKE_CURRENT_LIST_DIR}/x86_64_instructions.c")

if(EXISTS ${X86_64_INSTRUCTIONS_FILE})
    set(BACKEND_INSTRUCTIONS_FILES ${BACKEND_INSTRUCTIONS_FILES} ${X86_64_INSTRUCTIONS_FILE} PARENT_SCOPE)
else()
    # TODO: findpython and autogen the file if it does not exist
    message(FATAL_ERROR "Cannot find the x86_64 instructions table c file")
endif()