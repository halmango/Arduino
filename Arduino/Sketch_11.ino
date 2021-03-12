int trig = 2;
int echo = 3;
int buzzer = 5;
void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  int distance = pulseIn(echo, HIGH)*340 / 2 / 10000;
  if(distance < 10){
    Serial.print(distance);
    tone(buzzer, 10);
    delay(3000);noTone(200);delay(3000);
  }
  else{
    noTone(100000);
  }
}
