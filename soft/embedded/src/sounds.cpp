
#include "sounds.h"

// Use these with the Teensy 3.5 & 3.6 SD card
#define SDCARD_CS_PIN    BUILTIN_SDCARD
#define SDCARD_MOSI_PIN  11  // not actually used
#define SDCARD_SCK_PIN   13  // not actually used




AudioPlayMemory         _au_memsm_player[VOICE_COUNT];
AudioMixer4             _au_memsm_mixer1[2];
AudioMixer4             _au_memsm_mixer;
AudioConnection         _au_memsm_conn[] = {
  { _au_memsm_player[0], 0, _au_memsm_mixer1[0], 0, },
  { _au_memsm_player[1], 0, _au_memsm_mixer1[0], 1, },
  { _au_memsm_player[2], 0, _au_memsm_mixer1[0], 2, },
  { _au_memsm_player[3], 0, _au_memsm_mixer1[0], 3, },
  { _au_memsm_player[4], 0, _au_memsm_mixer1[1], 0, },
  { _au_memsm_player[5], 0, _au_memsm_mixer1[1], 1, },
  { _au_memsm_player[6], 0, _au_memsm_mixer1[1], 2, },
  { _au_memsm_player[7], 0, _au_memsm_mixer1[1], 3, },
  { _au_memsm_mixer1[0], 0, _au_memsm_mixer, 0,     },
  { _au_memsm_mixer1[1], 0, _au_memsm_mixer, 1,     },
}; 


AudioPlaySdRaw          _au_rawsd_player[VOICE_COUNT];
AudioMixer4             _au_rawsd_mixer1[2];
AudioMixer4             _au_rawsd_mixer;
AudioConnection         _au_rawsd_conn[] = {
   { _au_rawsd_player[0], 0, _au_rawsd_mixer1[0], 0, },
   { _au_rawsd_player[1], 0, _au_rawsd_mixer1[0], 1, },
   { _au_rawsd_player[2], 0, _au_rawsd_mixer1[0], 2, },
   { _au_rawsd_player[3], 0, _au_rawsd_mixer1[0], 3, },
   { _au_rawsd_player[4], 0, _au_rawsd_mixer1[1], 0, },
   { _au_rawsd_player[5], 0, _au_rawsd_mixer1[1], 1, },
   { _au_rawsd_player[6], 0, _au_rawsd_mixer1[1], 2, },
   { _au_rawsd_player[7], 0, _au_rawsd_mixer1[1], 3, },
   { _au_rawsd_mixer1[0], 0, _au_rawsd_mixer, 0,     },
   { _au_rawsd_mixer1[1], 0, _au_rawsd_mixer, 1,     },
}; 



AudioSynthWaveform      _au_wavs1_player[VOICE_COUNT];
AudioEffectEnvelope     _au_wavs1_envs[VOICE_COUNT];
AudioMixer4             _au_wavs1_mixer1[2];
AudioMixer4             _au_wavs1_mixer;
AudioConnection         _au_wavs1_conn[] = {
   { _au_wavs1_player[0], 0, _au_wavs1_envs[0],   0, },
   { _au_wavs1_player[1], 0, _au_wavs1_envs[1],   0, },
   { _au_wavs1_player[2], 0, _au_wavs1_envs[2],   0, },
   { _au_wavs1_player[3], 0, _au_wavs1_envs[3],   0, },
   { _au_wavs1_player[4], 0, _au_wavs1_envs[4],   0, },
   { _au_wavs1_player[5], 0, _au_wavs1_envs[5],   0, },
   { _au_wavs1_player[6], 0, _au_wavs1_envs[6],   0, },
   { _au_wavs1_player[7], 0, _au_wavs1_envs[7],   0, },
   { _au_wavs1_envs[0],   0, _au_wavs1_mixer1[0], 0, },
   { _au_wavs1_envs[1],   0, _au_wavs1_mixer1[0], 1, },
   {  _au_wavs1_envs[2],   0, _au_wavs1_mixer1[0], 2, },
   { _au_wavs1_envs[3],   0, _au_wavs1_mixer1[0], 3, },
   { _au_wavs1_envs[4],   0, _au_wavs1_mixer1[1], 0, },
   { _au_wavs1_envs[5],   0, _au_wavs1_mixer1[1], 1, },
   { _au_wavs1_envs[6],   0, _au_wavs1_mixer1[1], 2, },
   { _au_wavs1_envs[7],   0, _au_wavs1_mixer1[1], 3, },
   { _au_wavs1_mixer1[0], 0, _au_wavs1_mixer,     0, },
   { _au_wavs1_mixer1[1], 0, _au_wavs1_mixer,     1, },
}; 

