#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  Serial.println("Hello World from loop!");
  delay(1000);
}