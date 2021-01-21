int brightness = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  brightness = map(analogRead(A0), 0, 1023, 0, 255);
  analogWrite(11, brightness);
  delay(10);
}
