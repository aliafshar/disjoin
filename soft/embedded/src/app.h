
#ifndef _app_h
#define _app_h

#include "appstate.h"
#include "heartbeat.h"
#include "debug.h"
#include "sequencer.h"
#include "sounds.h"
#include "encoders.h"
#include "keys.h"
#include "player.h"
#include "lights.h"

#define APP_MODULE_COUNT 8

class App {
    public:
        void setup();
        void loop();
        AppState* get_state();

    private:
        AppState _state;
        Heartbeat _heartbeat;
        Debug _debug;
        Sequencer _sequencer;
        Sounds _sounds;
        Encoders _encoders;
        Keys _keys;
        Player _player;
        Lights _lignts;
        Base *_mods[APP_MODULE_COUNT];

};

#endif
