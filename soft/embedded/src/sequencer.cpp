
#include "sequencer.h"

void Sequencer::setup() {
  set_tempo(SEQUENCER_DEFAULT_TEMPO);
  play();
}

void Sequencer::display_chosen_drum() {
    for (uint8_t i = 0; i < 16; i++) { 
        bool on = ( _steps[i][_chosen_drum] == 1);
        _state->lights_on.push_back(LightData{1, LIGHT_GREEN, i, on});
    }

      for (uint8_t j = 0; j < 7; j++) {
        _state->lights_on.push_back(LightData{0, LIGHT_GREEN, j, (j == _chosen_drum)});
        _state->lights_on.push_back(LightData{0, LIGHT_BLUE, j, (false)});
        _state->lights_on.push_back(LightData{0, LIGHT_RED, j, (false)});

      }
}

void Sequencer::loop() {
  // read commands
  //

    if (_state->tempo != _tempo) {
        set_tempo(_state->tempo);
        DEBUG_SERIAL_PORT.print(_tempo);
        DEBUG_SERIAL_PORT.println(":tempo");
    }

  if (_state->mode_primary == MODE_PRIMARY_SEQUENCER) {



    for (uint16_t i = 0; i < _state->keys_pressed.size(); i++) {

      uint8_t k = _state->keys_pressed.at(i);
      if (k == 31) {
        _state->commands.push_back(SEQUENCER_PAUSE); 
      } else if (k==30) {
        _state->commands.push_back(SEQUENCER_TOGGLE_PLAY); 
      }
      if (k > 15) {
          _chosen_drum = ((k - 16) % 4);
          display_chosen_drum();
      } else {
        _steps[k][_chosen_drum] = !_steps[k][_chosen_drum];
        display_chosen_drum();
      }
    }
    
  }

  for (uint8_t i = 0; i < _state->commands.size(); i++) {
    Commands c = _state->commands.at(i);
    if (c == MODE_CHANGED_SEQUENCER) {
        display_chosen_drum();
    }
    else if (c == SEQUENCER_TOGGLE_PLAY) {
      _running = !_running;
      if (_running) {
        _state->lights_on.push_back(LightData{0, LIGHT_RED, 14, false});
        _state->lights_on.push_back(LightData{0, LIGHT_GREEN, 14, true});
      } else {
        _state->lights_on.push_back(LightData{0, LIGHT_GREEN, 14, true});
        _state->lights_on.push_back(LightData{0, LIGHT_RED, 14, true});
      }
    }
  }

  if (_running) {
    // which step are we on?
    uint8_t current_step = (_timer / _step_length);
    // exactly?
    uint8_t exact_time = (current_step) * _step_length;
    if (_timer >= exact_time) {
      // boing!
      // first reset the timer if needed
      if (current_step >= _step_count) {
        current_step = 0;
        _timer = 0;
        for (uint8_t i = 0; i < 16; i++) {
          _done_steps[i] = 0;
        }
      }
      //DEBUG_SERIAL_PORT.print("current:");
      //DEBUG_SERIAL_PORT.println(current_step);
      //DEBUG_SERIAL_PORT.print("stepscurrent:");
      //DEBUG_SERIAL_PORT.println(_steps[current_step][0]);

      // play the step!
      //

      if (!_done_steps[current_step]) {
        for (uint8_t i = 0; i < 4; i++) {
          if (_steps[current_step][i] == 1) {
            _state->drums_on.push_back(static_cast<DrumType>(i));
            _state->lights_on.push_back(LightData{0, LIGHT_BLUE, i + 7, true});
          } else {
            _state->lights_on.push_back(LightData{0, LIGHT_BLUE, i + 7, false});
          }
        }
        _done_steps[current_step] = 1;
        for (uint8_t i; i < 16; i++) {
          _state->lights_on.push_back(LightData{1, LIGHT_RED, i, false});
        }
        _state->lights_on.push_back(
            LightData{1, LIGHT_RED, current_step, true});
      }
    }
  }
}

// [ MINUTE                  ]
// [ BEAT            ] x BPM
// [ STEP ] x 4

void Sequencer::set_tempo(uint8_t tempo) {
  _tempo = tempo;
  _beat_length = SEQUENCER_1_MINUTE / _tempo;
  _step_length = _beat_length / 4;
}

void Sequencer::set_steps(uint8_t steps) { _step_count = steps; }

void Sequencer::play() {
  _timer = 0;
  _running = false;
}

void Sequencer::pause() { _running = false; }
