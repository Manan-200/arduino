int M1F=7;
int M1R=8;

void setup() {
  pinMode(M1F, OUTPUT);
  pinMode(M1R, OUTPUT);
}

void loop() {
  digitalWrite (M1F,HIGH);
  digitalWrite (M1R,LOW);
  delay(100);
  
  digitalWrite (M1F,LOW);
  digitalWrite (M1R,LOW);
  delay(100);
  
  digitalWrite (M1F,LOW);
  digitalWrite (M1R,HIGH);
  delay(100);

  digitalWrite (M1F,LOW);
  digitalWrite (M1R,LOW);
  delay(100);
  
}
