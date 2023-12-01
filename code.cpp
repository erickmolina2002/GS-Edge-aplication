int ledPin = 13;
int buzzerPin = A0;
int sensorPin = A1;

unsigned long previousTime = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == true) {
    previousTime = millis();
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  } 
  	
   if ((millis() - previousTime) >= 10000) { // (10000 = 10segundos para testar coloque, aplicação real deve ser 86400000 que no caso é 24h)
    digitalWrite(ledPin, HIGH); 
    digitalWrite(buzzerPin, HIGH); 
  }     
  
  delay(100);
}
