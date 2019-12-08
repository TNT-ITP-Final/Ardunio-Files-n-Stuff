#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 9
#define NUMPIXELS 12
//#define BRIGHTNESS 100

#define TIME_BUTTON 6
#define REALITY_BUTTON 3
#define POWER_BUTTON 4
#define SNAP_BUTTON 5
#define MIND_BUTTON 2
#define SOUL_BUTTON 7
#define SPACE_BUTTON 8

Adafruit_NeoPixel ring(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

float population = 7000000000;

void setup() {
  Serial.begin(9600);
  ring.setBrightness(75);
  ring.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  
  pinMode (TIME_BUTTON, INPUT);
  pinMode (REALITY_BUTTON, INPUT);
  pinMode (POWER_BUTTON, INPUT);
  pinMode (SNAP_BUTTON, INPUT);
  pinMode (MIND_BUTTON, INPUT);
  pinMode (SOUL_BUTTON, INPUT);
  pinMode (SPACE_BUTTON, INPUT);
}

void loop() {
  
  ring.clear(); // Set all pixel colors to 'off'

  if (digitalRead(MIND_BUTTON) == HIGH) {
    mind();
  } else if (digitalRead(TIME_BUTTON) == HIGH) {
    Time();
  } else if (digitalRead(REALITY_BUTTON) == HIGH) {
    reality();
  } else if (digitalRead(SOUL_BUTTON) == HIGH) {
    soul();
  } else if (digitalRead(POWER_BUTTON) == HIGH) {
    power();
  } else if (digitalRead(SPACE_BUTTON) == HIGH) {
    space();
  } else if (digitalRead(SNAP_BUTTON) == HIGH) {
    snap();
  } else {
      ring.clear();
  }

  ring.show();
  delay(1000);
  
}

void mind() {
  String str = "";
  
  ring.setPixelColor(0, ring.Color(255, 221, 0));
  ring.setPixelColor(1, ring.Color(255, 221, 0));
  
  str += "2 + 2 = 4,0,0,0,0,0";
  
  Serial.println(str);
}

void soul() {
  String str = "";
  
  ring.setPixelColor(2, ring.Color(255, 98, 0));
  ring.setPixelColor(3, ring.Color(255, 98, 0));

  str += "0," + String(population *= 1.000001) + ",0,0,0,0";
    
  Serial.println(str);
}

void Time() {
  ring.setPixelColor(4, ring.Color(0, 255, 0));
  ring.setPixelColor(5, ring.Color(0, 255, 0));
  Serial.println("0");
}

void power() {
  ring.setPixelColor(6, ring.Color(128, 0, 128));
  ring.setPixelColor(7, ring.Color(128, 0, 128));
  Serial.println("0,0,0,Unlimited,0,0");
}

void space() {
  ring.setPixelColor(8, ring.Color(0, 0, 255));
  ring.setPixelColor(9, ring.Color(0, 0, 255));
  Serial.println("0,0,0,0,92960000,0");
}

void reality() {
  ring.setPixelColor(10, ring.Color(255, 0, 0));
  ring.setPixelColor(11, ring.Color(255, 0, 0));
  Serial.println("0,0,0,0,0,42");
}

void snap() {
  ring.setPixelColor(0, ring.Color(255, 225, 255));
  ring.setPixelColor(1, ring.Color(255, 225, 255));
  ring.setPixelColor(2, ring.Color(255, 225, 255));
  ring.setPixelColor(3, ring.Color(255, 225, 255));
  ring.setPixelColor(4, ring.Color(255, 225, 255));
  ring.setPixelColor(5, ring.Color(255, 225, 255));
  ring.setPixelColor(6, ring.Color(255, 225, 255));
  ring.setPixelColor(7, ring.Color(255, 225, 255));
  ring.setPixelColor(8, ring.Color(255, 225, 255));
  ring.setPixelColor(9, ring.Color(255, 225, 255));
  ring.setPixelColor(10, ring.Color(255, 225, 255));
  ring.setPixelColor(11, ring.Color(255, 225, 255));
  ring.setPixelColor(12, ring.Color(255, 225, 255));
  ring.show();
  Serial.print("0");
}
