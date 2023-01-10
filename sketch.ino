void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
  temperature_sensor();
  potentiometer_switch();
}

void pin(int pin, int value){
  digitalWrite(pin, value);
}

void temperature_sensor(){
  value = analogRead(A0);
  temperature = map(value, 0, 410, -50, 150);
  Serial.print(temperature);
  delay(180000);
}

void potentiometer_switch(){
  value1 = analogRead(A1);
  value2 = analogRead(A2);
  value3 = analogRead(A3);
  value4 = analogRead(A4);
  analogValue1 = map(value1, 0, 1023, 0, 24);
  analogValue2 = map(value2, 0, 1023, 0, 45);
  analogValue3 = map(value3, 0, 1023, 0, 24);
  analogValue4 = map(value4, 0, 1023, 0, 45);
}
