// Sol Ön
const int in1=8; 
const int in2=9;
// Sağ Ön
const int in3=10;
const int in4=11;

int serialCommand=0;

void setup() {
  
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // 
  Serial.begin(9600);
  Serial.println("Sistem Calisti");
}

void loop() 
{
  if (Serial.available() > 0){
    serialCommand = (int)Serial.read(); 
    
    if (serialCommand =='0') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      Serial.println("Motorlar durduruldu.");
    } 
    
    if (serialCommand =='1') {
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      
      Serial.println("Ileri");
    } 
    
    if (serialCommand =='2') {
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      
      Serial.println("Geri");
    }
  }       
}
