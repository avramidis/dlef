#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

function(ADD_EXAMPLE EXE_NAME SRC_NAME)
    message(STATUS "Generating ${EXE_NAME} example target")

    add_executable(${EXE_NAME})
    target_sources(${EXE_NAME} PRIVATE ${SRC_NAME})

    target_link_libraries(${EXE_NAME} PRIVATE
            ${CMAKE_PROJECT_NAME}
            ${CMAKE_PROJECT_NAME}_project_options
            ${CMAKE_PROJECT_NAME}_project_warnings)

    set_target_properties(${EXE_NAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/examples")
endfunction()

add_example(example_bubble_sort bubble_sort.cpp)