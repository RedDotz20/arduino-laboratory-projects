void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, OUTPUT);  
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 

  digitalWrite(7,LOW);
  delay(1100);

  digitalWrite(LED_BUILTIN, LOW);

  digitalWrite(7, HIGH);
  delay(1100);
}