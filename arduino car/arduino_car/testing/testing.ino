const int M1FWOUTPUT=11;
const int M2FWOUTPUT=12;
void setup() {
  // put your setup code here, to run once:
 pinMode(M1FWOUTPUT, OUTPUT);
 pinMode(M2FWOUTPUT, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
PORTB=B00100000;
  delay (1000000);
PORTB=B00000000;
}
