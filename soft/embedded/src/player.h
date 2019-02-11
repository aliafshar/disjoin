#ifndef _player_h
#define _player_h

#include <stdint.h>

#include "base.h"
#include "appstate.h"

enum InstrumentTypes {
  DRUMS,
  SYNTH,
  STRINGS,
  SAMPLES,
  BASS,
};

class Instrument {
  uint8_t key;
  uint8_t octave;
  InstrumentTypes type;
};

class Player : public Base {
  public:
    void setup();
    void loop();

  private:
    Instrument _instruments[8];

};

#endif