AudioSynthWaveform      _au_wavs2_player[VOICE_COUNT];
AudioEffectEnvelope     _au_wavs2_envs[VOICE_COUNT];
AudioMixer4             _au_wavs2_mixer1[2];
AudioMixer4             _au_wavs2_mixer;

AudioConnection         _au_wavs2_conn[] = {
    {  _au_wavs2_player[0], 0, _au_wavs2_envs[0],   0, },
    {  _au_wavs2_player[1], 0, _au_wavs2_envs[1],   0, },
    {  _au_wavs2_player[2], 0, _au_wavs2_envs[2],   0, },
    {  _au_wavs2_player[3], 0, _au_wavs2_envs[3],   0, },
    {  _au_wavs2_player[4], 0, _au_wavs2_envs[4],   0, },
    {  _au_wavs2_player[5], 0, _au_wavs2_envs[5],   0, },
    {  _au_wavs2_player[6], 0, _au_wavs2_envs[6],   0, },
    {  _au_wavs2_player[7], 0, _au_wavs2_envs[7],   0, },
    {  _au_wavs2_envs[0],   0, _au_wavs2_mixer1[0], 0, },
    {  _au_wavs2_envs[1],   0, _au_wavs2_mixer1[0], 1, },
    {  _au_wavs2_envs[2],   0, _au_wavs2_mixer1[0], 2, },
    {  _au_wavs2_envs[3],   0, _au_wavs2_mixer1[0], 3, },
    {  _au_wavs2_envs[4],   0, _au_wavs2_mixer1[1], 0, },
    {  _au_wavs2_envs[5],   0, _au_wavs2_mixer1[1], 1, },
    {  _au_wavs2_envs[6],   0, _au_wavs2_mixer1[1], 2, },
    {  _au_wavs2_envs[7],   0, _au_wavs2_mixer1[1], 3, },
    {  _au_wavs2_mixer1[0], 0, _au_wavs2_mixer,     0, },
    {  _au_wavs2_mixer1[1], 0, _au_wavs2_mixer,     1, },
}; 

AudioSynthSimpleDrum    _au_drums_player[VOICE_COUNT];
AudioMixer4             _au_drums_mixer1[2];
AudioMixer4             _au_drums_mixer;
AudioConnection         _au_drums_conn[] = {
  { _au_drums_player[0], 0, _au_drums_mixer1[0], 0, },
  { _au_drums_player[1], 0, _au_drums_mixer1[0], 1, },
  { _au_drums_player[2], 0, _au_drums_mixer1[0], 2, },
  { _au_drums_player[3], 0, _au_drums_mixer1[0], 3, },
  { _au_drums_player[4], 0, _au_drums_mixer1[1], 0, },
  { _au_drums_player[5], 0, _au_drums_mixer1[1], 1, },
  { _au_drums_player[6], 0, _au_drums_mixer1[1], 2, },
  { _au_drums_player[7], 0, _au_drums_mixer1[1], 3, },
  { _au_drums_mixer1[0], 0, _au_drums_mixer, 0,     },
  { _au_drums_mixer1[1], 0, _au_drums_mixer, 1,     },
}; 

AudioSynthKarplusStrong _au_strg1_player[VOICE_COUNT];
AudioEffectEnvelope     _au_strg1_envs[VOICE_COUNT];
AudioMixer4             _au_strg1_mixer1[2];
AudioMixer4             _au_strg1_mixer;
AudioEffectFreeverb     _au_strg1_reverb;
AudioConnection         _au_strg1_conn[] = {
    {  _au_strg1_player[0], 0, _au_strg1_envs[0],   0, },
    {  _au_strg1_player[1], 0, _au_strg1_envs[1],   0, },
    {  _au_strg1_player[2], 0, _au_strg1_envs[2],   0, },
    {  _au_strg1_player[3], 0, _au_strg1_envs[3],   0, },
    {  _au_strg1_player[4], 0, _au_strg1_envs[4],   0, },
    {  _au_strg1_player[5], 0, _au_strg1_envs[5],   0, },
    {  _au_strg1_player[6], 0, _au_strg1_envs[6],   0, },
    {  _au_strg1_player[7], 0, _au_strg1_envs[7],   0, },
    {  _au_strg1_envs[0],   0, _au_strg1_mixer1[0], 0, },
    {  _au_strg1_envs[1],   0, _au_strg1_mixer1[0], 1, },
    {  _au_strg1_envs[2],   0, _au_strg1_mixer1[0], 2, },
    {  _au_strg1_envs[3],   0, _au_strg1_mixer1[0], 3, },
    {  _au_strg1_envs[4],   0, _au_strg1_mixer1[1], 0, },
    {  _au_strg1_envs[5],   0, _au_strg1_mixer1[1], 1, },
    {  _au_strg1_envs[6],   0, _au_strg1_mixer1[1], 2, },
    {  _au_strg1_envs[7],   0, _au_strg1_mixer1[1], 3, },
    {  _au_strg1_mixer1[0], 0, _au_strg1_mixer,     0, },
    {  _au_strg1_mixer1[1], 0, _au_strg1_mixer,     1, },
    //{  _au_strg1_mixer, 0, _au_strg1_reverb,     0, },
}; 

