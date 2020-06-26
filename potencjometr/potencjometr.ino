


void setup() {
  pinMode(3, OUTPUT);

  pinMode(A0, INPUT);

  Serial.begin(9600);

  Serial.println("Hello!");
}

void loop() {

  int val = analogRead(A0);

  Serial.println(val);

  analogWrite(3, val / 4);


  delay(100);
}
