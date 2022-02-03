void setup() {

const int black = 12;
const int brown = 11;
const int orange = 10;
const int yellow = 9;
const int red = 8;

pinMode(black,OUTPUT);
pinMode(brown,OUTPUT);
pinMode(orange,OUTPUT); 
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);

}

void loop() {

PORTB = B001101;
PORTB = B001011;
PORTB = B010011;
PORTB = B010101;
delay(5000);
}
