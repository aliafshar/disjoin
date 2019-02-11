
#ifndef _encoders_h
#define _encoders_h

#include <Arduino.h>
#include <Encoder.h>
#include <stdint.h>

#include "base.h"
#include "debug.h"

#define ENCODER_COUNT 3

class Encoders : public Base {
    public:
        void setup();
        void loop();
    private:
        Encoder _encoders[ENCODER_COUNT] = {
            {30, 31},
            {26, 27},
            {28, 29},
        };

        int32_t _values[ENCODER_COUNT] = {
            0, 0, 0
        };

        int8_t code_to_value(int8_t code);
        int8_t value_to_code(int8_t value);
};


#endif
