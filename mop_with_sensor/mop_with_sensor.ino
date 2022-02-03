#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_64KHZ); 
AF_DCMotor motor2(2, MOTOR12_64KHZ);
    int backdelay = 370;
    int num = 0;
    int num2 = 0;
    int BS1 = 0;         
    int turningdelay = 257;
    const int sensor1 = A0;
        
void setup() {

    pinMode(sensor1, INPUT);
        
    motor1.setSpeed(93);   
    motor2.setSpeed(94);
    
}

void loop() {
  BS1 = digitalRead(sensor1);
  num = num + 1;
  num2= num % 2;
 if (BS1 == LOW)
  {

        if (num2 == 1)
          {
            motor1.run(BACKWARD);
            motor2.run(BACKWARD);
            delay(backdelay);
            motor1.run(FORWARD);
            motor2.run(BACKWARD);
            delay(turningdelay);
            motor1.run(FORWARD);
            motor2.run(FORWARD);
            delay(500);
            motor1.run(FORWARD);
            motor2.run(BACKWARD);
            delay(turningdelay);
          }
        else if (num2 == 0)
          {
            motor1.run(BACKWARD);
            motor2.run(BACKWARD);
            delay(backdelay);
            motor1.run(BACKWARD);
            motor2.run(FORWARD);
            delay(turningdelay);
            motor1.run(FORWARD);
            motor2.run(FORWARD);
            delay(500);
            motor1.run(BACKWARD);
            motor2.run(FORWARD);
            delay(turningdelay);
          }
      }

 else
 {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
 }
}
 

 
