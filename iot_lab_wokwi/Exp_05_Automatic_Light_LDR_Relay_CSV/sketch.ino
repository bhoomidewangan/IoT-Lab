// Wokwi photoresistor module outputs HIGHER ADC values in darkness.
const int threshold=500;
void setup(){ pinMode(7,OUTPUT);pinMode(8,OUTPUT);Serial.begin(9600);}
void loop(){
 int ldr=analogRead(A0);
 bool dark=ldr>threshold;
 digitalWrite(7,dark?HIGH:LOW); // pnp relay module set active-high in diagram
 digitalWrite(8,dark?HIGH:LOW); // demonstration lamp output
 Serial.print(ldr);Serial.print(",");Serial.println(dark?1:0);
 delay(1000);
}
