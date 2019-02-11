
#include "player.h"
#include "scales.h"
#include "appstate.h"

void Player::setup() {
}

void Player::loop() {
  _state->notes.clear();
  _state->notes_on.clear();
  _state->notes_off.clear();
  _state->notes1_on.clear();
  _state->notes1_off.clear();
  _state->drums_on.clear();
  if (_state->mode_primary == MODE_PRIMARY_PLAYING) {
    for (uint16_t i = 0; i < _state->keys_pressed.size(); i++) {
      uint8_t k = _state->keys_pressed.at(i);
      uint8_t out[3];
      if (k == 31) {
        _state->commands.push_back(SEQUENCER_PAUSE); 
      } else if (k==30) {
        _state->commands.push_back(SEQUENCER_TOGGLE_PLAY); 
      } else if (k > 15) {
        Scales::chord_for(Ionian, k - 16, 3, out); 
        for (uint8_t j = 0; j < 3; j++) {
          _state->notes.push_back(Note{_state->_current_instrument, (out[j] + 48), true});
          _state->notes_on.push_back(out[j] + 48); 
        }
      }
      else {
        Scales::chord_for(Ionian, k, 2, out); 
        for (uint8_t j = 0; j < 2; j++) {
          //_state->notes.push_back(Note{_state->_current_instrument, out[j] + 60, true});
          _state->notes1_on.push_back(out[j] + 36); 
        }
      }
    }

    for (uint16_t i = 0; i < _state->keys_released.size(); i++) {
      uint8_t k = _state->keys_released.at(i);
      uint8_t out[3];
      if (k > 15) {
        Scales::chord_for(Ionian, k - 16, 3, out); 
        for (uint8_t j = 0; j < 3; j++) {
          _state->notes.push_back(Note{_state->_current_instrument, out[j] + 48, false});
        _state->notes_off.push_back(out[j] + 48); 
        }
      } else {
        Scales::chord_for(Ionian, k, 2, out); 
        for (uint8_t j = 0; j < 2; j++) {
          _state->notes.push_back(Note{_state->_current_instrument, out[j] + 60, false});
          _state->notes1_off.push_back(out[j] + 36); 
        }
      }
    }
  }
}


