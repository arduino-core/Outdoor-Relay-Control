#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int potentiometer_value1 = 0;
int potentiometer_value2 = 0;
int potentiometer_value3 = 0;
int potentiometer_value4 = 0;
int potentiometer_analogValue1 = 0;
int potentiometer_analogValue2 = 0;
int potentiometer_analogValue3 = 0;
int potentiometer_analogValue4 = 0;
int potentiometer_temperature_min = 0;
int potentiometer_temperature_max = 0;
int temperature_value = 0;
int temperature = 0;
int potentiometer_clock_min = 0;
int potentiometer_clock_max = 0;
int clock_time = 0;

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  lcd.begin(0, 0);
}

void loop(){
  potentiometer_switch();
}

void pin(int pin, int value){
  digitalWrite(pin, value);
}

void temperature_delay(){
  rgb_led(255, 136, 0);
  delay(18000);
  }

void temperature_sensor(){
  temperature_value = analogRead(A0);
  temperature = map(temperature_value, 0, 410, -50, 150);
  temperature_delay();
}

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
  lcd.setCursor(0, 0);
  lcd.print(String(potentiometer_analogValue1) + String(" until ") + String(potentiometer_analogValue3));
  lcd.setCursor(0, 1);
  lcd.print(String(potentiometer_analogValue2) + String(" until ") + String(potentiometer_analogValue4));
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

void rgb_led(int value1, int value2, int value3){
  analogWrite(9, value1);
  analogWrite(10, value2);
  analogWrite(11, value3);
}

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
