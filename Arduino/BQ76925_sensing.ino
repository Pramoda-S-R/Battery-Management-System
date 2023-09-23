#include <SoftwareSerial.h>
SoftwareSerial s(5,6);
#include <ArduinoJson.h>

#define PWR_I2C_ADDRESS 1

#define ALERT_PIN 2
int a,b,c,d,e,f ;

StaticJsonBuffer<1000> jsonBuffer;
JsonObject& root = jsonBuffer.createObject();

void setup()
{
  //Wire.begin();
  Serial.begin(115200);
  s.begin(115200);
}

void loop()
{  
  Serial.print("Current :" );
  a =analogRead(A0);
  b=map(a,0,310,0,3);
  root["sensor1"]= b;
  Serial.print(b); 
  Serial.print("(");
  Serial.print(a);
  Serial.print(")");
  
  Serial.print("  Voltage :" );
  c=analogRead(A1);
  d=map(c,0,370,0,12);
  root["sensor2"]= d;
  Serial.print(d);
  Serial.print("(");
  Serial.print(c);
  Serial.print(")");
  
  Serial.print("  Temp :" );
  e=analogRead(A2); 
  f=map(e,0,500,-45,45);
  root["sensor3"]= f;
  if(s.available()>0)
  {
    root.printTo(s);
  }
  Serial.print(f);
  Serial.print("(");
  Serial.print(e);
  Serial.println(")"); 
  delay(500);
}

//work in progress

int accessAddress(int regAddress)
{
  return (PWR_I2C_ADDRESS<<5)+regAddress;
}
