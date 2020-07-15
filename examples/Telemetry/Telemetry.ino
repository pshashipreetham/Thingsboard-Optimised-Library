#include <TB.h>

#define SSID             "SSID" //WIFI Username
#define PASSWORD         "Password" //WIFi Password
#define TOKEN            "Access Token" //Access Token

TB tb;

int val;

void setup()
{
  Serial.begin(115200);
  tb.WiFiInit(SSID,PASSWORD);
  tb.Credentials(TOKEN);  
}
void loop()
{
  tb.run();
  val =  random(1,100);
  tb.deviceTelemetry("Sensor 1",val);
  delay(5000); //uploads data every 5 sec
}

