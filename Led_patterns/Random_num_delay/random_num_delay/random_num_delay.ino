const int r = 13;
const int g = 12;
const int b = 11;
int counter = 0;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  for (int i = 0 ; i <= 255; i += 85) {

    counter += 1;
    
    Serial.println("counter:");
    Serial.println(counter);
    
    int x = random(500,1000);
    int y = random(500,1000);
    int z = random(500,1000);
    
    int a = 2*(x+y+z);
    int b = 2*(y+z);
    int c = 2*(z);
    
    analogWrite(r,i);
    delay (x);
    Serial.println("Red light on to off time [2(x+y+z)]:");
    Serial.println(a);
    
    analogWrite(b,i);
    delay (y);
    Serial.println("Blue light on to off delay [2(y+z)]:");
    Serial.println(b);
    
    analogWrite(g,i);
    delay (z);
    Serial.println("Green light on to off delay [2(z)]:");
    Serial.println(c);
    
    delay (z);
    analogWrite(g,LOW);

    delay (y);
    analogWrite(b,LOW);

    delay (x);
    analogWrite(r,LOW);
  }
  delay (1000);
}
