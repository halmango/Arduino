void setup() {
 pinMode(5,OUTPUT);
 pinMode(6, INPUT);

}

void loop() {
  if(digitalRead(6) == HIGH){
    tone(5, 130.8);
  }

}
