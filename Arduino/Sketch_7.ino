int k;

void setup() {
  // put your setup code here, to run once:
  for(k = 8; k < 12; k++){
    pinMode(k,OUTPUT);
  }
}
void blink_ft(int pin){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(k = 8; k < 12; k++){
    blink_ft(k);
  }
}
