project(N64Controller C CXX ASM)

add_executable(
  N64Controller
  main.cpp
)

pico_generate_pio_header(N64Controller ${CMAKE_CURRENT_LIST_DIR}/../../src/joybus.pio)

target_link_libraries(N64Controller joybus_pio)

pico_enable_stdio_usb(N64Controller 1)
pico_enable_stdio_uart(N64Controller 0)

pico_add_extra_outputs(N64Controller)
