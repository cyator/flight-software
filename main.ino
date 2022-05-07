#include <Arduino.h>
#include "Checkstate.h"

void setup()
{
    Serial.begin(115200);
    Serial.println("Board is online");
    Checkstate state(100.0, 40.0, 15.0);
    int currentstate = state.checkState();
    Serial.print("the current state is:");
    Serial.print(currentstate);
}

void loop()
{
}
