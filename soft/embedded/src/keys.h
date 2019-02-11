#ifndef _keys_h
#define _keys_h

#include "base.h"
#include "debug.h"
#include <Adafruit_MCP23017.h>
#include <Arduino.h>
#include <Bounce2.h>

#define SHIFT1_KEY_PIN 39

class Keys : public Base {
public:
    void setup();
    void loop();

private:
    Bounce _shift1;

    Adafruit_MCP23017 _bank[2];

    uint8_t _key_values[32] = {
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
        HIGH,
    };
};

#endif
