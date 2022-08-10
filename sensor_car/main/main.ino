#include <AFMotor.h>

AF_DCMotor m1(1, MOTOR12_64KHZ);
AF_DCMotor m2(2, MOTOR12_64KHZ);

const int sensor_pin = 10;
int sensor_val = 0;

void setup() {
  pinMode(sensor_pin, INPUT);
}

void loop() {
    sensor_val = digitalRead(sensor_pin);
    if (sensor_val == HIGH)
    {
      m1.run(FORWARD);
      m2.run(FORWARD);
    }
}
