#include "Arduino.h"
#include<ESP8266WiFi.h>

#ifndef ESPnetwork_h
#define ESPnetwork_h

class ESPnetwork
{
public:
  ESPnetwork();
  bool connect(String  ssid,String  pass);
  void wifi(String ssid,String pass);
  void wifi(String ssid,String pass,int n);
  IPAddress getlip();
  String getmac();
};
extern ESPnetwork network; 
#endif
