#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_64KHZ);
AF_DCMotor motor2(2, MOTOR12_64KHZ);

    int BS1 = 0; 
    int BS2 = 0;       
    
    const int input1 = A0 ;
    const int input2 = A1 ;
      
void setup() {

    pinMode(input1, INPUT);
    pinMode(input2, INPUT);
        
    motor1.setSpeed(150);   
    motor2.setSpeed(150);
  
}

void loop() {

  BS1 = digitalRead(input1);
  BS2 = digitalRead(input2);
  
        if (BS1 == HIGH)
        {
         motor1.run(FORWARD);
        }
        
        else if (BS2 == HIGH)
        {
         motor2.run(FORWARD); 
        }
}
