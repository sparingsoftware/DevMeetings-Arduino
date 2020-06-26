


void setup() {
  pinMode(3, OUTPUT);
  pinMode(8, INPUT_PULLUP);

}

void loop() {

  if (digitalRead(8) == LOW) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
