#define LED_PIN 9
String message;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    char incomingChar = Serial.read();

    if ((incomingChar >= '0' && incomingChar <= '9') || incomingChar == '-') {
      message += incomingChar;
    } else if (incomingChar == '\n' && message.length() > 0) {
      int value = message.toInt();

      if (message.toInt() == 0 && message != "0") {
        Serial.println("Ошибка: введено некорректное значение!");
      } else if (value >= 0 && value <= 255) {
        analogWrite(LED_PIN, value);
      } else {
        Serial.println("Ошибка: значение должно быть от 0 до 255!");
      }

      message = "";
    }
  }
}
