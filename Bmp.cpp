#include "Bmp.h"

Bmp::Bmp()
{
    SEA_LEVEL_PRESSURE = 102400;
}

Bmp::Bmp(float SEA_LEVEL_PRESSURE)
{
    this->SEA_LEVEL_PRESSURE = SEA_LEVEL_PRESSURE;
}

void Bmp::begin()
{
    if (!bmp.begin())
    {
        Serial.println("Could not find a valid BMP085 sensor, check wiring!");
        while (1)
        {
        }
    }
}

float Bmp::getAltitude()
{
    return altitude;
}

void Bmp::get_readings()
{
    altitude = bmp.readAltitude();
}