

#ifndef _heartbeat_h
#define _heartbeat_h

#include <stdint.h>
#include <Arduino.h>

#include "base.h"

#define HEARTBEAT_TIMEOUT 1000

class Heartbeat : public Base {
    public:
        Heartbeat();
        void setup();
        void loop();
    private:
        bool _is_on;
        uint8_t _timeout;
        elapsedMillis _timer;
};

#endif