AudioSynthKarplusStrong _au_strg2_player[VOICE_COUNT];
AudioEffectEnvelope     _au_strg2_envs[VOICE_COUNT];
AudioMixer4             _au_strg2_mixer1[2];
AudioMixer4             _au_strg2_mixer;
AudioConnection         _au_strg2_conn[] = {
    {  _au_strg2_player[0], 0, _au_strg2_envs[0],   0,  },
    {  _au_strg2_player[1], 0, _au_strg2_envs[1],   0,  },
    {  _au_strg2_player[2], 0, _au_strg2_envs[2],   0,  },
    {  _au_strg2_player[3], 0, _au_strg2_envs[3],   0,  },
    {  _au_strg2_player[4], 0, _au_strg2_envs[4],   0,  },
    {  _au_strg2_player[5], 0, _au_strg2_envs[5],   0,  },
    {  _au_strg2_player[6], 0, _au_strg2_envs[6],   0,  },
    {  _au_strg2_player[7], 0, _au_strg2_envs[7],   0,  },
    {  _au_strg2_envs[0],   0, _au_strg2_mixer1[0], 0,  },
    {  _au_strg2_envs[1],   0, _au_strg2_mixer1[0], 1,  },
    {  _au_strg2_envs[2],   0, _au_strg2_mixer1[0], 2,  },
    {  _au_strg2_envs[3],   0, _au_strg2_mixer1[0], 3,  },
    {  _au_strg2_envs[4],   0, _au_strg2_mixer1[1], 0,  },
    {  _au_strg2_envs[5],   0, _au_strg2_mixer1[1], 1,  },
    {  _au_strg2_envs[6],   0, _au_strg2_mixer1[1], 2,  },
    {  _au_strg2_envs[7],   0, _au_strg2_mixer1[1], 3,  },
    {  _au_strg2_mixer1[0], 0, _au_strg2_mixer, 0,      },
    {  _au_strg2_mixer1[1], 0, _au_strg2_mixer, 1,      },
}; 

AudioPlayMemory         _dmm[VOICE_COUNT];
AudioMixer4             _dmx;
AudioEffectFreeverb     _kfr;
AudioPlaySdRaw          _samp[16];
AudioMixer4             _smx1[4];
AudioMixer4             _smix;

AudioConnection _samp_conn[] = {
  { _samp[0], 0, _smx1[0], 0, },
  { _samp[1], 0, _smx1[0], 1, },
  { _samp[2], 0, _smx1[0], 2, },
  { _samp[3], 0, _smx1[0], 3, },
  { _samp[4], 0, _smx1[1], 0, },
  { _samp[5], 0, _smx1[1], 1, },
  { _samp[6], 0, _smx1[1], 2, },
  { _samp[7], 0, _smx1[1], 3, },
  { _samp[8], 0, _smx1[2], 0, },
  { _samp[9], 0, _smx1[2], 1, },
  { _samp[10], 0, _smx1[2], 2, },
  { _samp[11], 0, _smx1[2], 3, },
  { _samp[12], 0, _smx1[3], 0, },
  { _samp[13], 0, _smx1[3], 1, },
  { _samp[14], 0, _smx1[3], 2, },
  { _samp[15], 0, _smx1[3], 3, },
//    { _smx1[0], 0, _sver, 0, },
    { _smx1[0], 0, _smix, 0, },
    { _smx1[1], 0, _smix, 1, },
    { _smx1[2], 0, _smix, 2, },
    { _smx1[3], 0, _smix, 3  },
    
};


// begin automatically generated

#define SYNTH_COUNT 4
#define SYNTH_VOICES_COUNT 16
#define MIX1_COUNT 4
#define MIX2_COUNT 1

