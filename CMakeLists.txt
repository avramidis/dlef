#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

cmake_minimum_required(VERSION 3.16)
project(mysort
        VERSION 1.0.0
        DESCRIPTION "Sort algorithms example implementations.")

# Project dependencies
include(cmake/ProjectDependencies.cmake)

# Cmake project settings
include(cmake/StandardProjectSettings.cmake)

# Standard compiler warnings
include(cmake/CompilerWarnings.cmake)
add_library(${CMAKE_PROJECT_NAME}_project_warnings INTERFACE)
set_project_warnings(${CMAKE_PROJECT_NAME}_project_warnings)

# Project settings
include(cmake/StandardProjectSettings.cmake)
add_library(${CMAKE_PROJECT_NAME}_project_options INTERFACE)
target_compile_features(${CMAKE_PROJECT_NAME}_project_options INTERFACE cxx_std_20)

add_subdirectory(src)
add_subdirectory(examples)
enable_testing()
add_subdirectory(tests)
add_subdirectory(benchmarks)