
#ifndef _scales_h
#define _scales_h

#include <stdint.h>
#include <WString.h>

// The available musical nodes in an enum.
enum Mode {Ionian, Dorian, Phrygian, Lydian, Mixolydian, Aeolian, Locrian, Freygish};

// Basic intervals for the major scales.
static int SCALE_INTERVALS[] = {2, 2, 1, 2, 2, 2, 1};

static String key_menu[] = {
  "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B",
};


static String mode_names[] = {
  "Ionian",
  "Dorian",
  "Phrygian",
  "Lydian",
  "Mixolydian",
  "Aeolian",
  "Locrian",
  "Freygish",
};


/**
   A scale for which all notes are calculated.

   The classical modes are calculated simply by rotating the start note with
   the same intervals. Additional modes are hacked on by shifting individual
   notes of the classical modes.
*/
class Scales {

  public:

    // Get a note for a mode.
    static int get_note(Mode m, int i); 
    // Populate a chord array for a mode with a number of notes.
    static void chord_for(Mode m, int i, int c, uint8_t out[3]);
};

#endif