AudioSynthWaveform      _wavs[SYNTH_COUNT][SYNTH_VOICES_COUNT];
AudioEffectEnvelope     _senv[SYNTH_COUNT][SYNTH_VOICES_COUNT];
AudioMixer4             _mix1[SYNTH_COUNT][MIX1_COUNT]; 
AudioMixer4             _mix2[SYNTH_COUNT]; 
AudioEffectEnvelope     _envs[SYNTH_COUNT];
AudioFilterBiquad       _flt1[SYNTH_COUNT];
AudioEffectFreeverb     _reve[SYNTH_COUNT];
AudioFilterBiquad       _flt2[SYNTH_COUNT];
AudioMixer4             _mix3;
AudioMixer4             _mixg;
AudioOutputI2S          _audio_out;
AudioControlSGTL5000    _dac;

AudioConnection _envs_conn[] = {
    { _wavs[0][0], _senv[0][0] },
    { _wavs[0][1], _senv[0][1] },
    { _wavs[0][2], _senv[0][2] },
    { _wavs[0][3], _senv[0][3] },
    { _wavs[0][4], _senv[0][4] },
    { _wavs[0][5], _senv[0][5] },
    { _wavs[0][6], _senv[0][6] },
    { _wavs[0][7], _senv[0][7] },
    { _wavs[0][8], _senv[0][8] },
    { _wavs[0][9], _senv[0][9] },
    { _wavs[0][10], _senv[0][10] },
    { _wavs[0][11], _senv[0][11] },
    { _wavs[0][12], _senv[0][12] },
    { _wavs[0][13], _senv[0][13] },
    { _wavs[0][14], _senv[0][14] },
    { _wavs[0][15], _senv[0][15] },
    { _wavs[1][0], _senv[1][0] },
    { _wavs[1][1], _senv[1][1] },
    { _wavs[1][2], _senv[1][2] },
    { _wavs[1][3], _senv[1][3] },
    { _wavs[1][4], _senv[1][4] },
    { _wavs[1][5], _senv[1][5] },
    { _wavs[1][6], _senv[1][6] },
    { _wavs[1][7], _senv[1][7] },
    { _wavs[1][8], _senv[1][8] },
    { _wavs[1][9], _senv[1][9] },
    { _wavs[1][10], _senv[1][10] },
    { _wavs[1][11], _senv[1][11] },
    { _wavs[1][12], _senv[1][12] },
    { _wavs[1][13], _senv[1][13] },
    { _wavs[1][14], _senv[1][14] },
    { _wavs[1][15], _senv[1][15] },
    { _wavs[2][0], _senv[2][0] },
    { _wavs[2][1], _senv[2][1] },
    { _wavs[2][2], _senv[2][2] },
    { _wavs[2][3], _senv[2][3] },
    { _wavs[2][4], _senv[2][4] },
    { _wavs[2][5], _senv[2][5] },
    { _wavs[2][6], _senv[2][6] },
    { _wavs[2][7], _senv[2][7] },
    { _wavs[2][8], _senv[2][8] },
    { _wavs[2][9], _senv[2][9] },
    { _wavs[2][10], _senv[2][10] },
    { _wavs[2][11], _senv[2][11] },
    { _wavs[2][12], _senv[2][12] },
    { _wavs[2][13], _senv[2][13] },
    { _wavs[2][14], _senv[2][14] },
    { _wavs[2][15], _senv[2][15] },
    { _wavs[3][0], _senv[3][0] },
    { _wavs[3][1], _senv[3][1] },
    { _wavs[3][2], _senv[3][2] },
    { _wavs[3][3], _senv[3][3] },
    { _wavs[3][4], _senv[3][4] },
    { _wavs[3][5], _senv[3][5] },
    { _wavs[3][6], _senv[3][6] },
    { _wavs[3][7], _senv[3][7] },
    { _wavs[3][8], _senv[3][8] },
    { _wavs[3][9], _senv[3][9] },
    { _wavs[3][10], _senv[3][10] },
    { _wavs[3][11], _senv[3][11] },
    { _wavs[3][12], _senv[3][12] },
    { _wavs[3][13], _senv[3][13] },
    { _wavs[3][14], _senv[3][14] },
    { _wavs[3][15], _senv[3][15] },
};

