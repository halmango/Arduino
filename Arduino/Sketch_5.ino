void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void blink_ft(int pin){
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);
}
void loop() {
  // put your main code here, to run repeatedly:
  blink_ft(8);
  blink_ft(9);
  blink_ft(10);
  blink_ft(11);
}
