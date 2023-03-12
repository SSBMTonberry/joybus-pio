project(joybus_pio_tests)

add_compile_definitions(USE_FAKE_PICO)

# Will force regular GCC for the tests
if(DEFINED ENV{HOST_CXX_COMPILER})
    set(CMAKE_CXX_COMPILER $ENV{HOST_CXX_COMPILER})
else()
    set(CMAKE_CXX_COMPILER "g++")
endif()

set(CMAKE_CXX_FLAGS "")

add_executable(joybus_pio_tests ${PROJECT_SOURCE_DIR}/main_tests.cpp)