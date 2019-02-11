
#include <stdint.h>
#include <MD_MAX72xx.h>

#include "base.h"

#define LIGHTS_MX_COUNT 2

struct Position {
  int row;
  int col;
};

struct Light {
  Position green;
  Position blue;
  Position red;
};


class Lights : public Base {

  public:
    Lights();
    void setup();
    void loop();
    void setRed(uint8_t, int position, bool val);
    void setGreen(uint8_t, int position, bool val);
    void setBlue(uint8_t, int position, bool val);
    void setYellow(uint8_t, int position, bool val);
    void setPurple(uint8_t, int position, bool val);

  private:
  // MD_MAX72XX(DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES)

  MD_MAX72XX _mx[2] = {
    { MD_MAX72XX::GENERIC_HW, 2, 3, 4, 1, },
    { MD_MAX72XX::GENERIC_HW, 5, 24, 25, 1, }, 
  };

  Light _lights[16];

  void display_playing_lights();

};
