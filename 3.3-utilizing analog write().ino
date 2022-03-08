int redLED=11;
int greenLED=10;
int blueLED=9;
int waitTime=1000;
int X=1;


void setup() {
  while(X<=1){
  analogWrite(redLED, 255);
  delay(waitTime);
  analogWrite(redLED, 102);
  delay(waitTime);
  analogWrite(redLED, 0);
  delay(waitTime);
  analogWrite(greenLED, 255);
  delay(waitTime);
  analogWrite(greenLED, 102);
  delay(waitTime);
  analogWrite(greenLED, 0);
  delay(waitTime);
  analogWrite(blueLED, 255);
  delay(waitTime);
  analogWrite(blueLED, 102);
  delay(waitTime);
  analogWrite(blueLED, 0);
  delay(waitTime);
  }
}

void loop() {
    
}
