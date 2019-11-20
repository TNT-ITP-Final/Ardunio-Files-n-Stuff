#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 2
#define NUMPIXELS 16 // Popular NeoPixel ring size
#define BRIGHTNESS 25
#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

Adafruit_NeoPixel MIND(2, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel SOUL(2, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel TIME(2, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel POWER(2, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel SPACE(2, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel REALITY(2, PIN, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.setBrightness(BRIGHTNESS);
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

  MIND.setPixelColor(0, pixels.Color(71, 0, 50));
  MIND.setPixelColor(1, pixels.Color(71, 0, 50));
  
  SOUL.setPixelColor(2, pixels.Color(71, 0, 50));
  SOUL.setPixelColor(3, pixels.Color(71, 0, 50));
  
  TIME.setPixelColor(4, pixels.Color(71, 0, 50));
  TIME.setPixelColor(5, pixels.Color(71, 0, 50));

  POWER.setPixelColor(i, pixels.Color(71, 0, 50));
  POWER.setPixelColor(i, pixels.Color(71, 0, 50));

  SPACE.setPixelColor(i, pixels.Color(71, 0, 50));
  SPACE.setPixelColor(i, pixels.Color(71, 0, 50));

  REALITY.setPixelColor(i, pixels.Color(71, 0, 50));
  REALITY.setPixelColor(i, pixels.Color(71, 0, 50));
}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up to 15
  for(int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    pixels.setPixelColor(i, pixels.Color(71, 0, 50));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
}

void power()
  {
    //scales up the brightness in 2 seconds
    for(int i = 0; i < 50; i++)
    {
      pixels.setBrightness(i)
      delay(40);
    }

    pixels.show();   // Send the updated pixel colors to the hardware.

  }
}
