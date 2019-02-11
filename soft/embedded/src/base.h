
#ifndef _base_h
#define _base_h

#include "appstate.h"

class App; // Forward declaration.

class Base {
    public:
        virtual void setup();
        virtual void loop();
        void set_state(AppState *state);
        void set_app(App *app);
    protected:
        AppState *_state;
        App *_app;
};

#endif
