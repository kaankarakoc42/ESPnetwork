#include "Arduino.h"
#include<ESP8266WiFi.h>

#include "ESPnetwork.h"

ESPnetwork::ESPnetwork(){}

bool ESPnetwork::connect(String  ssid,String  pass){
    WiFi.disconnect();
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,pass);
    Serial.println("\nconnecting...");
    while (WiFi.status()!=WL_CONNECTED)
    {
       delay(500);
       Serial.print("+");
    }
    Serial.println("\nconnected to wifi");
    return true;
} 
void ESPnetwork::wifi(String ssid,String pass){
 WiFi.softAP(ssid,pass); 
}
void ESPnetwork::wifi(String ssid,String pass,int n){
 Serial.println("\nwifi flood has been started.");
 for(int i = 0; i<=n;i++){
 WiFi.softAP(ssid+String(i),pass);
 Serial.println("created ap :"+ssid+String(i));
 delay(500);
}
 Serial.println("ended.");
}
IPAddress ESPnetwork::getlip(){
  return WiFi.localIP();
  }

ESPnetwork network = ESPnetwork();
