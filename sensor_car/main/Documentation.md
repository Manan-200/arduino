# Edge Avoidance Arduino Vehicle

## Introduction:
This is an Edge Avoidance Arduino Vehicle made using Arduino Uno, a motor driver and an infrared sensor.
The Arduino is powered by a 9 Volt battery and the motors are powered by a power bank.
The main function of the vehicle is to prevent itself from falling off the table.


## Architecture:

The Arduino Uno is connected to a motor driver which controls the rotation of the motors.
The vehicle can go forward, backward or turn to change its travel direction.

An infrared sensor is also connected to the Arduino which gives appropriate output after sensing the object in front of it.
The Arduino monitors the ground surface edge by reading the sensor sensor output and accordingly controls the movement of the vehicle by controlling the rotation of the motors.


## Mechanism:
The following conditions are checked in an endless loop:

### Condition 1 - If the vehicle is not near any edge:
The sensor senses the surface of the table and returns 1 as an output to the Arduino.

The Arduino receives the input from the sensor at digital pin 10.
Further, it commands all the motors to move in forward direction which causes the vehicle to move forward.

### Condition 2 - If the vehicle is near the edge:
There is no surface below the sensor. So, it returns 0 as an output to the Arduino.

The Arduino commands all the motors to rotate in backward direction for 500 milliseconds.
This causes the vehicle to move backward.

After that, the Arduino commands both the left motors to rotate backward and both right motors to rotate forward for 750 milliseconds.
This causes the vehicle to turn towards its left.
