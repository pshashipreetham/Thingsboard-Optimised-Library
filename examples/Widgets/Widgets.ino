#include <TB.h>

#define SSID             "SSID" //WIFI Username
#define PASSWORD         "PASSOWRD" //WIFi Password
#define TOKEN            "ACCESS TOKEN" //Access Token

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
  String widget_msg = tb.getWidget();
  String widget_value = tb.getWidget("setValue"); //Can be Modifiable in tb.io
  Serial.println("Widget Json Data  =" + widget_msg);
  Serial.println("Widget Value = " + widget_value);
  delay(500);  
}

