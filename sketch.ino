void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
}

void pin(int pin, type){
  digitalWrite(pin, type);
}

void temperature_sensor(){
  value = analogRead(A0);
  temperature = map(value, 0, 410, -50, 150);
  Serial.print(temperature);
}
