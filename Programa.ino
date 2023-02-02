#define BLYNK_TEMPLATE_ID           "TMPLlW8ZFcKk"

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>

char ssid[] = "***";



Servo servo;

BLYNK_WRITE(V0)// El pin virtual de la aplicacion
{
  servo.write(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(11500);


}
