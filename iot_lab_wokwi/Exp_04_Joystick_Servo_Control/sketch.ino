#include <Servo.h>
Servo servo;
void setup(){servo.attach(9);Serial.begin(9600);}
void loop(){int x=analogRead(A0);int angle=map(x,0,1023,0,180);servo.write(angle);Serial.println(angle);delay(20);}
