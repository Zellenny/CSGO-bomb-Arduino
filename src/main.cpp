#include "arduino.h"
#include <iostream>
#include "time.h"

#define ledGreen 2
#define ledRed 0
#define ledBlue 4

int currentTime = 0;

void setup() {
    pinMode(ledGreen, OUTPUT);
    pinMode(ledRed, OUTPUT);
    pinMode(ledBlue, OUTPUT);
}

void loop() {
    for (int i = 0; i < currentTime; i++) {
        delay(1000);
        currentTime++;
    }
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
}
