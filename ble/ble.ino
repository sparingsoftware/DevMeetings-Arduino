
#include <FastLED.h>

#define NUM_PIXELS 50

#define LED_PIN 7

CRGB leds[NUM_PIXELS];


//

void setup() {
  Serial.begin(115200);

  Serial.println("Hello!");

  FastLED.addLeds<WS2811, DIN, RGB>(leds, NUM_PIXELS);

  FastLED.show();  
}

void loop() {

  if (Serial.available() > 0) {

    String msg = Serial.readString();

    Serial.println("New BT message!");
    Serial.println(msg);
    
    if(msg == "RED") {

      leds[0] = CRGB::Red;
      leds[1] = CRGB::Red;
      FastLED.show(); 
    }

    if(msg == "BLUE") {

      leds[0] = CRGB::Green;
      leds[1] = CRGB::Green;
      FastLED.show(); 
    }



    
  }

}
