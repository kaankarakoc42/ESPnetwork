#include<ESP8266WiFi.h>
#include "ESPnetwork.h"
void setup() {
  Serial.begin(115200);
  network.connect("ZyXEL_6997","YKEHXC74K4");
  Serial.println(WiFi.BSSIDstr());
}
void loop() {

}
