int motorPin1 = 8;          
int motorPin2 = 9;
int motorPin3 = 10;
int motorPin4 = 11;
int motorDelayTime = 5;

int buttonPinIleri=2;
int buttonPinGeri=3;

int buttonStatusIleri=0;
int buttonStatusGeri=0;

int ledPin = 13; 

void setup(){
  pinMode(ledPin, OUTPUT); 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  
  pinMode(buttonPinIleri, INPUT);
  pinMode(buttonPinGeri, INPUT);
}

void loop(){
  buttonStatusIleri=digitalRead(buttonPinIleri);      
  buttonStatusGeri=digitalRead(buttonPinGeri);
  
  if (buttonStatusIleri == HIGH)
      {
          digitalWrite(ledPin, HIGH);  
          digitalWrite(motorPin1, HIGH);
          digitalWrite(motorPin2, LOW);
          digitalWrite(motorPin3, LOW);
          digitalWrite(motorPin4, LOW);
          delay(motorDelayTime);
          digitalWrite(motorPin1, LOW);
          digitalWrite(motorPin2, HIGH);
          digitalWrite(motorPin3, LOW);
          digitalWrite(motorPin4, LOW);
          delay(motorDelayTime);
          digitalWrite(motorPin1, LOW);
          digitalWrite(motorPin2, LOW);
          digitalWrite(motorPin3, HIGH);
          digitalWrite(motorPin4, LOW);
          delay(motorDelayTime);
          digitalWrite(motorPin1, LOW);
          digitalWrite(motorPin2, LOW);
          digitalWrite(motorPin3, LOW);
          digitalWrite(motorPin4, HIGH);
          delay(motorDelayTime);
      }
      else {
        digitalWrite(ledPin, LOW);
      }
        
      if (buttonStatusGeri == HIGH){
        digitalWrite(ledPin, HIGH); 
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, LOW);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, HIGH);
        delay(motorDelayTime);
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, LOW);
        digitalWrite(motorPin3, HIGH);
        digitalWrite(motorPin4, LOW);
        delay(motorDelayTime);
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(motorDelayTime);
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, LOW);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(motorDelayTime);
      }
     else {
        digitalWrite(ledPin, LOW);
      }
}
