 /*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fading
*/

const int GREENLEDPIN = 9;    // LED connected to digital pin 9
const int REDLEDPIN = 10;
const int BLUELEDPIN = 11;
int ondelay=5000;
int offdelay=10;

void setup() {
  //pinMode(GREENLEDPIN,OUTPUT);
  //pinMode(REDLEDPIN,OUTPUT);
  //pinMode(BLUELEDPIN,OUTPUT);
  
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
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500); 

//patt2 (GREEN = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
   
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
  
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);

//patt3 (RED = ON)

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    
    analogWrite(REDLEDPIN, fadeValue);
  
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);

//patt4 (BLUE =ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
   // analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);

//patt (RED, GREEN = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    //analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);

//patt (RED, BLUE = ON)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    //analogWrite(GREENLEDPIN, fadeValue);
    analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);


//patt (RED = OFF)
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (ondelay);
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREENLEDPIN, fadeValue);
    //analogWrite(REDLEDPIN, fadeValue);
    analogWrite(BLUELEDPIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(offdelay);
  }
delay (500);

}
