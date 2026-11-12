#include <DHTesp.h>
DHTesp dht;
void setup(){Serial.begin(115200);dht.setup(4,DHTesp::DHT22);}
void loop(){
 TempAndHumidity data=dht.getTempAndHumidity();
 if(isnan(data.temperature)||isnan(data.humidity)){Serial.println("Read failed");}
 else {Serial.print("Temperature: ");Serial.print(data.temperature,1);Serial.print(" C, Humidity: ");Serial.print(data.humidity,1);Serial.println(" %");}
 delay(2000);
}
