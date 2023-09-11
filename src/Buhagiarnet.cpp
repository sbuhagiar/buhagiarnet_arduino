/*

*/

#include "Arduino.h"
#include "Buhagiarnet.h"

BuhagiarnetWifi::BuhagiarnetWifi(void)
{

}

bool BuhagiarnetWifi::Connect()
{
    this->connected = 0;    
    int i = 0;

    //Round 1
    WiFi.begin(SSID1, PWD1);
    while ((WiFi.status() != WL_CONNECTED) && (i<10)) 
    { 
        i++;
        delay(1000);
    }

    if(WiFi.status() == WL_CONNECTED)
    {
        this->ssid = SSID1;
        this->pword = PWD1;
        this->connected=true;
        return this->connected;
    }

    //Round 2
    i = 0;
    WiFi.begin(SSID2, PWD2);
    while ((WiFi.status() != WL_CONNECTED) && (i<10)) 
    { 
        i++;
        delay(1000);
    }

    if(WiFi.status() == WL_CONNECTED)
    {
        this->ssid = SSID2;
        this->pword = PWD2;
        this->connected=true;
        return this->connected;
    }

    //Round 3
    i = 0;
    WiFi.begin(SSID3, PWD3);
    while ((WiFi.status() != WL_CONNECTED) && (i<10)) 
    { 
        i++;
        delay(1000);
    }

    if(WiFi.status() == WL_CONNECTED)
    {
        this->ssid = SSID3;
        this->pword = PWD3;
        this->connected=true;
        return this->connected;
    }   
    
    return this->connected;
}

bool BuhagiarnetWifi::Connected()
{
    return this->connected;
}

IPAddress BuhagiarnetWifi::getIP()
{
    return WiFi.localIP();
}

String BuhagiarnetWifi::getConnectionDetails()
{
    String details;

    if(this->Connected())
    {
        details = "Connected: true\r\n";
        details += "SSID: " + this->ssid + "\r\n"; 
        details += "IP address: " + this->getIP().toString();      
    }
    else
        details = "Connected: false\r\n";

    return details;

}