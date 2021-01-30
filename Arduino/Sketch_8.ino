int pinLED[4] = {8,9,10,11};
int k;

void setup() {
  // put your setup code here, to run once:
  for(k=0; k<4; k++){
    pinMode(pinLED[k], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(k=0;k<4;k++){
    digitalWrite(pinLED[k], HIGH);
  }
    delay(1000);
  for(k=0;k<4;k++){
    digitalWrite(pinLED[k], LOW);
    }
    delay(1000);
}
