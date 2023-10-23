int Once1 = 9;
int Once2 = 3;
int brightness1 = 0;
int brightness2 = 0;
int fadeAmount = 5;

void setup() {
  pinMode(Once1, OUTPUT);
  pinMode(Once2, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i += fadeAmount) {
    analogWrite(Once1, i);
    analogWrite(Once2, 0);
    delay(20);
  }

  for (int i = 255; i >= 0; i -= fadeAmount) {
    analogWrite(Once1, i);
    analogWrite(Once2, 0);
    delay(20);
  }

  for (int i = 0; i <= 255; i += fadeAmount) {
    analogWrite(Once1, 0);
    analogWrite(Once2, i);
    delay(20);
  }

  for (int i = 255; i >= 0; i -= fadeAmount) {
    analogWrite(Once1, 0);
    analogWrite(Once2, i);
    delay(20);
  }
}
