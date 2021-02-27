#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

function(ADD_BENCHMARK_EXE EXE_NAME SRC_NAME)
    message(STATUS "Generating ${EXE_NAME} benchmark target")

    add_executable(${EXE_NAME})
    target_sources(${EXE_NAME} PRIVATE ${SRC_NAME})

    target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
    target_link_libraries(${EXE_NAME} PRIVATE
            ${CMAKE_PROJECT_NAME}
            benchmark::benchmark
            benchmark::benchmark_main
            ${CMAKE_PROJECT_NAME}_project_options
            ${CMAKE_PROJECT_NAME}_project_warnings)

    set_target_properties(${EXE_NAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/benchmarks")
endfunction()

add_benchmark_exe(benchmark_bubble_sort benchmark_bubble_sort.cpp)
