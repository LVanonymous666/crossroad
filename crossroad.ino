#include <NanitLib.h>

byte firstRedLed = P3_2;
byte firstYellowLed = P3_3;
byte firstGreenLed = P3_4;

byte secondRedLed = P4_4;
byte secondYellowLed = P4_3;
byte secondGreenLed = P4_2;

byte leds[6] = {firstRedLed, firstYellowLed,
  firstGreenLed, secondRedLed, secondYellowLed, secondGreenLed};
void setup() {
  Nanit_Base_Start();

  for(byte led : leds) {
    pinMode(led, OUTPUT);
  }
}

void loop() {

  twoTrafficLight(1, 0, 0);
  delay(4000);

  twoTrafficLight(0, 1, 0);
  delay(1500);

  twoTrafficLight(0, 0, 1);
  delay(4000);

  twoTrafficLight(0, 1, 0);
  delay(1500);
}

void twoTrafficLight (bool secondDigitalSignal, bool thirdDigitalSignal, bool fourthDigitalSignal) {
  digitalWrite(firstRedLed, secondDigitalSignal);
  digitalWrite(secondGreenLed, secondDigitalSignal);
  digitalWrite(firstYellowLed, thirdDigitalSignal);
  digitalWrite(secondYellowLed, thirdDigitalSignal);
  digitalWrite(firstGreenLed, fourthDigitalSignal);
  digitalWrite(secondRedLed, fourthDigitalSignal);
}