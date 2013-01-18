void setup() {
  pinMode(2, OUTPUT);
}

void loop () {
  int slidePos = analogRead(0);
  Serial.print("Sensor: " + String(slidePos));
 
  int ratio = slidePos/100;
  
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(2, LOW);
  delay(slidePos); 
}
