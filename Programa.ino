#define BLYNK_TEMPLATE_ID           "TMPLh9K46uSQ"
#define BLYNK_TEMPLATE_NAME         "Quickstart Device"
#define BLYNK_DEVICE_NAME           "Quickstart Template"
#define BLYNK_AUTH_TOKEN            "-uoIKHH2HU2c8o6rRTn7Rs17MHwM4oD8"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

int servo_pin = D7;  
char ssid[] = "ma3damiCNM";
char pass[] = "chimpitaCNM8891";

Servo servo;

BLYNK_WRITE(V1)// El pin virtual de la aplicacion
{
  int pinValue = param.asInt();
  Serial.print("*****V1 Slider value is: ");
  Serial.println(pinValue);
  servo.write(param.asInt());
}

void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  servo.attach(servo_pin);
}

void loop()
{
  Blynk.run();
}