AudioConnection _mix1_conn[] = {
    { _senv[0][0], 0, _mix1[0][0], 0 },
    { _senv[0][1], 0, _mix1[0][0], 1 },
    { _senv[0][2], 0, _mix1[0][0], 2 },
    { _senv[0][3], 0, _mix1[0][0], 3 },
    { _senv[0][4], 0, _mix1[0][1], 0 },
    { _senv[0][5], 0, _mix1[0][1], 1 },
    { _senv[0][6], 0, _mix1[0][1], 2 },
    { _senv[0][7], 0, _mix1[0][1], 3 },
    { _senv[0][8], 0, _mix1[0][2], 0 },
    { _senv[0][9], 0, _mix1[0][2], 1 },
    { _senv[0][10], 0, _mix1[0][2], 2 },
    { _senv[0][11], 0, _mix1[0][2], 3 },
    { _senv[0][12], 0, _mix1[0][3], 0 },
    { _senv[0][13], 0, _mix1[0][3], 1 },
    { _senv[0][14], 0, _mix1[0][3], 2 },
    { _senv[0][15], 0, _mix1[0][3], 3 },
    { _senv[1][0], 0, _mix1[1][0], 0 },
    { _senv[1][1], 0, _mix1[1][0], 1 },
    { _senv[1][2], 0, _mix1[1][0], 2 },
    { _senv[1][3], 0, _mix1[1][0], 3 },
    { _senv[1][4], 0, _mix1[1][1], 0 },
    { _senv[1][5], 0, _mix1[1][1], 1 },
    { _senv[1][6], 0, _mix1[1][1], 2 },
    { _senv[1][7], 0, _mix1[1][1], 3 },
    { _senv[1][8], 0, _mix1[1][2], 0 },
    { _senv[1][9], 0, _mix1[1][2], 1 },
    { _senv[1][10], 0, _mix1[1][2], 2 },
    { _senv[1][11], 0, _mix1[1][2], 3 },
    { _senv[1][12], 0, _mix1[1][3], 0 },
    { _senv[1][13], 0, _mix1[1][3], 1 },
    { _senv[1][14], 0, _mix1[1][3], 2 },
    { _senv[1][15], 0, _mix1[1][3], 3 },
    { _senv[2][0], 0, _mix1[2][0], 0 },
    { _senv[2][1], 0, _mix1[2][0], 1 },
    { _senv[2][2], 0, _mix1[2][0], 2 },
    { _senv[2][3], 0, _mix1[2][0], 3 },
    { _senv[2][4], 0, _mix1[2][1], 0 },
    { _senv[2][5], 0, _mix1[2][1], 1 },
    { _senv[2][6], 0, _mix1[2][1], 2 },
    { _senv[2][7], 0, _mix1[2][1], 3 },
    { _senv[2][8], 0, _mix1[2][2], 0 },
    { _senv[2][9], 0, _mix1[2][2], 1 },
    { _senv[2][10], 0, _mix1[2][2], 2 },
    { _senv[2][11], 0, _mix1[2][2], 3 },
    { _senv[2][12], 0, _mix1[2][3], 0 },
    { _senv[2][13], 0, _mix1[2][3], 1 },
    { _senv[2][14], 0, _mix1[2][3], 2 },
    { _senv[2][15], 0, _mix1[2][3], 3 },
    { _senv[3][0], 0, _mix1[3][0], 0 },
    { _senv[3][1], 0, _mix1[3][0], 1 },
    { _senv[3][2], 0, _mix1[3][0], 2 },
    { _senv[3][3], 0, _mix1[3][0], 3 },
    { _senv[3][4], 0, _mix1[3][1], 0 },
    { _senv[3][5], 0, _mix1[3][1], 1 },
    { _senv[3][6], 0, _mix1[3][1], 2 },
    { _senv[3][7], 0, _mix1[3][1], 3 },
    { _senv[3][8], 0, _mix1[3][2], 0 },
    { _senv[3][9], 0, _mix1[3][2], 1 },
    { _senv[3][10], 0, _mix1[3][2], 2 },
    { _senv[3][11], 0, _mix1[3][2], 3 },
    { _senv[3][12], 0, _mix1[3][3], 0 },
    { _senv[3][13], 0, _mix1[3][3], 1 },
    { _senv[3][14], 0, _mix1[3][3], 2 },
    { _senv[3][15], 0, _mix1[3][3], 3 },
};

