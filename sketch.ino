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
  value = analogRead(A1);
}
