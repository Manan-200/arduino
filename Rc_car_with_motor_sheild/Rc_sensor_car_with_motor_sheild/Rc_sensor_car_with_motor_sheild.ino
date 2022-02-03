#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_1KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor2(2, MOTOR12_1KHZ);

const int sensorinput = A5;
int sensorvalue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(sensorinput, INPUT);

    motor1.setSpeed(250);     // set the speed to 200/255
    motor2.setSpeed(250);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorvalue = digitalRead(sensorinput);

 if (sensorvalue == HIGH) 
    {
          motor1.run(FORWARD);      
          motor2.run(FORWARD); 
}

else {    
          motor1.run(BACKWARD);      
          motor2.run(BACKWARD);
          delay(750);
          motor1.run(FORWARD);      
          motor2.run(RELEASE); 
          delay(500);
          motor1.run(RELEASE);      
          motor2.run(RELEASE); 
          delay(750);
}
}
