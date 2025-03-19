#define LED_PIN 9
String message;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    char incomingChar = Serial.read();

    if (incomingChar == '\n') {
      message.toLowerCase();

      if (message == "on") {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("Светодиод включен");
      } else if (message == "off") {
        digitalWrite(LED_PIN, LOW);
        Serial.println("Светодиод выключен");
      } else {
        Serial.println("Ошибка: неизвестная команда. Доступные команды: on, off");
      }

      message = "";
    } else {
      message += incomingChar;
    }
  }
}