AudioConnection _mix2_conn[] = {
    { _mix1[0][0], 0, _mix2[0], 0 },
    { _mix1[0][1], 0, _mix2[0], 1 },
    { _mix1[0][2], 0, _mix2[0], 2 },
    { _mix1[0][3], 0, _mix2[0], 3 },
    { _mix1[1][0], 0, _mix2[1], 0 },
    { _mix1[1][1], 0, _mix2[1], 1 },
    { _mix1[1][2], 0, _mix2[1], 2 },
    { _mix1[1][3], 0, _mix2[1], 3 },
    { _mix1[2][0], 0, _mix2[2], 0 },
    { _mix1[2][1], 0, _mix2[2], 1 },
    { _mix1[2][2], 0, _mix2[2], 2 },
    { _mix1[2][3], 0, _mix2[2], 3 },
    { _mix1[3][0], 0, _mix2[3], 0 },
    { _mix1[3][1], 0, _mix2[3], 1 },
    { _mix1[3][2], 0, _mix2[3], 2 },
    { _mix1[3][3], 0, _mix2[3], 3 },
};

AudioConnection _mix3_conn[] = {
    { _mix2[0], _envs[0] },
    { _mix2[1], _envs[1] },
    { _mix2[2], _envs[2] },
    { _mix2[3], _envs[3] },
//    { _envs[0], _flt1[0] },
//    { _envs[1], _flt1[1] },
//    { _envs[2], _flt1[2] },
//    { _envs[3], _flt1[3] },
//    { _flt1[0], _reve[0] },
//    { _flt1[1], _reve[1] },
//    { _flt1[2], _reve[2] },
//    { _flt1[3], _reve[3] },
//    { _reve[0], _flt2[0] },
//    { _reve[1], _flt2[1] },
//    { _reve[2], _flt2[2] },
//    { _reve[3], _flt2[3] },
//    { _flt2[0], 0, _mix3, 0 },
//    { _flt2[1], 0, _mix3, 1 },
//    { _flt2[2], 0, _mix3, 2 },
//    { _flt2[3], 0, _mix3, 3 },
    { _envs[0], 0, _reve[0], 0 },
    { _envs[1], 0, _reve[1], 0 },
    { _envs[2], 0, _reve[2], 2 },
    { _envs[3], 0, _reve[3], 3 },
    { _reve[0], 0, _mix3, 0 },
    { _reve[1], 0, _mix3, 1 },
    { _reve[2], 0, _mix3, 2 },
    { _reve[3], 0, _mix3, 3 },
};

AudioConnection _mixg_conn[] = {
    { _mix3, 0, _mixg, 0 },
    { _au_drums_mixer, 0, _mixg, 1 },
    { _dmm[0],  0, _dmx, 0 },
    { _dmm[1],  0, _dmx, 1 },
    { _dmm[2],  0, _dmx, 2 },
    { _dmm[3],  0, _dmx, 3 },
    { _dmx,  0, _mixg, 2 },
    { _au_strg1_mixer, 0, _mixg, 3 },
    { _mixg, 0, _audio_out, 0 },
    { _mixg, 0, _audio_out, 1 },
};

// end automatically generated
//

AudioPlaySdRaw raw1[16];
AudioSynthWavetable table[64];

void Synth::connect(uint8_t index) {
  _synth_index = index;

  _au_strg1_reverb.roomsize(0.4);
  _au_strg1_reverb.damping(0.8);

    _reve[_synth_index].roomsize(0.5);
    _reve[_synth_index].damping(0.5);
    _envs[_synth_index].noteOn();
    //_flt1[_synth_index].setLowpass(0, 1200, 0.7);
    //_flt2[_synth_index].setLowpass(0, 1200, 0.7);


    for (uint8_t i = 0; i < VOICE_COUNT; i++) {
      _au_strg1_envs[i].attack(9.2);
      _au_strg1_envs[i].hold(2.1);
      _au_strg1_envs[i].decay(31.4);
      _au_strg1_envs[i].sustain(1.0);
      _au_strg1_envs[i].release(2000.0);

    }

    for (uint8_t i = 0; i < SYNTH_VOICES_COUNT; i++) {
        //_waves[i].begin(1, NOTE_FREQUENCIES[i], WAVEFORM_SINE);
        _wavs[_synth_index][i].amplitude(0.6);
        _wavs[_synth_index][i].begin(WAVEFORM_SAWTOOTH);
        //_envelopes[i].noteOff();
        _senv[_synth_index][i].attack(1.0);
       _senv[_synth_index][i].hold(2.1);
       _senv[_synth_index][i].decay(31.4);
       _senv[_synth_index][i].sustain(1.0);
       _senv[_synth_index][i].release(200);
    }
    for (uint8_t i = 0; i < MIX1_COUNT; i++) {
        for (uint8_t j = 0; j < 4; j++) {
            _mix1[_synth_index][i].gain(j, 0.7);
        }
    }
    for (uint8_t i = 0; i < MIX2_COUNT; i++) {
        for (uint8_t j = 0; j < 4; j++) {
            _mix2[_synth_index].gain(j, 0.7);
        }
    }

    for (uint8_t i = 0; i < 2; i++) {
      for (uint8_t j = 0; j < 4; j++) {
          _au_strg1_mixer1[i].gain(j, 0.5);
          _au_drums_mixer1[i].gain(j, 0.5);
      }
    }
        for (uint8_t j = 0; j < 4; j++) {
          _au_strg1_mixer.gain(j, 0.3);
          _au_drums_mixer.gain(j, 0.5);
        }

    _mix3.gain(0, 0.7);
    _mix3.gain(1, 0.7);
    _mix3.gain(2, 0.7);

    _mixg.gain(0, 1.0);
    _mixg.gain(1, 1.0);
    _mixg.gain(2, 1.0);
    _mixg.gain(3, 1.0);
}

