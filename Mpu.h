#ifndef MPU_H
#define MPU_H

#include <Arduino.h>
#include <Adafruit_MPU6050.h>
// #include <Adafruit_Sensor.h>

class Mpu
{

private:
    Adafruit_MPU6050 mpu;
    int SHORT_DELAY;
    float ax;
    float ay;
    float az;
    float gx;
    float gy;
    float gz;

public:
    Mpu();
    float getAx();
    float getAy();
    float getAz();
    float getGx();
    float getGy();
    float getGz();
    void get_readings();
};

#endif