//global includes
#include <Arduino.h>

// local includes
// #include "Gps.h"
// #include "Bmp.h"
// #include "Mpu.h"
#include <math.h>
#include "Checkstate.h"
int n = 0;

// variables
// const uint8_t GPS_TX_PIN = 17;
// const uint8_t GPS_RX_PIN = 16;

// gps init
// SoftwareSerial GPSModule(GPS_RX_PIN, GPS_TX_PIN);
// Gps gps(&GPSModule);

// bmp init
// Bmp bmp;

// mpu init
// Mpu mpu;

// checkstate init
Checkstate checkstate;

void setup()
{
    Serial.begin(115200);
    // gps.begin(9600);

    // bmp.begin();
    // mpu.begin();
}

void loop()
{
    // Serial.println("Board is online");
    // gps.get_gps_readings();
    // float latitude = gps.getLatitude();
    // float longitude = gps.getLongitude();
    // Serial.printf("latitude %.3f\n", latitude);
    // Serial.printf("longitude %.3f\n", longitude);
    // bmp.get_readings();
    // float altutude = bmp.getAltitude();
    // Serial.printf("altitude %.3f\n", altutude);

    // mpu.get_readings();
    // float ax = mpu.getAx();
    // float ay = mpu.getAy();
    // float az = mpu.getAz();
    // float gx = mpu.getGx();
    // float gy = mpu.getGy();
    // float gz = mpu.getGz();
    // Serial.printf("ax %.3f,ay %.3f,az %.3f,gx %.3f,gy %.3f,gz %.3f,\n", ax, ay, az, gx, gy, gz);

    float altitude = 100 * sin(n * (PI / 180));
    float velocity = 40 * cos(n * (PI / 180));
    if (n <= 180)
    {
        n++;
    }

    Serial.printf("velocity is %.3f and altitude %.3f\n", velocity, altitude);

    int currentstate = checkstate.checkstate(altitude, velocity);
    Serial.printf("the current state is %d\n", currentstate);
    delay(700);
}
