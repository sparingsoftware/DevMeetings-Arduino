


void setup() {
  pinMode(3, OUTPUT);
  pinMode(8, INPUT_PULLUP);

  Serial.begin(9600);

  Serial.println("Hello!");
}

void loop() {

  if (Serial.available() > 0) {

//    Serial.println(Serial.read());

    String value = Serial.readString();
    
    Serial.println("nowa wiadomość: ");
    Serial.println(value);

      if(value == "on") {
        digitalWrite(3, HIGH);
      }

      if(value == "off") {
        digitalWrite(3, LOW);
      }
  
  }

}
