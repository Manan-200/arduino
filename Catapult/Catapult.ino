const int m1pull=11;
const int m2pull=12;

void setup() {
   Serial.begin(9600);
//  int i = 100;
pinMode(m1pull, OUTPUT);
pinMode(m2pull, OUTPUT);
}

void loop() {
 
   for (int i=20; i >= 0; i--)
        {
        Serial.println(i);
        PORTB=B011000;
        delay(10);
        PORTB=B000000;
        delay(10);
        } 
    
   PORTB=B000000;
   delay(5000);
  
}
