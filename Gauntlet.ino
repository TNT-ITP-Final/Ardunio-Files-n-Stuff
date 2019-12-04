#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 2
#define NUMPIXELS 12
#define BRIGHTNESS 25

Adafruit_NeoPixel ring(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ring.setBrightness(BRIGHTNESS);
  ring.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop()
{
  ring.clear(); // Set all pixel colors to 'off'

  mind();
  soul();
  Time();
  power();
  space();
  reality();

  
  ring.show();
}

void mind()
{
  ring.setPixelColor(0, ring.Color(255, 221, 0));
  ring.setPixelColor(1, ring.Color(255, 221, 0));
}

void soul()
{
  ring.setPixelColor(2, ring.Color(255, 98, 0));
  ring.setPixelColor(3, ring.Color(255, 98, 0));
}

void Time()
{
  ring.setPixelColor(4, ring.Color(0, 255, 0));
  ring.setPixelColor(5, ring.Color(0, 255, 0));
}

void power()
{
  ring.setPixelColor(6, ring.Color(128, 0, 128));
  ring.setPixelColor(7, ring.Color(128, 0, 128));
}

void space()
{
  ring.setPixelColor(8, ring.Color(0, 0, 255));
  ring.setPixelColor(9, ring.Color(0, 0, 255));
}

void reality()
{
  ring.setPixelColor(10, ring.Color(255, 0, 0));
  ring.setPixelColor(11, ring.Color(255, 0, 0));
}
