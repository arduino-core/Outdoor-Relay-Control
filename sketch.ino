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
}

void loop(){
  // temperature_sensor();
  potentiometer_switch();
  rgb_led();
}

void pin(int pin, int value){
  digitalWrite(pin, value);
}

void temperature_delay(){
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
  potentiometer_analogValue1 = map(potentiometer_value1, 0, 1023, 0, 24); // Clock Potentiometer Min Value Definition
  potentiometer_analogValue2 = map(potentiometer_value2, 0, 1023, 0, 45); // Temperature Sensor Potentiometer Min Value Definition
  potentiometer_analogValue3 = map(potentiometer_value3, 0, 1023, 0, 24); // Clock Potentiometer Max Value Definition
  potentiometer_analogValue4 = map(potentiometer_value4, 0, 1023, 0, 45); // Temperature Sensor Potentiometer Max Value Definition
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
    clock_time = 0;
  }
}

void rgb_led(){
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
}

void rgb_led_saved(){
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
  delay(1000);
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  }
