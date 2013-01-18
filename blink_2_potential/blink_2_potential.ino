int sensorPin = 0;    // The potentiometer is connected to
                      // analog pin 0                      
int ledPin = 13;      // The LED is connected to digital pin 13
int ledPin2 = 12;

void setup() // this function runs once when the sketch starts up
{
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);	
}


void loop() // this function runs repeatedly after setup() finishes
{

  int sensorValue = analogRead(sensorPin);    


  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin2, HIGH);
  delay(sensorValue);

  
  digitalWrite(ledPin, LOW); 
  delay(sensorValue);  
  digitalWrite(ledPin2, LOW);
  delay(sensorValue);  
}

