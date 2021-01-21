int k = 10;
int dTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(k,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(k,HIGH);
  delay(dTime);
  digitalWrite(k,LOW);
  delay(dTime);
}
