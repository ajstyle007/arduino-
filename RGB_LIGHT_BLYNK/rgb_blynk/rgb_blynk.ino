#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "XXXXXXXXXX";  //Authentication Code sent by Blynk to Mail ID

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, "XXXXXX", "XXXXXXXX");  //WIFI Name and Password
}

void loop()
{
  Blynk.run();
}
