const int GREENLEDPIN=9;
const int REDLEDPIN=10;
const int BLUELEDPIN=11;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GREENLEDPIN, OUTPUT);
   pinMode(REDLEDPIN, OUTPUT);
    pinMode(BLUELEDPIN, OUTPUT);
}

void loop() {
  digitalWrite(GREENLEDPIN, HIGH);   
  delay(850);                       
  digitalWrite(REDLEDPIN, HIGH);    
  delay(850);
  digitalWrite(BLUELEDPIN, HIGH);
  delay(750);
   digitalWrite(GREENLEDPIN, LOW);
  delay(850);
   digitalWrite(BLUELEDPIN, LOW);
  delay(850);
  digitalWrite(REDLEDPIN, LOW);    
  delay(90);
  digitalWrite(GREENLEDPIN, HIGH);   
  delay(850);                       
  digitalWrite(REDLEDPIN, HIGH);    
  delay(850);
  digitalWrite(GREENLEDPIN, LOW);
  delay(850);
  digitalWrite(BLUELEDPIN, HIGH);
  delay(850);
   digitalWrite(REDLEDPIN, LOW);    
  delay(850);
}
