int pirPin = 9;
int pirout = 11;
int pirout2 = 10;
int pirStat = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(pirPin,INPUT);
pinMode(pirout,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH) {            // if motion detected
   digitalWrite(pirout, HIGH);
   digitalWrite(pirout2, HIGH);
 } 
   else {
    digitalWrite(pirout, LOW);
    digitalWrite(pirout2, LOW);
 
   }
}
