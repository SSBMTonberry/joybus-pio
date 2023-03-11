project(joybus_pio C CXX ASM)

add_library(joybus_pio GamecubeController.cpp GamecubeConsole.cpp N64Controller.cpp N64Console.cpp joybus.c)
target_link_libraries(joybus_pio pico_stdlib hardware_pio)