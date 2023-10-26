#include "arduino.h"

#define ledGreen 2
#define ledRed 0
#define ledBlue 4

void setup() {
    pinMode(ledGreen, OUTPUT);
    pinMode(ledRed, OUTPUT);
    pinMode(ledBlue, OUTPUT);
}

void loop() {
    digitalWrite(ledGreen, HIGH);
}
