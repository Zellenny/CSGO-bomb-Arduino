#include "arduino.h"

#define ledGreen 2

void start() {
    pinMode(ledGreen, OUTPUT);
}

void loop() {
    digitalWrite(ledGreen, HIGH);
}
//31642257878
