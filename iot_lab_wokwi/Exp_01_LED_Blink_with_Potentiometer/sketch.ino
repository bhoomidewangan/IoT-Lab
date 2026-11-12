int ledPin = 13, potPin = A0;
void setup(){ pinMode(ledPin, OUTPUT); Serial.begin(9600); }
void loop(){
  int value = analogRead(potPin);
  int ms = map(value, 0, 1023, 100, 1000);
  Serial.println(ms);
  digitalWrite(ledPin,HIGH); delay(ms);
  digitalWrite(ledPin,LOW); delay(ms);
}
