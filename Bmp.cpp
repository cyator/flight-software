#include "Bmp.h"

Bmp::Bmp(int SHORT_DELAY, int SEA_LEVEL_PRESSURE)
{
    this->SHORT_DELAY = SHORT_DELAY;
    this->SEA_LEVEL_PRESSURE = SEA_LEVEL_PRESSURE;

    // debugln("BMP180 INITIALIZATION");

    if (!bmp.begin())
    {
        // debugln("Could not find a valid BMP085 sensor, check wiring!");
        while (1)
        {
            delay(SHORT_DELAY);
        }
    }

    // debugln("BMP180 FOUND");
}

float Bmp::getAltitude()
{
    return altitude;
}

void Bmp::get_readings()
{
    altitude = bmp.readAltitude(SEA_LEVEL_PRESSURE);
}