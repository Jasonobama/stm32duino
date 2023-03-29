void setup() {
  // put your setup code here, to run once:
  pinMode(PA5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA5,LOW);
  delay(1000);
  digitalWrite(PA5,HIGH);
  delay(1000);
}
