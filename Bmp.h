#ifndef BMP_H
#define BMP_H

#include <Arduino.h>
#include <Adafruit_BMP085.h>
class Bmp
{
private:
    Adafruit_BMP085 bmp;
    float SEA_LEVEL_PRESSURE;
    float altitude;

public:
    Bmp();
    Bmp(float SEA_LEVEL_PRESSURE);
    void begin();
    float getAltitude();
    void get_readings();
};

#endif