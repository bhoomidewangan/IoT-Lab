#include <SPI.h>
#include <LoRa.h>
#include <DHT.h>
#define SENSORPIN 4
DHT dht(SENSORPIN,DHT22);
void setup(){Serial.begin(9600);dht.begin();LoRa.setPins(5,14,26);if(!LoRa.begin(433E6)){Serial.println("LoRa init failed");while(true)delay(1000);}}
void loop(){float t=dht.readTemperature(),h=dht.readHumidity();if(isnan(t)||isnan(h)){delay(2000);return;}LoRa.beginPacket();LoRa.print("Temp:");LoRa.print(t);LoRa.print(" C Humidity:");LoRa.print(h);LoRa.print(" %");LoRa.endPacket();delay(2000);}
