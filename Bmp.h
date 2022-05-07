#ifndef BMP_H
#define BMP_H

#include <Arduino.h>
#include <Adafruit_BMP085.h>
// #include <Adafruit_Sensor.h>

class Bmp
{

private:
    Adafruit_BMP085 bmp;
    int SHORT_DELAY;
    int SEA_LEVEL_PRESSURE;
    float altitude;

public:
    Bmp(int SHORT_DELAY, int SEA_LEVEL_PRESSURE);
    float getAltitude();
    void get_readings();
};

#endif