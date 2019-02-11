
#include "heartbeat.h"
#include "debug.h"
#include "sounds.h"

Heartbeat::Heartbeat() {
    _is_on = false;
}

void Heartbeat::setup() {
    _timer = 0;
    pinMode(LED_BUILTIN, OUTPUT);
}

void Heartbeat::loop() {
    if (_timer > HEARTBEAT_TIMEOUT) {
        DEBUG_SERIAL_PORT.println(_state->get_mode_primary());
        DEBUG_SERIAL_PORT.println(AudioMemoryUsageMax());


        _is_on = !_is_on;
        _timer = 0;
        if (_is_on) {
            digitalWrite(LED_BUILTIN, HIGH);
        } else {
            digitalWrite(LED_BUILTIN, LOW);
        }
    }
}
