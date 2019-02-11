#ifndef _appstate_h
#define _appstate_h

#include <QList.h>
#include <stdint.h>


enum ModePrimary {
  MODE_PRIMARY_PLAYING,
  MODE_PRIMARY_CONFIG,
  MODE_PRIMARY_SEQUENCER,
};

enum SettingsPrimary {
  SETTINGS_SYNTH,
};

enum Commands {
  SEQUENCER_PAUSE,
  SEQUENCER_PLAY,
  SEQUENCER_TOGGLE_PLAY,
  MODE_CHANGED_CONFIG,
  MODE_CHANGED_PLAYING,
  MODE_CHANGED_SEQUENCER,
};

enum DrumType {
DRUM_KICK,
DRUM_SNARE,
DRUM_HHC,
DRUM_CLAP,
};

enum LightState {
  LIGHT_OFF,
  LIGHT_RED,
  LIGHT_GREEN,
  LIGHT_BLUE,
  LIGHT_YELLOW,
  LIGHT_PURPLE,
};

struct LightData {
  uint8_t index;
  LightState state;
  uint8_t position;
  bool val;
};

struct Note {
  uint8_t index;
  uint8_t value;
  bool on;
};

class AppState {
public:

  ModePrimary mode_primary;

  ModePrimary get_mode_primary();
  void set_mode_primary(ModePrimary v);

  void toggle_mode_primary();

  SettingsPrimary get_settings_primary();
  void set_settings_primary(SettingsPrimary v);

  uint8_t get_settings_secondary();
  void set_settings_secondary(uint8_t v);

  QList<uint8_t> keys_pressed;
  QList<uint8_t> keys_released;

  QList<uint8_t> notes_on;
  QList<uint8_t> notes_off;

  QList<uint8_t> notes1_on;
  QList<uint8_t> notes1_off;

  QList<DrumType> drums_on;

  QList<Commands> commands;
  QList<LightData> lights_on;

  QList<Note> notes;

  uint8_t _current_instrument;

  uint8_t tempo = 120;

private:
  SettingsPrimary _settings_primary;
  uint8_t _settings_secondary;
};

#endif
