// Example MQ-4 analog alert: NOT ppm-calibrated or safety-certified.
const int threshold=400;
void setup(){pinMode(8,OUTPUT);pinMode(9,OUTPUT);Serial.begin(9600);}
void loop(){int raw=analogRead(A0);bool warning=raw>threshold;digitalWrite(8,warning);if(warning)tone(9,1000);else noTone(9);Serial.println(raw);delay(1000);}
