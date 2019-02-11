#include "scales.h"


// Get a note for a mode.
int Scales::get_note(Mode m, int i) {
  int cn = 0;
  Mode am = m;
  if (m == Freygish) {
    am = Aeolian;
  }
  for (int c = 0; c < i; c++) {
    int ivl = SCALE_INTERVALS[(c + am) % 7];
    cn += ivl;
  }
  if (m == Freygish && (i % 7 == 6)) {
    cn += 1;
  }
  return cn;
}

// Populate a chord array for a mode with a number of notes.
void Scales::chord_for(Mode m, int i, int c, uint8_t out[3]) {
  for (int j = 0; j < c; j++) {
    out[j] = get_note(m, i + (2 * j));
  }
}
