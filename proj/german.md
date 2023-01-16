 ### Integers

Ein `Integer` beziehungsweise eine ganze Zahl besteht aus einer **negativen** oder **positiven** Zahl sowie auch der Zahl Null.

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

#### Ganze Zahlen im Projekt

In der nachfolgenden Liste siehst du alle, im Projekt verwendeten `Integers` beziehungsweise ganze Zahlen. Die Definition der `Integers` findest du [hier](#definierte-ganze-zahlen-im-projekt).

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

#### Definierte Ganze Zahlen im Projekt

In dieser Liste sind alle `Integers` beziehungsweise ganze Zahlen, die in diesem Projekt verwendet wurden, definiert.

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
  // Run your code here
}
```
```cpp
void setup(){
  // This code runs one time
}
```
```cpp
void loop(){
  // This code runs immediately
}
```

#### Beispiele

```cpp
void serial_print(text){
  Serial.begin(9600);
  Serial.println(text);
}
```

#### Funktionen

Hier sind alle Funktionen, die für dieses Projekt benötigt werden. Um die Definition der `Integers` beziehungsweise ganzer Zahler zu sehen, gehe zu [diesem Abschnitt](#definierte-integers).

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

### Support us

:wink: You can support us with buying an original [Outdoor Relay Control](https://www.tindie.com/products/arduino-core/outdoor-relay-control/).