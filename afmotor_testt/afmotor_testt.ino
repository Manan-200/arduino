#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor2(2, MOTOR12_64KHZ);

void setup() {
  motor1.setSpeed(250);     // set the speed to 200/255
  motor2.setSpeed(250);
}

void loop() {
  motor1.run(FORWARD);      // turn it on going forward
  motor2.run(FORWARD);      // turn it on going forward
  delay(400);
  
 motor1.run(RELEASE);      
  motor2.run(RELEASE);
  delay(2500);
  
}
