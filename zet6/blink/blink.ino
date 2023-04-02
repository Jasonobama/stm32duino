void setup() {
  // put your setup code here, to run once:
  pinMode(PG6,OUTPUT);
  pinMode(PG7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PG6,LOW);
  delay(1000);
  digitalWrite(PG7,LOW);
  delay(1000);  
  digitalWrite(PG7,HIGH);
  delay(1000);
  digitalWrite(PG6,HIGH);
  delay(1000);

}
