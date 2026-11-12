const int trig=9, echo=10;
void setup(){pinMode(trig,OUTPUT);pinMode(echo,INPUT);for(int p=2;p<=4;p++)pinMode(p,OUTPUT);Serial.begin(9600);}
void loop(){
 digitalWrite(trig,LOW);delayMicroseconds(2);digitalWrite(trig,HIGH);delayMicroseconds(10);digitalWrite(trig,LOW);
 unsigned long t=pulseIn(echo,HIGH,30000);
 for(int p=2;p<=4;p++)digitalWrite(p,LOW);
 if(!t){Serial.println("No echo");delay(500);return;}
 float cm=t*0.0343/2;
 if(cm>15){digitalWrite(2,HIGH);Serial.println("EMPTY / LOW");}
 else if(cm>5){digitalWrite(3,HIGH);Serial.println("PARTLY FILLED");}
 else {digitalWrite(4,HIGH);Serial.println("FULL / OVERFLOW LEVEL");}
 Serial.print("Distance cm: ");Serial.println(cm);
 delay(500);
}
