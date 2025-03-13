#include <LiquidCrystal_I2C.h>

#define DIODE_DROP 0.2

LiquidCrystal_I2C lcd(0x27, 16, 2);
unsigned long startTime;
unsigned long lastSerialTime = 0;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  startTime = millis();
}

void loop() {
  float voltage = analogRead(A0) / 1024.0 * 10.0;
  if (voltage > 0.2)
    voltage += DIODE_DROP;

  unsigned long elapsedTime = millis() - startTime;
  unsigned long seconds = elapsedTime / 1000;
  unsigned long hundredths = (elapsedTime % 1000) / 10;

  lcd.home();
  lcd.print("Bat V: ");
  lcd.print(voltage, 2);

  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(seconds);
  lcd.print(".");
  if (hundredths < 10) lcd.print("0");
  lcd.print(hundredths);

  if (millis() - lastSerialTime >= 10000) {
    Serial.print("Voltage: ");
    Serial.print(voltage, 2);
    Serial.print("V, Time: ");
    Serial.print(seconds);
    Serial.print(".");
    if (hundredths < 10) Serial.print("0");
    Serial.println(hundredths);

    lastSerialTime = millis();
  }

  delay(10);
}