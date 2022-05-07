#ifndef CHECKSTATE_H
#define CHECKSTATE_H

#include <Arduino.h>

class Checkstate
{

private:
    int state = 0;
    float altitude;
    float velocity;
    float displacement;
    float BASE_ALTITUDE;
    float MAX_ALTITUDE;

public:
    Checkstate(float altitude, float velocity, float BASE_ALTITUDE);
    int checkInflight();
    int checkApogee();
    int checkDescent();
    int checkGround();
    int checkState();
};

#endif