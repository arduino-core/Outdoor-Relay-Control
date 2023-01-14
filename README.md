# Greenhouse Automation

## Components and suplies

* `1` Arduino Uno R3
* `1` Breadboard 800 points
* `21` Female Jumper Wires
* `42` Male Jumper Wires

## Tools and Machines

* `1` 3D printer

## Schema

[See the Schema](https://wokwi.com/projects/353834225920033793)

## Project description

```cpp
int potentiometer_value1 = 0;
int potentiometer_value2 = 0;
int potentiometer_value3 = 0;
int potentiometer_value4 = 0;
```
Set the value of the potentiometers
```cpp
int potentiometer_analogValue1 = 0;
int potentiometer_analogValue2 = 0;
int potentiometer_analogValue3 = 0;
int potentiometer_analogValue4 = 0;
```
Set the analog value of the potentiometers
```cpp
int potentiometer_temperature_min = 0;
int potentiometer_temperature_max = 0;
```
Set the min/max temperature value of the potentiometers
```cpp
int temperature_value = 0;
int temperature = 0;
```
Set the temperature value of the potentiometers
```cpp
int potentiometer_clock_min = 0;
int potentiometer_clock_max = 0;
```
Set the min/max clock value of the potentiometers
```cpp
int clock_time = 0;
```
Set the clock value of the potentiometers
