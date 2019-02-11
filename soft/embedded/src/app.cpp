
#include "app.h"

void App::setup() {

    _mods[0] = &_heartbeat;
    _mods[1] = &_debug;
    _mods[2] = &_keys;
    _mods[3] = &_encoders;
    _mods[4] = &_player;
    _mods[5] = &_sequencer;
    _mods[6] = &_sounds;
    _mods[7] = &_lignts;

    for (uint8_t i = 0; i < APP_MODULE_COUNT; i++) {
        _mods[i]->set_app(this);
        _mods[i]->set_state(&_state);
        _mods[i]->setup();
    }

}

void App::loop() {
    for (uint8_t i = 0; i < APP_MODULE_COUNT; i++) {
        _mods[i]->loop();
    }
}

AppState* App::get_state() {
    return &_state;
}