void Synth::set_waveform(uint8_t waveform) {
    for (uint8_t i = 0; i < SYNTH_VOICES_COUNT; i++) {
      _wavs[_synth_index][i].begin(waveform);
    }
}

void Synth::set_amplitude(float amplitude) {
    for (uint8_t i = 0; i < SYNTH_VOICES_COUNT; i++) {
      _wavs[_synth_index][i].amplitude(amplitude);
    }
}

uint8_t Synth::first_free_voice() {
    for (uint8_t i = 0; i < SYNTH_VOICES_COUNT; i++) {
        if (!_voices_used[i]) {
            return i;
        }
    }
    // sentinel value for no voices left
    return SYNTH_VOICES_COUNT;
}

uint8_t Synth::voice_using(uint8_t note) {
    for (uint8_t i = 0; i < SYNTH_VOICES_COUNT; i++) {
        if (_voices_used[i] == note) {
            return i;
        }
    }
    // sentinel value for no note
    return SYNTH_VOICES_COUNT;
}

bool Synth::note_on(uint8_t note) {
    uint8_t v = first_free_voice();
    if (v < SYNTH_VOICES_COUNT) {
        _voices_used[v] = note;
        _wavs[_synth_index][v].frequency(NOTE_FREQUENCIES[note]);
        _senv[_synth_index][v].noteOn();
        return true;
    }
    return false;
}

void Synth::note_off(uint8_t note) {
    uint8_t v = voice_using(note);
    if (v < SYNTH_VOICES_COUNT) {
        _voices_used[v] = 0;
        _senv[_synth_index][v].noteOff();
    }

}

void Sounds::setup() {
    AudioMemory(48);

     SPI.setMOSI(SDCARD_MOSI_PIN);
  SPI.setSCK(SDCARD_SCK_PIN);
  if (!(SD.begin(SDCARD_CS_PIN))) {
    // stop here, but print a message repetitively
    while (1) {
      Serial.println("Unable to access the SD card");
      delay(500);
    }
  }

    _synth1.connect(0);
    _synth2.connect(1);
    //_synth2.set_waveform(WAVEFORM_SQUARE);
    //_synth1.set_waveform(WAVEFORM_SAWTOOTH);
    //_synth2.set_amplitude(0.5);

    //_strings1.connect_player((AudioSynthKarplusStrong**)_au_strg1_player);



    _dac.enable();
    _dac.volume(0.6);
    AudioProcessorUsageMaxReset();
    AudioMemoryUsageMaxReset();
}

void Sounds::loop() {

  
  for (uint16_t i = 0; i < _state->notes.size(); i++) {
    Serial.print("on:");
    Note n = _state->notes.at(i);
    Serial.println(n.on);
    if (n.index == 0) {
      if (n.on) {
        _strings1.note_on(n.value);
      } else {
        _strings1.note_off(n.value);
      }
    }
    if (n.index == 1) {
      if (n.on) {
        _synth2.note_on(n.value);
      } else {
        _synth2.note_off(n.value);
      }
    }
  }


  for (uint16_t i = 0; i < _state->notes_on.size(); i++) {
    //_synth1.note_on(_state->notes_on.at(i));
    //_strings1.note_on(_state->notes_on.at(i));
  }

  for (uint16_t i = 0; i < _state->notes_off.size(); i++) {
    //_synth1.note_off(_state->notes_off.at(i));
    //_strings1.note_off(_state->notes_on.at(i));
  }

  for (uint16_t i = 0; i < _state->notes1_on.size(); i++) {
    //_synth1.note_on(_state->notes1_on.at(i));
    _sy.note_on(_state->notes1_on.at(i));
    //uint8_t note = _state->notes1_on.at(i);
  //_au_drums_player[0].frequency(NOTE_FREQUENCIES[note]);
  //_au_drums_player[0].noteOn();
    DEBUG_SERIAL_PORT.println("on");
    DEBUG_SERIAL_PORT.println(_state->notes1_on.at(i));
  }

  for (uint16_t i = 0; i < _state->notes1_off.size(); i++) {
    //_synth1.note_off(_state->notes1_off.at(i));
    _sy.note_off(_state->notes1_off.at(i));
    DEBUG_SERIAL_PORT.println("off");
    DEBUG_SERIAL_PORT.println(_state->notes1_off.at(i));
  }

  for (uint16_t i = 0; i < _state->drums_on.size(); i++) {
    _drums.note_on(_state->drums_on.at(i));
  }
  _state->drums_on.clear();

}

