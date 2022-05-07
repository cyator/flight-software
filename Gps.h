#ifndef GPS_H
#define GPS_H

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <TinyGPS++.h>

class Gps
{

private:
    uint8_t GPS_TX_PIN;
    uint8_t GPS_RX_PIN;
    float latitude;
    float longitude;

public:
    Gps(uint8_t GPS_TX_PIN, uint8_t GPS_RX_PIN);
    float getLongitude();
    float getLatitude();
    void get_gps_readings();
    String ConvertLat(String nmea[15]);
    String ConvertLng(String nmea[15]);
};

#endif