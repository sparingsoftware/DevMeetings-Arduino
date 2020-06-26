


void setup() {
  pinMode(3, OUTPUT);
//  digitalWrite(3, HIGH);

  analogWrite(3, 0);

}

void loop() {

  analogWrite(3, 50);

  delay(1000);

  analogWrite(3, 150);

  delay(1000);

  analogWrite(3, 250);

  delay(1000);
}
