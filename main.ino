#include "Checkstate.h"

#define BAUD_RATE 115200

void setup()
{
    Serial.begin(BAUD_RATE);
    Serial.println("Board is online");
    Checkstate state(100.0, 40.0, 15.0);
    int currentstate = state.checkState();
    Serial.print("the current state is:");
    Serial.print(currentstate);
}

void loop()
{
}
