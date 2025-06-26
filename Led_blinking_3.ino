void setup() {
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
digitalWrite(0,HIGH);
delay(2000);
digitalWrite(0,LOW);
delay(1000);
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(2,LOW);
delay(1000);
digitalWrite(4,HIGH);
delay(2000);
digitalWrite(4,LOW);
delay(1000);
}
