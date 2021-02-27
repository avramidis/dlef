#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis~gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

include(GNUInstallDirs)
add_library(${CMAKE_PROJECT_NAME} SHARED)

target_sources(${CMAKE_PROJECT_NAME} PRIVATE
        bubble_sort.cpp)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>/..
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
        ${CMAKE_PROJECT_NAME}_project_options
        ${CMAKE_PROJECT_NAME}_project_warnings)

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

#if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
#    target_compile_definitions(cxxplot PUBLIC cxxplot_EXPORT)
#
#    if (${CMAKE_PROJECT_NAME}_ENABLE_EXAMPLES)
#        add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/examples/${CMAKE_PROJECT_NAME}.dll
#                COMMAND ${CMAKE_COMMAND} -E copy "$<TARGET_FILE:${CMAKE_PROJECT_NAME}>" "$<TARGET_FILE_DIR:plot_1>"
#                VERBATIM)
#        add_custom_target(copyddlexamples ALL
#                DEPENDS ${CMAKE_BINARY_DIR}/examples/cxxplot.dll cxxplot
#                VERBATIM)
#    endif ()
#
#    if (CXXPLOT_ENABLE_TESTS)
#        add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/tests/cxxplot.dll
#                COMMAND ${CMAKE_COMMAND} -E copy "$<TARGET_FILE:cxxplot>" "$<TARGET_FILE_DIR:test_python_interpreter>"
#                VERBATIM)
#        add_custom_target(copyddltests ALL
#                DEPENDS ${CMAKE_BINARY_DIR}/tests/cxxplot.dll cxxplot
#                VERBATIM)
#    endif ()
#endif ()
#
#install(TARGETS ${CMAKE_PROJECT_NAME} EXPORT ${CMAKE_PROJECT_NAME}Targets
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT ${CMAKE_PROJECT_NAME}_RunTime
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT ${CMAKE_PROJECT_NAME}_RunTime NAMELINK_COMPONENT ${CMAKE_PROJECT_NAME}_Development
#        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT ${CMAKE_PROJECT_NAME}_Development
#        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
#
#install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
#        TYPE INCLUDE
#        FILES_MATCHING
#        PATTERN *.hpp
#        PERMISSIONS OWNER_READ OWNER_WRITE
#        GROUP_READ
#        WORLD_READ)
#
#install(FILES ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}_export.h
#        TYPE INCLUDE
#        PERMISSIONS OWNER_READ OWNER_WRITE
#        GROUP_READ
#        WORLD_READ)
#
#install(EXPORT ${CMAKE_PROJECT_NAME}Targets
#        NAMESPACE ${CMAKE_PROJECT_NAME}::
#        FILE cxxplotConfig.cmake
#        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${CMAKE_PROJECT_NAME})
#
#include(CMakePackageConfigHelpers)
#write_basic_package_version_file(
#        ${CMAKE_PROJECT_NAME}ConfigVersion.cmake
#        VERSION ${PROJECT_VERSION}
#        COMPATIBILITY SameMajorVersion)
#
#install(FILES ${PROJECT_BINARY_DIR}/source/${CMAKE_PROJECT_NAME}ConfigVersion.cmake
#        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${CMAKE_PROJECT_NAME})