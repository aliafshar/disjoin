
#ifndef _sounds_h
#define _sounds_h

#include <Arduino.h>
#include <Audio.h>
#include <SD.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <WString.h>
#include <Wire.h>
#include <stdint.h>

#include "base.h"
#include "debug.h"
#include "appstate.h"
#include "samples/AudioSampleKick0.h"
#include "samples/AudioSampleKick1.h"
#include "samples/AudioSampleHat1.h"
#include "samples/AudioSampleSnare1.h"
#include "samples/AudioSampleClap1.h"

#define TRACK_COUNT 8 
#define VOICE_COUNT 8
#define TRACK_COUNT 8

#define SYNTH_VOICES_COUNT 16
#define SYNTH_COUNT 4

class Synth {
public:
  void connect(uint8_t index);
  bool note_on(uint8_t note);
  void note_off(uint8_t note);
  void set_waveform(uint8_t waveform);
  void set_amplitude(float amplitude);

private:
  uint8_t _synth_index;
  uint8_t _voices_used[SYNTH_VOICES_COUNT] = {0};
  uint8_t first_free_voice();
  uint8_t voice_using(uint8_t note);
};


class Drums {
public:
  void connect(uint8_t index);
  void note_on(DrumType drum);

private:
  char *_samples2[4] = {
      "samples/kick2.raw",
      "samples/snare9.raw",
      "samples/hatc4.raw",
      "samples/hato1.raw",
  };

  const unsigned int *_samples[4][4] = {
      { AudioSampleKick0, AudioSampleKick1 },
      { AudioSampleSnare1, },
      { AudioSampleHat1, },
      { AudioSampleClap1, },
  };
};


class NotePlayer {
    public:
        virtual bool note_on(uint8_t note);
        virtual bool note_off(uint8_t note);
};

class VoicePlayer : public NotePlayer {

    public:
        virtual void note_pre_on(uint8_t voice, uint8_t note);
        virtual void note_pre_off(uint8_t voice, uint8_t note);
        void connect_envs(AudioEffectEnvelope **envs);
        bool note_on(uint8_t note);
        bool note_off(uint8_t note);
        uint8_t free_voice();
        uint8_t note_voice(uint8_t note);

    private:
        AudioEffectEnvelope **_envs;
        uint8_t _note_voices[VOICE_COUNT];
        uint8_t _free_voice;

};


class Sy : public VoicePlayer {
    public:
        void note_pre_on(uint8_t voice, uint8_t note);
        void note_pre_off(uint8_t voice, uint8_t note);
        void connect_player(AudioSynthWaveform *wavs[VOICE_COUNT]);
    private:
        AudioSynthWaveform *_voices[VOICE_COUNT];
};

class Strings : public VoicePlayer {
    public:
        void note_pre_on(uint8_t voice, uint8_t note);
        void note_pre_off(uint8_t voice, uint8_t note);
        void connect_player(AudioSynthKarplusStrong **voices);
    private:
        AudioSynthKarplusStrong **_voices;
};



class Sounds : public Base {
public:
  void setup();
  void loop();

private:
  //    AudioSynthKarplusStrong strings[16];
  //    AudioSynthSimpleDrum drums[16];

  Synth _synth1;
  Synth _synth2;

  Strings _strings1;

  Drums _drums;

  Synth *_synth[SYNTH_COUNT];
  Sy _sy;

  


  uint8_t cn;
};

const float NOTE_FREQUENCIES[128] = {
    8.1758,     8.6620,    9.1770,    9.7227,    10.3009,    10.9134,
    11.5623,    12.2499,   12.9783,   13.7500,   14.5676,    15.4339,
    16.3516,    17.3239,   18.3540,   19.4454,   20.6017,    21.8268,
    23.1247,    24.4997,   25.9565,   27.5000,   29.1352,    30.8677,
    32.7032,    34.6478,   36.7081,   38.8909,   41.2034,    43.6535,
    46.2493,    48.9994,   51.9131,   55.0000,   58.2705,    61.7354,
    65.4064,    69.2957,   73.4162,   77.7817,   82.4069,    87.3071,
    92.4986,    97.9989,   103.8262,  110.0000,  116.5409,   123.4708,
    130.8128,   138.5913,  146.8324,  155.5635,  164.8138,   174.6141,
    184.9972,   195.9977,  207.6523,  220.0000,  233.0819,   246.9417,
    261.6256,   277.1826,  293.6648,  311.1270,  329.6276,   349.2282,
    369.9944,   391.9954,  415.3047,  440.0000,  466.1638,   493.8833,
    523.2511,   554.3653,  587.3295,  622.2540,  659.2551,   698.4565,
    739.9888,   783.9909,  830.6094,  880.0000,  932.3275,   987.7666,
    1046.5023,  1108.7305, 1174.6591, 1244.5079, 1318.5102,  1396.9129,
    1479.9777,  1567.9817, 1661.2188, 1760.0000, 1864.6550,  1975.5332,
    2093.0045,  2217.4610, 2349.3181, 2489.0159, 2637.0205,  2793.8259,
    2959.9554,  3135.9635, 3322.4376, 3520.0000, 3729.3101,  3951.0664,
    4186.0090,  4434.9221, 4698.6363, 4978.0317, 5274.0409,  5587.6517,
    5919.9108,  6271.9270, 6644.8752, 7040.0000, 7458.6202,  7902.1328,
    8372.0181,  8869.8442, 9397.2726, 9956.0635, 10548.0818, 11175.3034,
    11839.8215, 12543.8540};

#endif
