const int leds[] = {8, 9, 10};
void setAll(bool on){for(int p:leds) digitalWrite(p,on ? HIGH:LOW);}
void setup(){ for(int p:leds) pinMode(p,OUTPUT); pinMode(2,INPUT_PULLUP); pinMode(3,INPUT_PULLUP); Serial.begin(9600); Serial.println("Enter 1=ON, 0=OFF; or press buttons"); }
void loop(){
 if(Serial.available()){
   char c=Serial.read(); if(c=='1')setAll(true); else if(c=='0')setAll(false);
 }
 if(digitalRead(2)==LOW){
   for(int p:leds){digitalWrite(p,HIGH);delay(200);digitalWrite(p,LOW);} 
 } else if(digitalRead(3)==LOW){setAll(true);delay(300);setAll(false);delay(300);}
}
