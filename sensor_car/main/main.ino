#include <AFMotor.h>

#initializing motors
AF_DCMotor m1(1, MOTOR12_64KHZ);
AF_DCMotor m2(2, MOTOR12_64KHZ);

const int sensor_pin = 10; #CONNECT SENSOR AT PIN 10
int sensor_val = 0; #sensor input

void setup() {
  pinMode(sensor_pin, INPUT);
  m1.setSpeed(150);
  m2.setSpeed(150);
}

void loop() {
    sensor_val = digitalRead(sensor_pin); #Reading input from sensor
    if (sensor_val == HIGH)
    {
      m1.run(FORWARD);
      m2.run(FORWARD);
    }
    if (sensor_val == LOW)
    {
      m1.run(BACKWARD);
      m2.run(BACKWARD);
      delay(750);
      m1.run(FORWARD);
      m2.run(BACKWARD);
      delay(500);
      m1.run(RELEASE);
      m2.run(RELEASE);
      delay(750);
    }
}
