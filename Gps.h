#ifndef GPS_H
#define GPS_H

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <TinyGPS++.h>

class Gps
{

private:
    SoftwareSerial *GPSModule;
    float latitude;
    float longitude;

public:
    Gps(SoftwareSerial *GPSModule);
    float getLongitude();
    float getLatitude();
    void get_gps_readings();
    String ConvertLat(String nmea[15]);
    String ConvertLng(String nmea[15]);
};

#endif