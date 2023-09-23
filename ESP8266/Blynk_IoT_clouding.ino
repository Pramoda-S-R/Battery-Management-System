#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
SoftwareSerial s(D6,D5);
#include <ArduinoJson.h>

int sensor_value1=0; // Variable to store Sensor Output
int sensor_value2=0; // Variable to store Sensor Output
int sensor_value3=0; // Variable to store Sensor Output

#define BLYNK_TEMPLATE_ID           "TMPL30Jm3O2MQ"
#define BLYNK_TEMPLATE_NAME         "Quickstart Template"
#define BLYNK_AUTH_TOKEN            "LHDA7qnS0H54c4LIJ3MvgTCqUeE_nLDS"

char ssid[] = "Pramoda";
char pass[] = "9036364437";

// Blynk functions may take over here
 
void setup() 
{
  // Initialize Serial port
  Serial.begin(115200);
  s.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  while (!Serial) continue;
  //work in progress... main components aren't included yet
}
 
void loop() 
{
  StaticJsonBuffer<1000> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(s);
  if (root == JsonObject::invalid())
  {
    return;
  }
  sensor_value1=root["sensor1"];
  sensor_value2=root["sensor2"];
  sensor_value3=root["sensor3"];
  Serial.print("Current:");
  Serial.print(sensor_value1);
  Serial.print(", voltage:");
  Serial.print(sensor_value2);
  Serial.print(", Temp:");
  Serial.println(sensor_value3);
  Blynk.run();

  //things may change here...
  
}
