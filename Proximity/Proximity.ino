const int proxPin = 0;


void setup()
{
    Serial.begin(9600);
}


void loop()
{

  float voltage;


  voltage = getVoltage(proxPin);
 
  Serial.print("voltage: ");
  Serial.println(voltage);
 
    
  delay(200); 
}


float getVoltage(int pin)
{
  
  return (analogRead(pin) * 0.004882814);
  
}

