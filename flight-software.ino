// global
#include <Arduino.h>
// #include <SoftwareSerial.h>

// local includes
// #include "Gps.h"
// #include "Bmp.h"
#include "Mpu.h"
// #include "Checkstate.h"

// variables
// const uint8_t GPS_TX_PIN = 17;
// const uint8_t GPS_RX_PIN = 16;

// gps init
// SoftwareSerial GPSModule(GPS_RX_PIN, GPS_TX_PIN);
// Gps gps(&GPSModule);

// bmp init
// Bmp bmp;

// mpu init
Mpu mpu;

void setup()
{
    Serial.begin(115200);
    // gps.begin(9600);

    // bmp.begin();
    mpu.begin();

    // Checkstate state(100.0, 40.0, 15.0);
    // int currentstate = state.checkState();
    // Serial.print("the current state is:");
    // Serial.print(currentstate);
}

void loop()
{
    Serial.println("Board is online");
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
}
