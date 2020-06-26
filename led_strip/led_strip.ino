
#include <FastLED.h>

#define NUM_PIXELS 50

#define LED_PIN 7

CRGB leds[NUM_PIXELS];


//

void setup() {
  Serial.begin(115200);

  Serial.println("Hello!");

  FastLED.addLeds<WS2811, DIN, RGB>(leds, NUM_PIXELS);

  leds[0] = CRGB::Red;
  leds[1].r = 100;
  leds[1].g = 30;
  leds[1].b = 200;

  FastLED.show();  
}

void loop() {

  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  FastLED.show(); 
  
  delay(200);

  leds[0] = CRGB::Green;
  leds[1] = CRGB::Red;
  FastLED.show(); 
  
  delay(200);

}
