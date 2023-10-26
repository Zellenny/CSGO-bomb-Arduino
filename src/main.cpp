#include "arduino.h"
#include <iostream>

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
        delay(0.333);
        digitalWrite(ledGreen, HIGH);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledBlue, LOW);
        delay(0.333);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, HIGH);
        digitalWrite(ledBlue, LOW);
        delay(0.333);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledBlue, HIGH);

        currentTime++;
    }
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
}
