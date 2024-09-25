#include <NanitLib.h>

byte portSignals[6] = {P3_2, P3_3, P3_4, P4_2, P4_3, P4_4};
void setup() {
  Nanit_Base_Start();

  for(byte portSignal : portSignals) {
    pinMode(portSignal, OUTPUT);
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

void twoTrafficLight (bool secondSignal, bool thirdSignal, bool fourthSignal) {
  digitalWrite(P3_2, secondSignal);
  digitalWrite(P4_2, secondSignal);
  digitalWrite(P3_3, thirdSignal);
  digitalWrite(P4_3, thirdSignal);
  digitalWrite(P3_4, fourthSignal);
  digitalWrite(P4_4, fourthSignal);
}