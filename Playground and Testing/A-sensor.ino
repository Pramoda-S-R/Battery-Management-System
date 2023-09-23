#include "DHT.h" //install DHT Sensor Library by Adafruit
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.println("Humidity and Temperature ");
  dht.begin();

  }

void loop() {
delay(3000);
float h = dht.readHumidity();
float t = dht.readTemperature();
float k = t + 273.16 ;
Serial.print("\n Humidity\n");
Serial.print(h);
Serial.print("\n Temperature in Celcius \n ");
Serial.print(t);
Serial.println(" C");
Serial.print("Temperature in kelvin \n ");
Serial.print(k);
Serial.println(" K");
}
