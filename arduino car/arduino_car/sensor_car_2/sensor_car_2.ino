const int M1FWOUTPUT = 10;  
const int M1BKOUTPUT = 11;  
const int M2FWOUTPUT = 12;   
const int M2BKOUTPUT = 13;   
const int SENSORPIN = 9; 
const int SENSORPIN2 = 8; 
int SENSORSTATE = 0;
int SENSORSTATE2 = 0;
int revcount; 
int leftturncount;


void setup() {
  // put your setup code here, to run once:
  pinMode(M1FWOUTPUT, OUTPUT);
   pinMode(M1BKOUTPUT, OUTPUT);
    pinMode(M2FWOUTPUT, OUTPUT);
     pinMode(M2BKOUTPUT, OUTPUT);
      pinMode(SENSORPIN, INPUT);
        pinMode(SENSORPIN2,INPUT);                      
        
}

void loop() {
SENSORSTATE= digitalRead(SENSORPIN);
SENSORSTATE2= digitalRead(SENSORPIN2);
 if (SENSORSTATE2 == HIGH) {
  PORTB = B00000000;
  delay (200);
  PORTB = B00101000;
  delay (250);
  PORTB = B00000000;
  delay (250);
  PORTB = B00101000;
  delay (250);
  PORTB = B00001000;
  delay (250);
  PORTB = B00000000;
 }
  
     else if (SENSORSTATE == LOW) {
      PORTB = B00000000;
      delay (200);
  
  for (int revcount = 0; revcount <= 10; revcount++)
  {
  PORTB = B00101000;
  delay (20); 
  PORTB = B00000000;
  delay (30);
  }
  
  for (int leftturncount = 0; leftturncount <=10; leftturncount++)
  {
  PORTB = B00010000;
  delay (20); 
  PORTB = B00000000;
  delay (30);
  }
 }
 else {
        PORTB = B00010100;
        delay(10);
        PORTB = B00000000;
        delay (30);
      }
}
