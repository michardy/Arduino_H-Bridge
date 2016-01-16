void setup() {
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  analogWrite(6, 0);
  analogWrite(10, 255);
}

void loop() {
  for (int i=0; i<255; i++){
    analogWrite(6, i);
    analogWrite(10, (255-i));
    delay(50);
  }
  for (int i=255; i>0; i--){
    analogWrite(6, i);
    analogWrite(10, (255-i));
    delay(50);
  }
}
