#include "Mpu.h"

Mpu::Mpu()
{
    mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
    mpu.setGyroRange(MPU6050_RANGE_500_DEG);
    mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
}

// getters
float Mpu::getAx()
{
    return ax;
}
float Mpu::getAy()
{
    return ay;
}
float Mpu::getAz()
{
    return az;
}
float Mpu::getGx()
{
    return gx;
}
float Mpu::getGy()
{
    return gy;
}
float Mpu::getGz()
{
    return gz;
}

void Mpu::begin()
{
    if (!mpu.begin())
    {
        Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
        while (1)
        {
        }
    }
}

void Mpu::get_readings()
{

    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    ax = a.acceleration.x;
    ay = a.acceleration.y;
    az = a.acceleration.z;

    gx = g.gyro.x;
    gy = g.gyro.y;
    gz = g.gyro.z;
}