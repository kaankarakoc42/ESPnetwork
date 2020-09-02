#include<ESP8266WiFi.h>
#include "ESPnetwork.h"
void setup() {
  Serial.begin(115200);
  network.connect("ssid","wifipass");
  Serial.println(WiFi.BSSIDstr());
}
void loop() {

}
