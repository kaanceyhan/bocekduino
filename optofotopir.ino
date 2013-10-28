// Canon trigger
// ePIR + 4N25 

int ledPin = 13;
int pirPin=7;
int shutterPin = 9;
int focusPin=11;
int pirStatus=0;

void setup(){
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(shutterPin, OUTPUT);
  pinMode(focusPin, OUTPUT);
}

void loop(){
  pirStatus=digitalRead(pirPin);
  if (pirStatus == LOW){
    digitalWrite(ledPin, HIGH);
    digitalWrite(focusPin, HIGH); 
    delay(300);
    digitalWrite(focusPin, LOW); 
    delay(100);
    digitalWrite(shutterPin, HIGH); 
    delay(100);
    digitalWrite(shutterPin, LOW); 
    delay(300);
    digitalWrite(ledPin, LOW);    
    delay(900);    
  }
}
