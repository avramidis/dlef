#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

file(DOWNLOAD https://github.com/catchorg/Catch2/releases/download/v2.13.4/catch.hpp ${CMAKE_CURRENT_BINARY_DIR}/catch.hpp)

function(ADD_TEST_EXE EXE_NAME SRC_NAME)
    message(STATUS "Generating ${EXE_NAME} test target")

    add_executable(${EXE_NAME})
    target_sources(${EXE_NAME} PRIVATE ${SRC_NAME})

    target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
    target_link_libraries(${EXE_NAME} PRIVATE
            ${CMAKE_PROJECT_NAME}
            ${CMAKE_PROJECT_NAME}_project_options
            ${CMAKE_PROJECT_NAME}_project_warnings)

    set_target_properties(${EXE_NAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/tests")

    add_test(NAME ${EXE_NAME} COMMAND ${EXE_NAME})
endfunction()

add_test_exe(test_bubble_sort test_bubble_sort.cpp)
