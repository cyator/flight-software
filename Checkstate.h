#ifndef CHECKSTATE_H
#define CHECKSTATE_H

#include <Arduino.h>

class Checkstate
{
private:
    int state;
    float BASE_ALTITUDE;
    float MAX_ALTITUDE;
    float altitude;
    float velocity;
    int checkInflight();
    int checkApogee();
    int checkDescent();
    int checkGround();
    void calculateBaseAltitude();

public:
    Checkstate();
    int checkstate(float altitude, float velocity);
};

#endif