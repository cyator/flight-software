#ifndef CHECKSTATE_H
#define CHECKSTATE_H

#include <Arduino.h>
#include "Bmp.h"

class Checkstate
{
private:
    int state;
    Bmp *bmp;
    float BASE_ALTITUDE;
    float MAX_ALTITUDE;
    float altitude;
    float velocity;
    int checkInflight();
    int checkApogee();
    int checkDescent();
    int checkGround();
    void calculateBaseAltitude(int loopCount);

public:
    Checkstate(Bmp *bmp);
    int checkstate(float altitude, float velocity);
};

#endif