int clickcount = 0;
int buttonState = 0;
int blinkStyle = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}
 
void loop() {
  if(buttonState != digitalRead(2)){
    //delay(10);

    Serial.println(String(clickcount));
    if(blinkStyle < 3) {
      blinkStyle++;
    }
    else {
      blinkStyle = 0; 
    }
    Serial.println("Print style " + String(blinkStyle));



    int buttonStateCheck = digitalRead(2);
    if(buttonState == buttonStateCheck) {
      buttonState = digitalRead(2);

      if(buttonState == 0) {
        clickcount++;
      }
    }
    
  }
  
  if(digitalRead(2) > 0) {
    switch (blinkStyle) {
      case 0:
        digitalWrite(3, HIGH);
        delay(400);
        digitalWrite(3, LOW);
        delay(400);
        break;
      case 1:
        digitalWrite(3, HIGH);
        delay(200);
        digitalWrite(3, LOW);
        delay(200);
        break;
      case 2:
        digitalWrite(3, HIGH);
        delay(100);
        digitalWrite(3, LOW);
        delay(100);
        break;
      case 3:
        digitalWrite(3, HIGH);
        delay(10);
        digitalWrite(3, LOW);
        delay(10); 
        break;
      default:
        digitalWrite(3, HIGH);
        delay(10);
        digitalWrite(3, LOW);
        delay(10);
    }
  }

}
