int pirin=9;
int output1=10;
int pirval=0;
void setup() {
  // put your setup code here, to run once:
pinMode(output1,OUTPUT);
pinMode(pirin,INPUT); 
}

void loop() {
  pirval=digitalRead(pirin);
  if (pirval == HIGH) {
         digitalWrite(output1,LOW);
    }
    else{
      digitalWrite(output1,HIGH);
    }
}
