#include "Mpu.h"

Mpu::Mpu()
{
    if (!mpu.begin())
    {
        // debugln("Could not find a valid MPU6050 sensor, check wiring!");
        while (1)
        {
            delay(SHORT_DELAY);
        }
    }

    // debugln("MPU6050 FOUND");
    mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
    mpu.setGyroRange(MPU6050_RANGE_500_DEG);
    mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
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