#include <TB.h>

#define SSID             "SSID" //WIFI Username
#define PASSWORD         "Passowrd" //WIFi Password
#define TOKEN            "Access Token" //Access Token

TB tb;

void setup()
{
  Serial.begin(115200);
  tb.WiFiInit(SSID,PASSWORD);
  tb.Credentials(TOKEN);  
}
void loop()
{
  tb.run();
  tb.deviceAttributes("Device Id",1234);
  delay(3000);
 
}




