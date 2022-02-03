int motorpin=10;
int input=11;
int inputstat=0;
void setup() {
  // put your setup code here, to run once:
pinMode(motorpin,OUTPUT);
pinMode(input,INPUT);
}

void loop() {
 inputstat=digitalRead (input);
 if (inputstat == HIGH) {
  digitalWrite(motorpin,HIGH);
 delay(3000);
 digitalWrite(motorpin,LOW);
 }
 else {
  digitalWrite(motorpin,LOW);
  
 }

}
