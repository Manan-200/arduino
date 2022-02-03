int ledpin=10;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin,LOW);
delay(1000);
digitalWrite(ledpin,HIGH);
delay(100);


}
