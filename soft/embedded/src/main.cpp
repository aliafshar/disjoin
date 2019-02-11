
#include "app.h"

#include <Adafruit_NeoPixel.h>
#define PIXELS_COUNT      13
#define PIXELS_PIN        32
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(PIXELS_COUNT, PIXELS_PIN, NEO_GRB + NEO_KHZ800);

App APP;

void clear_pixels() {
    for (uint8_t i = 0; i < 13; i++) {
        pixels.setPixelColor(i, 255);
    }
    pixels.show();
}

void setup() {
    APP.setup();
}

void loop() {
    clear_pixels();
    APP.loop();
}
