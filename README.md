# joybus-pio
GameCube/Nintendo 64 comms library using the RP2040's PIO

## Changes done in this fork
- Created a proper `CMakeLists` structure with `joybus_pio` as a standalone library. Build any project inside `examples` to include it.

## Usage

This library is designed and tested to work with system clock set to 130MHz for the PIO clock divider to be correct.

You can add this library in `lib_deps` if using PlatformIO (tested with arduino-pico core) or add as a git submodule if using Pico SDK.

Autogenerated API documentation can be found [here](https://jonnyhaystack.github.io/joybus-pio/)

Code examples for usage of each API can be found [here](examples/)

## License

This project is licensed under the GNU LGPL Version 3 - see the [LICENSE](LICENSE) file for details
