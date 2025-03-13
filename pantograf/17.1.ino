#include <Servo.h>

#define POT_MAX_ANGLE 180.0
#define NUM_POSITIONS 8

Servo myServo;

int positions[NUM_POSITIONS] = {
  45,
  135,
  87,
  0,
  65,
  90,
  180,
  150
};

void setup() {
  myServo.attach(6);
}

void loop() {
  int val = analogRead(A0);
  int index = map(val, 0, 1023, 0, NUM_POSITIONS - 1);
  myServo.write(positions[index]);
  delay(100);
}