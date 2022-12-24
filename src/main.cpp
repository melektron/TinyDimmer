#include <Arduino.h>

#define OUT1 3
#define OUT2

void setup() {
  // put your setup code here, to run once:
  pinMode(OUT1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUT1, 1);
  delay(1000);
  digitalWrite(OUT1, 0);
  delay(1000);
}