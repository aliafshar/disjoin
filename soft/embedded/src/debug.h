
#ifndef _debug_h
#define _debug_h

#include <Arduino.h>
#include <stdio.h>
#include "base.h"

#define DEBUG_SERIAL_BAUDRATE 115200
#define DEBUG_SERIAL_PORT Serial


class Debug : public Base {
    public:
        void setup();
        void loop();
};

#endif
