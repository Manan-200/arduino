#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor2(2, MOTOR12_64KHZ);

    int BS1 = 0;         
    int BS2 = 0;
    int BS3 = 0;
    int BS4 = 0;

    const int SW3UP = A0;
    const int SW2BACK = A1; 
    const int SW1LEFT = A2; 
    const int SW0RIGHT = A3;

void setup() {

    pinMode(SW3UP, INPUT);
    pinMode(SW2BACK, INPUT);
    pinMode(SW1LEFT, INPUT);
    pinMode(SW0RIGHT, INPUT);
      
    motor1.setSpeed(255);     // set the speed to 200/255
    motor2.setSpeed(255);
  
}

void loop() {
  BS1 = digitalRead(SW3UP);
  BS2 = digitalRead(SW2BACK);
  BS3 = digitalRead(SW1LEFT);
  BS4 = digitalRead(SW0RIGHT);
  
  if (BS1 == HIGH) 
    {
          motor1.run(FORWARD);      // turn it on going forward
          motor2.run(FORWARD);      // turn it on going forward
    }else if (BS2 == HIGH)
        {
               motor1.run(BACKWARD);      // turn it on going forward
               motor2.run(BACKWARD);
        }else if (BS3 == HIGH)
        {
               motor1.run(FORWARD);       // turn it on going forward
               motor2.run(RELEASE);
        }else if (BS4 == HIGH)
        {
               motor2.run(FORWARD);
               motor1.run(RELEASE);
        }
        else
        {
         motor1.run(RELEASE);      // turn it on going forward
         motor2.run(RELEASE); 
        }
}
