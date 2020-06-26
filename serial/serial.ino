


void setup() {
  pinMode(3, OUTPUT);
  pinMode(8, INPUT_PULLUP);

  Serial.begin(9600);

  Serial.println("Hello!");
}

void loop() {

  if (digitalRead(8) == LOW) {
    digitalWrite(3, HIGH);

    Serial.println("Button pressed!");
  } else {
    digitalWrite(3, LOW);

    Serial.println("Button released!");
  }


  delay(1000);
}
