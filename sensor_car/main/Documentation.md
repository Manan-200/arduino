# Edge Avoidence Arduino Vehicle

## Introduction:
This is an Edge Avoidance Arduino Vehicle made using Arduino Uno, a motor driver and an infrared sensor.
The Arduino is powered by a 9 Volt battery and the motors are powered by a power bank.
It avoids the vehicle to fall off the table.


## Architecture:

The Arduino Uno is connected to a motor driver which controls the rotation of the motors.
The vehicle can go forward, backward or turn in a particular direction.

An infrared sensor is also connected to the Arduino which gives appropriate output after sensing the object in front of it.
The Arduino reads the status of the sensor to monitor ground surface edge and it accordingly controls the movement of the vehicle by controlling the rotation of the motors.


## Mechanism:
The following conditions are checked in an endless loop:

### Condition 1 - If the vehicle is not near any edge:
The sensor senses the surface of the table and returns 1 as an output to the Arduino.

The Arduino receives the input from the sensor at digital pin 10.
Further, it commands the motor to move in an anti-clockwise direction which causes the vehicle to move forward.

### Condition 2 - If the vehicle is near the edge:
There is no surface below the sensor. So, it returns 0 as an output to the Arduino.

The Arduino commands the motors to rotate in a clock-wise direction for 500 milliseconds.
This causes the vehicle to move backward.

Then, the Arduino commands the left motor to rotate clock-wise and right motor to rotate anti-clockwise for 750 milliseconds.
This causes the vehicle to turn towards its left.
