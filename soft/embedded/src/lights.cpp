

#include "debug.h"
#include "lights.h"

Lights::Lights() {
  for (int k = 0; k < 16; k++) {
    int rm = (k % 2) * 3;
    _lights[k] = Light{Position{rm, k / 2}, Position{rm + 1, k / 2},
                       Position{rm + 2, k / 2}};
  }
}

void Lights::setup() {
  for (uint8_t i = 0; i < LIGHTS_MX_COUNT; i++) {
    _mx[i].begin();
    _mx[i].control(0, 1, MD_MAX72XX::SHUTDOWN, MD_MAX72XX::OFF);
    _mx[i].control(0, 1, MD_MAX72XX::DECODE, MD_MAX72XX::OFF);
    _mx[i].control(0, 1, MD_MAX72XX::SCANLIMIT, 5);
    _mx[i].control(MD_MAX72XX::INTENSITY, 7);
    _mx[i].clear(0, 1);
  }

  _mx[0].control(0, 1, MD_MAX72XX::TEST, MD_MAX72XX::ON);
  _mx[1].control(0, 1, MD_MAX72XX::TEST, MD_MAX72XX::ON);
  delay(200);
  _mx[0].control(0, 1, MD_MAX72XX::TEST, MD_MAX72XX::OFF);
  _mx[1].control(0, 1, MD_MAX72XX::TEST, MD_MAX72XX::OFF);
  display_playing_lights();

}

void Lights::display_playing_lights() {
  setRed(0, 0, true);
  setGreen(0, 0, true);
  setBlue(0, 0, true);
  setYellow(0, 1, true);
  setPurple(0, 2, true);
  setBlue(0, 3, true);
  setGreen(0, 4, true);
  setRed(0, 5, true);
  setYellow(0, 6, true);
}

void Lights::loop() {
  for (uint8_t i = 0; i < _state->lights_on.size(); i++) {
    LightData m = _state->lights_on.at(i);
    if (m.state == LIGHT_RED) {
      setRed(m.index, m.position, m.val);
    } else if (m.state == LIGHT_GREEN) {
      setGreen(m.index, m.position, m.val);
    } else if (m.state == LIGHT_BLUE) {
      setBlue(m.index, m.position, m.val);
    } else if (m.state == LIGHT_YELLOW) {
      setYellow(m.index, m.position, m.val);
    }
  }
  _state->lights_on.clear();

  for (uint32_t i = 0; i < _state->commands.size(); i++) {
    Commands c = _state->commands.at(i);
    if (c == MODE_CHANGED_PLAYING) {
      display_playing_lights(); 
    }
  }
}

void Lights::setRed(uint8_t index, int position, bool val) {
  _mx[index].setPoint(_lights[position].red.col, _lights[position].red.row,
                      val);
}

void Lights::setBlue(uint8_t index, int position, bool val) {
  _mx[index].setPoint(_lights[position].blue.col, _lights[position].blue.row,
                      val);
}

void Lights::setGreen(uint8_t index, int position, bool val) {
  _mx[index].setPoint(_lights[position].green.col, _lights[position].green.row,
                      val);
}

void Lights::setYellow(uint8_t index, int position, bool val) {
  setGreen(index, position, val);
  setRed(index, position, val);
}

void Lights::setPurple(uint8_t index, int position, bool val) {
  setRed(index, position, val);
  setBlue(index, position, val);
}

