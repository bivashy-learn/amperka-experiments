#include <Servo.h>

#define POT_MAX_ANGLE 180.0
#define LIGHT_TARGET 100
#define SERVO_STEP 2
#define DELAY_TIME 10

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(6);
}

void loop() {
  int lightLevel = analogRead(A0);
  int currentAngle = myServo.read();

  Serial.println(lightLevel);
  if (lightLevel < LIGHT_TARGET) {
    currentAngle = constrain(currentAngle - SERVO_STEP, 0, POT_MAX_ANGLE);
  } else if (lightLevel > LIGHT_TARGET) {
    currentAngle = constrain(currentAngle + SERVO_STEP, 0, POT_MAX_ANGLE);
  }

  myServo.write(currentAngle);
}