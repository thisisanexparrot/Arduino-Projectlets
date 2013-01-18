// Define the analog input pin to measure flex sensor position:

const int flexpin = 0; 
int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() 
{ 
  // Use the serial monitor window to help debug our sketch:
  int index;
  for(index = 0; index <= 7; index++)
  {
    pinMode(ledPins[index],OUTPUT);
    // ledPins[index] is replaced by the value in the array.
    // For example, ledPins[0] is 2
  }

   
  Serial.begin(9600);
} 


void loop() 
{ 
  int flexposition;    // Input value from the analog pin.
  
  flexposition = analogRead(flexpin);
  
  Serial.print("sensor: ");
  Serial.print(flexposition);
  
  
  
  
  
  int sensorValue = analogRead(A0);
  Serial.print(sensorValue);  

  int index;
  int delayTime = flexposition; // milliseconds to pause between LEDs
                       // make this smaller for faster switching

  // Turn all the LEDs on:
 
  // This for() loop will step index from 0 to 7
  // (putting "++" after a variable means add one to it)
  // and will then use digitalWrite() to turn that LED on.
  
  for(index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                
  }                                  

  // Turn all the LEDs off:

  // This for() loop will step index from 7 to 0
  // (putting "--" after a variable means subtract one from it)
  // and will then use digitalWrite() to turn that LED off.
 
  for(index = 7; index >= 0; index--)
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }               

} 


