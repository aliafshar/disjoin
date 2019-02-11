
#include "keys.h"

void Keys::setup() {
  pinMode(SHIFT1_KEY_PIN, INPUT_PULLUP);
  _shift1.attach(SHIFT1_KEY_PIN, INPUT_PULLUP);
  _shift1.interval(25);

  _bank[0].begin();
  _bank[0].begin(1);

  for (uint8_t b = 0; b < 2; b++) {
    for (uint8_t i = 0; i < 16; i++) {
      _bank[b].pinMode(i, INPUT);
      _bank[b].pullUp(i, HIGH);
    }
  }
}

void Keys::loop() {
  _state->commands.clear();
  _shift1.update();
  if (_shift1.fell()) {

        for (uint8_t i = 0; i < 16; i++) {
            _state->lights_on.push_back(LightData{1, LIGHT_GREEN, i, false});
            _state->lights_on.push_back(LightData{1, LIGHT_BLUE, i, false});
            _state->lights_on.push_back(LightData{1, LIGHT_RED, i, false});
            if (i < 14) {
            _state->lights_on.push_back(LightData{0, LIGHT_GREEN, i, false});
            _state->lights_on.push_back(LightData{0, LIGHT_BLUE, i, false});
            _state->lights_on.push_back(LightData{0, LIGHT_RED, i, false});
            }
        }
    _state->toggle_mode_primary();
    //_app->get_state();
    if (_state->mode_primary == MODE_PRIMARY_PLAYING) {
        for (uint8_t i = 0; i < 16; i++) {
            _state->lights_on.push_back(LightData{1, LIGHT_GREEN, i, false});
            _state->lights_on.push_back(LightData{1, LIGHT_BLUE, i, false});
        }
        _state->commands.push_back(MODE_CHANGED_PLAYING);
    }

    if (_state->mode_primary == MODE_PRIMARY_SEQUENCER) {
        _state->commands.push_back(MODE_CHANGED_SEQUENCER);
    }

    if (_state->mode_primary == MODE_PRIMARY_CONFIG) {
        _state->commands.push_back(MODE_CHANGED_CONFIG);
    }
  }

  // empty the buttons list on each cycle
  _state->keys_pressed.clear();
  _state->keys_released.clear();

  for (uint8_t b = 0; b < 2; b++) {
    for (uint8_t i = 0; i < 16; i++) {
      uint8_t v = _bank[b].digitalRead(i);
      uint8_t k = b * 16 + i;
      if (v != _key_values[k]) {
        _key_values[k] = v;

        if (v == LOW) {
            _state->keys_pressed.push_back(k);
        } else {
            _state->keys_released.push_back(k);
        }
      }
    }
  }

}
