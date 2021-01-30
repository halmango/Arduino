int LED_1 = 11;
int LED_2 = 10;
int PIR = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PIR) == HIGH){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,LOW);
    delay(100);
  }
  else{
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);  
    delay(100);
   
  }
}
