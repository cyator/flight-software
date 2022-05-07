#include "CheckState.h"

// constructor
Checkstate::Checkstate(float altitude, float velocity, float BASE_ALTITUDE)
{
    this->altitude = altitude;
    this->velocity = velocity;
    this->BASE_ALTITUDE = BASE_ALTITUDE;
}

int Checkstate::checkInflight()
{
    displacement = altitude - BASE_ALTITUDE;
    displacement > 20 ? 1 : 0;
}

int Checkstate::checkApogee()
{
    if (velocity < 0)
    {
        MAX_ALTITUDE = altitude;
        return 2;
    }
    else
    {
        return 1;
    }
}

int Checkstate::checkDescent()
{
    displacement = altitude - MAX_ALTITUDE;
    displacement < 20 ? 3 : 2;
}

int Checkstate::checkGround()
{
    displacement = altitude - BASE_ALTITUDE;
    ((displacement > 20) || (displacement < 20)) ? 4 : 3;
}

int Checkstate::checkState()
{
    switch (state)
    {
    case 0:
        state = checkInflight();
        break;
    case 1:
        state = checkApogee();
        break;
    case 2:
        state = checkDescent();
        break;
    case 3:
        state = checkGround();
        break;
    default:
        return state;
    }
    return state;
}
