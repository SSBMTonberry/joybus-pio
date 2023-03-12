#ifndef JOYBUS_PIO_PROJECT_JOYBUS_PIO_LIB_H
#define JOYBUS_PIO_PROJECT_JOYBUS_PIO_LIB_H

#include "gamecube_definitions.h"
#include "n64_definitions.h"
#include "joybus.h"
#include "GamecubeConsole.hpp"
#include "GamecubeController.hpp"
#include "N64Console.hpp"
#include "N64Controller.hpp"

#if USE_FAKE_PICO

#else
#include "joybus.pio.h"
#endif

#endif // JOYBUS_PIO_PROJECT_JOYBUS_PIO_LIB_H
