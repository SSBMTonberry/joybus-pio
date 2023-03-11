project(N64Console C CXX ASM)

add_executable(
  N64Console
  main.cpp
)

pico_generate_pio_header(N64Console ${CMAKE_CURRENT_LIST_DIR}/../../src/joybus.pio)

target_link_libraries(N64Console joybus_pio)

pico_enable_stdio_usb(N64Console 1)
pico_enable_stdio_uart(N64Console 0)

pico_add_extra_outputs(N64Console)
