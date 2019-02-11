
#include "appstate.h"

void AppState::toggle_mode_primary() {
    if (mode_primary == MODE_PRIMARY_CONFIG) {
        mode_primary = MODE_PRIMARY_PLAYING;
    } else if (mode_primary == MODE_PRIMARY_PLAYING) {
        mode_primary = MODE_PRIMARY_SEQUENCER;
    } else {
        mode_primary = MODE_PRIMARY_CONFIG;
    }
}

ModePrimary AppState::get_mode_primary() {
    return mode_primary;
}

void AppState::set_mode_primary(ModePrimary v) {
    mode_primary = v;
}

SettingsPrimary AppState::get_settings_primary() {
    return _settings_primary;
}

void AppState::set_settings_primary(SettingsPrimary v) {
    _settings_primary = v;
}

uint8_t AppState::get_settings_secondary() {
    return _settings_secondary;
}

void AppState::set_settings_secondary(uint8_t v) {
    _settings_secondary = v;
}
