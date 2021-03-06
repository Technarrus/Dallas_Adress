
/***************************************************
 *УЗНАТЬ АДРЕС ДАТЧИКА Dallas В МОНИТОРЕ ПОРТА*
 **************************************************/

#include <OneWire.h>
#include <DallasTemperature.h>
 
OneWire oneWire(D2); // вход датчиков 18b20
DallasTemperature ds(&oneWire);

DeviceAddress sensor0;

void setup() {
    Serial.begin(9600);
    ds.begin();
    
    if (!ds.getAddress(sensor0, 0)){ 
      Serial.println("Unable to find address for Device 0"); 
    } 
    
    // отпаравляем адрес из массива в монитор порта
    Serial.print("address sensor 0: ");   
    for (uint8_t i = 0; i < 8; i++)  {  
      Serial.print("0x");   
      Serial.print(sensor0[i], HEX);
      Serial.print(", ");
    }
}

void loop() {

}
