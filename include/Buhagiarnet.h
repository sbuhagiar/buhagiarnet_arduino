/*

*/
#ifndef Buhagiarnet_h
#define Buhagiarnet_h

#include "Arduino.h"
#include "BuhagiarnetConfig.h"
#ifdef DEV_ESP8266
    #include "ESP8266WiFi.h"
    #include <ESP8266HTTPClient.h>
#endif
#ifdef WROOM
  #include <WiFi.h>
  #include <HTTPClient.h>
#endif

class Buhagiarnet
{
  public:
    
  private:
    
};

class BuhagiarnetWifi
{
    public:
        BuhagiarnetWifi(void);
        bool Connect();
        bool Connected();
        IPAddress getIP();
        String getConnectionDetails();
        
    private:
        String ssid;
        String pword;
        bool connected;

};


#endif