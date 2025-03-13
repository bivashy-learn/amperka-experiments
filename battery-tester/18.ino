#include <LiquidCrystal_I2C.h>

#define DIODE_DROP 0.2

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}
void loop() {
  float voltage = analogRead(A0) / 1024.0 * 10.0;
  if (voltage > 0.2)
    voltage += DIODE_DROP;

  lcd.home();
  lcd.print("Bat V:");
  lcd.print(voltage, 2);
}