void Drums::note_on(DrumType drum) {

  _dmm[(uint8_t)drum].play(_samples[(uint8_t)drum][0]);
  //_samp[(uint8_t)drum].play(_samples2[(uint8_t)drum]);
}

void Drums::connect(uint8_t index) {
  _mixg.gain(2, 0.5);
  for (uint8_t i = 0; i < 4; i++) {
    _dmx.gain(i, 0.1);
  for (uint8_t j = 0; i < 4; j++) {
    _smx1[i].gain(j, 0.5);
  }
  }

}


void VoicePlayer::connect_envs(AudioEffectEnvelope *envs[VOICE_COUNT]) {
  _envs = envs;
}



uint8_t VoicePlayer::free_voice() {
    //for (uint8_t i = 0; i < VOICE_COUNT; i++) {
    //  Serial.println(_note_voices[i]);
    //    if (!_note_voices[i]) {
    //        return i;
    //    }
    //}
    return (_free_voice++) % VOICE_COUNT;
    // sentinel value for no voices left
    return VOICE_COUNT;
}

uint8_t VoicePlayer::note_voice(uint8_t note) {
    for (uint8_t i = 0; i < VOICE_COUNT; i++) {
        if (_note_voices[i] == note) {
            return i;
        }
    }
    // sentinel value for no note
    return VOICE_COUNT;
}


bool VoicePlayer::note_on(uint8_t note) {
  uint8_t voice = free_voice();
  DEBUG_SERIAL_PORT.print("note_on, N:");
  DEBUG_SERIAL_PORT.print(note);
  DEBUG_SERIAL_PORT.print(",V:");
  DEBUG_SERIAL_PORT.println(voice);
    if (voice < VOICE_COUNT) {
  DEBUG_SERIAL_PORT.println("setting voice");
        _note_voices[voice] = note;
  DEBUG_SERIAL_PORT.println("calling pre on");
        note_pre_on(voice, note);
  DEBUG_SERIAL_PORT.println("called pre on");
      //AudioEffectEnvelope env = *_envs[voice];
      //env.noteOn();
        return true;
    }
    return false;
}

bool VoicePlayer::note_off(uint8_t note) {
    uint8_t voice = note_voice(note);
    if (voice < VOICE_COUNT) {
        _note_voices[voice] = 0;
        note_pre_off(voice, note);
      //AudioEffectEnvelope env = *_envs[voice];
      //env.noteOff();
    }
}

void Sy::note_pre_on(uint8_t voice, uint8_t note) {
  _au_drums_player[voice].frequency(NOTE_FREQUENCIES[note]);
  _au_drums_player[voice].noteOn();
}

void Sy::note_pre_off(uint8_t voice, uint8_t note) {
  //_au_drums_player[voice].noteOff();
}

void Strings::note_pre_on(uint8_t voice, uint8_t note) {
  DEBUG_SERIAL_PORT.println("pre_note_on");
  DEBUG_SERIAL_PORT.println(voice);
  DEBUG_SERIAL_PORT.println(note);
  //AudioSynthKarplusStrong player = *_voices[voice];
  //player.noteOn(NOTE_FREQUENCIES[note], 1);
  _au_strg1_envs[voice].noteOn();
  _au_strg1_player[voice].noteOn(NOTE_FREQUENCIES[note], 1.0);
  //_au_drums_player[voice].frequency(NOTE_FREQUENCIES[note]);
  //_au_drums_player[voice].noteOn();
}

void Strings::note_pre_off(uint8_t voice, uint8_t note) {
  //AudioSynthKarplusStrong player = *_voices[voice];
  //player.noteOff(1);
  _au_strg1_envs[voice].noteOff();
  //_au_drums_player[voice].noteOff();
}

void Strings::connect_player(AudioSynthKarplusStrong **voices) {
  _voices = voices;
}
