// global
#include <Arduino.h>
// #include <SoftwareSerial.h>

// local includes
#include "Gps.h"
// #include "Checkstate.h"

const uint8_t GPS_TX_PIN = 17;
const uint8_t GPS_RX_PIN = 16;

// gps
SoftwareSerial GPSModule(GPS_RX_PIN, GPS_TX_PIN);
Gps gps(&GPSModule);

void setup()
{
    delay(1000);
    Serial.begin(115200);
    gps.begin(9600);
    // Checkstate state(100.0, 40.0, 15.0);
    // int currentstate = state.checkState();
    // Serial.print("the current state is:");
    // Serial.print(currentstate);
}

void loop()
{
    Serial.println("Board is online");
    gps.get_gps_readings();
    float latitude = gps.getLatitude();
    float longitude = gps.getLongitude();
    Serial.printf("latitude %.3f\n", latitude);
    Serial.printf("longitude %.3f\n", longitude);
}
