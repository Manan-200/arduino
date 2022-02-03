#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_64KHZ); 
AF_DCMotor motor2(2, MOTOR12_64KHZ);

    int BS1 = 0;         
    int BS2 = 0;
    int BS3 = 0;
    int BS4 = 0;
    int BS5 = 0;
    
    const int sensor1 = A0 ;
    const int turn1 = A2 ;
    const int turn2 = A3 ;
    const int backward = A4 ;
    const int off = A5 ;
    
void setup() {

    pinMode(sensor1, INPUT);
    pinMode(turn1, INPUT);
    pinMode(turn2, INPUT);
    pinMode(backward, INPUT);
    pinMode(off, INPUT);
        
    motor1.setSpeed(90);   
    motor2.setSpeed(92);
  
}

void loop() {
  BS1 = digitalRead(sensor1);
  BS2 = digitalRead(turn1);
  BS3 = digitalRead(turn2);
  BS4 = digitalRead(backward);
  BS5 = digitalRead(off);

   if (BS5 == HIGH)
        {
        motor1.run(RELEASE);
        motor2.run(RELEASE);
        }

   else if (BS1 == LOW)
        {
         motor1.run(FORWARD);
         motor2.run(BACKWARD);
        }

   else if (BS2 == HIGH)
        {
         motor1.run(FORWARD);
         motor2.run(BACKWARD);
        }
        
   else if (BS3 == HIGH)
        {
         motor1.run(BACKWARD);
         motor2.run(FORWARD);
        }
        
   else if (BS4 == HIGH)
        {
         motor1.run(BACKWARD);  
         motor2.run(BACKWARD); 
        }
   else 
        {
        motor1.run(FORWARD);  
        motor2.run(FORWARD); 
        }
}
