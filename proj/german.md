# Outdoor Relay Control

<a href="https://www.tindie.com/products/arduino-core/outdoor-relay-control/"><img src="https://d2ss6ovg47m0r5.cloudfront.net/badges/tindie-larges.png" alt="Ad" width="200" height="104"></a>

## Issues und Pull requests

`#4` Add LCD Display

`#5` Add RTC Module

`#6` Finish Integers section

`#7 Pull request` Merge pull request https://github.com/arduino-core/Outdoor-Relay-Control/pull/7 from MitkoVtori

`#8 Pull request` Merge pull request https://github.com/arduino-core/Outdoor-Relay-Control/pull/8 from MitkoVtori

## Komponenten und Zubehör

* `1` Arduino Uno R3
* `1` Breadboard 800 points
* `1` Breadbord 400 points
* `?` Female Jumper Wires
* `?` Male Jumper Wires
* `1` Temperatur Sensor TMP36
* `1` LCD Display

## Tools and Maschinen

* `1` 3D Drucker

## Links

[Quellcode](https://github.com/arduino-core/Outdoor-Relay-Control)

[Dokumentation](https://hackaday.io/project/189172-outdoor-relay-control)

[Design Dateien](https://wokwi.com/projects/353834225920033793)

[Shop](https://www.tindie.com/products/arduino-core/outdoor-relay-control/)

## Project Beschreibung

[English](/proj/english.md)

[Bulgarian](/proj/bulgarian.md)

[German](/proj/german.md)

### Ganze Zahlen

Ganze Zahlen beziehungsweise `Integer` bestehen aus einer positiven oder negativen Zahl sowie `0`.

```cpp
int year = 2023;
```

#### Beispiele

```cpp
int zero = 0;
```
```cpp
int positive = 2;
```
```cpp
int negative = -4;
```

#### Integer

In der folgenden Liste siehst du alle im Projekt verwendeten ganze Zahlen beziehungsweise `Integer`. Die Definition dieser findest du [hier](#definierte-integer).

```cpp
int potentiometer_value1;
```
```cpp
int potentiometer_value2;
```
```cpp
int potentiometer_value3;
```
```cpp
int potentiometer_value4;
```
```cpp
int potentiometer_analogValue1;
```
```cpp
int potentiometer_analogValue2;
```
```cpp
int potentiometer_analogValue3;
```
```cpp
int potentiometer_analogValue4;
```
```cpp
int potentiometer_temperature_min;
```
```cpp
int potentiometer_temperature_max;
```
```cpp
int temperature_value;
```
```cpp
int temperature;
```
```cpp
int potentiometer_clock_min;
```
```cpp
int potentiometer_clock_max;
```
```cpp
int clock_time;
```

#### Definierte Integer

Die folgende Liste enthält alle im Projekt benutzten ganze Zahlen beziehungsweise `Integer`, welche definiert sind.

```cpp
int potentiometer_value1 = 0;
```
```cpp
int potentiometer_value2 = 0;
```
```cpp
int potentiometer_value3 = 0;
```
```cpp
int potentiometer_value4 = 0;
```
```cpp
int potentiometer_analogValue1 = 0;
```
```cpp
int potentiometer_analogValue2 = 0;
```
```cpp
int potentiometer_analogValue3 = 0;
```
```cpp
int potentiometer_analogValue4 = 0;
```
```cpp
int potentiometer_temperature_min = 0;
```
```cpp
int potentiometer_temperature_max = 0;
```
```cpp
int temperature_value = 0;
```
```cpp
int temperature = 0;
```
```cpp
int potentiometer_clock_min = 0;
```
```cpp
int potentiometer_clock_max = 0;
```
```cpp
int clock_time = 0;
```

### Funktionen

```cpp
void {function}({attributes}){
  // Hier ist dein Code
}
```
```cpp
void setup(){
  // Diese Funktion lässt den Code am Anfang einmal wiederholen
}
```
```cpp
void loop(){
  // Dieser Code wiederholt sich ohne Verzögerung
}
```

#### Funktionen in diesem Projekt

Hier sind alle Funktionen aus diesem Projekt. Die Definition der ganzen Zahlen beziehungsweise `Integer` findest du in [diesem Abschnitt](#definierte-integer).

```cpp
void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}
```
```cpp
void loop(){
  potentiometer_switch();
}
```
```cpp
void pin(int pin, int value){
  digitalWrite(pin, value);
}
```
```cpp
void temperature_delay(){
  rgb_led(255, 136, 0);
  delay(18000);
  }
```
```cpp
void temperature_sensor(){
  temperature_value = analogRead(A0);
  temperature = map(temperature_value, 0, 410, -50, 150);
  temperature_delay();
}
```
```cpp
void potentiometer_switch(){
  potentiometer_value1 = analogRead(A1);
  potentiometer_clock_min = analogRead(A1);
  potentiometer_value2 = analogRead(A2);
  potentiometer_temperature_min = analogRead(A2);
  potentiometer_value3 = analogRead(A3);
  potentiometer_clock_max = analogRead(A3);
  potentiometer_value4 = analogRead(A4);
  potentiometer_temperature_max = analogRead(A4);
  potentiometer_analogValue1 = map(potentiometer_value1, 0, 1023, 0, 24);
  potentiometer_analogValue2 = map(potentiometer_value2, 0, 1023, 0, 45);
  potentiometer_analogValue3 = map(potentiometer_value3, 0, 1023, 0, 24);
  potentiometer_analogValue4 = map(potentiometer_value4, 0, 1023, 0, 45);
  rgb_led_procress();
  if (temperature_value >= potentiometer_temperature_min){
    // Turn on the Relay
    }
  else if (temperature_value <= potentiometer_temperature_max){
    // Turn off the Relay
    }
  if (clock_time >= potentiometer_clock_min){
    temperature_sensor();
    }
  else if (clock_time <= potentiometer_clock_max){
    temperature_value = 0;
    clock_time = 0;
  }
}
```
```cpp
void rgb_led(int value1, int value2, int value3){
  analogWrite(9, value1);
  analogWrite(10, value2);
  analogWrite(11, value3);
}
```
```cpp
void rgb_led_procress(){
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  }
```

### Unterstütze uns

:wink: Du kannst uns unterstützen, indem du ein [Outdoor Relay Control](https://www.tindie.com/products/arduino-core/outdoor-relay-control/) kaufst.
