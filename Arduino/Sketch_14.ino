const int trig = 12;
const int echo = 13;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(echo, LOW);
  long duration = pulseIn(echo, HIGH);
  int dist = duration / 29/ 2;
  if (dist < 15){
    tone(5, 261.6);
    delay(100);
    noTone(2000);
    delay(100);
  }
  else{
    noTone(2000);
    delay(200);
  }
  Serial.println(dist);
  delay(100);

}
