int M1=7;
int M2=8;
void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  digitalWrite (M1,HIGH);
  digitalWrite (M2,HIGH);
  delay(10000);
  digitalWrite (M1,LOW);
  digitalWrite (M2,LOW);
  delay(5000);
  digitalWrite (M1,HIGH);
  delay(1000);
  digitalWrite(M1,LOW);
  delay(1000);
}
