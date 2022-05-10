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

float Bmp::getBaseAltitude()
{
    return BASE_ALTITUDE;
}

void Bmp::calculateBaseAltitude(int loopCount)
{

    float sum = 0;

    for (int i = 0; i < loopCount; i++)
    {
        get_readings();
        sum += getAltitude();
    }
    float average = sum / loopCount;
    BASE_ALTITUDE = average;
}


void Bmp::get_readings()
{
    altitude = bmp.readAltitude();
}