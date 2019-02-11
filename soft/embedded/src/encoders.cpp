

#include "encoders.h"

void Encoders::setup() {
    for (uint8_t i = 0; i < ENCODER_COUNT; i++) {
        _encoders[i].write(0);
        _values[i] = 0;
    }
}


void Encoders::loop() {
    for (uint8_t i = 0; i < ENCODER_COUNT; i++) {
        int32_t v = _encoders[i].read();
        if (v != _values[i]) {
            // encoder i has changed!
            //
            if (v > _values[i]) {
                if (i == 2) {
                    _state->tempo -= 1;
                }
                if (i == 1) {
                    //_state->key -= 1;
                }
                if (i == 0) {
                    //_state->key -= 1;
                    _state->_current_instrument -=1;
                    _state->_current_instrument = max(_state->_current_instrument, 0);
                }
            } else {
                if (i == 2) {
                    _state->tempo += 1;
                }
                if (i == 0) {
                    //_state->key -= 1;
                    _state->_current_instrument +=1;
                    _state->_current_instrument = min(_state->_current_instrument, 7);
                }
            }
            DEBUG_SERIAL_PORT.print("changed:");
            DEBUG_SERIAL_PORT.println(_state->_current_instrument);
            _values[i] = v;
        }
    }
}
