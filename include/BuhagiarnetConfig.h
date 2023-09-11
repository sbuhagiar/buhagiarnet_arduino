/**********************************************************

    Buhagiarnet Arduino Library (BuhagiarnetConfig.h)
    This is the setup file for the Buhagiarnet library.


    To do:
        1. Uncomment the line corresponding to the Wifi device being used
        2. Alter SSID1, SSID2, SSID3 to your SSIDs (there are 3 possible SSIDs that can be configured)
        3. Alter PWD1, PWD2, PWD3 to your Wifi passwords
        
        
***********************************************************/


// Step 1. Device to use (uncomment the line corresponding to your device)
#define DEV_ESP8266
//#define WROOM

// Step 2. Alter SSIDx to match your own SSID - Double quotes around SSIDx are required
#define SSID1 "WilbursWifi"
#define SSID2 "ComputrolWifi"
#define SSID3 "Computrol"

// Step 3. Alter PWDx to match your Wifi passwords that correspond to SSIDx - Double quotes around PWDx are required
#define PWD1 "Battlekat"
#define PWD2 "compwireless"
#define PWD3 "compwireless"

