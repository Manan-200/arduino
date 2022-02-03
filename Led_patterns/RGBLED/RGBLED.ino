const int GREENLEDPIN = 9;   
const int REDLEDPIN = 10;
const int BLUELEDPIN = 11;


void setup() {
  pinMode(GREENLEDPIN,OUTPUT);
  pinMode(REDLEDPIN,OUTPUT);
  pinMode(BLUELEDPIN,OUTPUT);
  
}

void loop() {
  // fade in from min to max in increments of 5 points:
  
  //patt1 (RED,GREEN,BLUE = ON)
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500); 

//patt2 (GREEN = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
   
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
  
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);

//patt3 (RED = ON)

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    
    analogWrite(REDLEDPIN, fadeValue);
  
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);

//patt4 (BLUE =ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
   // analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);

//patt (RED, GREEN = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);

//patt (RED, BLUE = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);


//patt (RED = OFF)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (5000);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
delay (500);

}
