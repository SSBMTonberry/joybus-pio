cmake_minimum_required(VERSION 3.13)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(PICO_SDK_FETCH_FROM_GIT 1)
include(cmake/pico_sdk_import.cmake)

project(joybus_pio_project CXX C ASM)

pico_sdk_init()

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/libs)

add_subdirectory(src)
add_subdirectory(examples)

# Requires Linux and GCC for now.
add_subdirectory(tests)
