# Thingsboard Optimised MQTT Arduino Library
This is an Little bit Optimised and easy to use Thingsboard MQTT Arduino library for **ESP32** and **ESP8266/NodeMcu** boards, which written from sctratch with refernce to 
[MQTT Device API documentation](https://thingsboard.io/docs/reference/mqtt-api/) of Thingsboard

**Prerequisites:**</br>
- [x] For EPS32 Dev Board, ESP32 Board Installation should be done in Arduino IDE </br>
- [x] For EPS826 based Dev Boards, ESP8266 Board Installation should be done in Arduino IDE <br/>


**How to install this library in Arduino IDE ?</br>**
Download the code from Github and extract it you can find the folder, paste it accordingly as shown below</br>

**Ubuntu:** Paste the code in 
```console
home/Arudino/libraries/
```
**Windows:** Paste the code in 
```console
Documents\Arudino\libraries\
```

Then goto **Arduino IDE-->File-->Examples-->TB**, where you can find the three examples that is Telemetry, Widgets & Attributes

* **Telemtry:** This is Example is used to send the Sensor data to **Latest Telemetry**.</br>

* **Widgets:** This is Example is used to get the data from the Widgets(Including the Terminal) which are present in your **Dashboards**.</br>

* **Attributes:** This is Example is used to send the Sensor data to **Attributes** Tab.</br>


**Note:** If there is any issue in the Library or in the **Arduino IDE** regarding the **ESP32** or **ESP8266/Nodemcu** Boards please open an issue, Happy to help !
