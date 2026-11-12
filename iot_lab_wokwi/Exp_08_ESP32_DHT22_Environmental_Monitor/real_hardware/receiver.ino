#include <SPI.h>
#include <LoRa.h>
void setup(){Serial.begin(9600);LoRa.setPins(5,14,26);if(!LoRa.begin(433E6)){Serial.println("LoRa init failed");while(true)delay(1000);}}
void loop(){int size=LoRa.parsePacket();if(size){Serial.print("Received: ");while(LoRa.available())Serial.print((char)LoRa.read());Serial.println();}}
