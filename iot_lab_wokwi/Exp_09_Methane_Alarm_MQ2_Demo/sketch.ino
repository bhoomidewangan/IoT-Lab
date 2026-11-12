// MQ2 SIMULATOR SUBSTITUTE for specified MQ4 methane sensor.
// Illustrative raw ADC threshold, NOT methane concentration in ppm.
const int threshold=400;
void setup(){pinMode(8,OUTPUT);pinMode(9,OUTPUT);Serial.begin(9600);}
void loop(){
 int gas=analogRead(A0);
 bool high=gas>threshold;
 digitalWrite(8,high?HIGH:LOW);
 if(high)tone(9,1000);else noTone(9);
 Serial.print("Gas ADC: ");Serial.print(gas);Serial.println(high?" WARNING":" normal");
 delay(1000);
}
