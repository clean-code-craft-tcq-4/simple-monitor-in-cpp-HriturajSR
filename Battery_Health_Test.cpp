#include <iostream>
#include "Battery_Health_Checker.h"
#include <assert.h>
int main()
{
BatteryChecker BatteryStatusCheck;
    assert(BatteryStatusCheck.batteryHealthIsOk(25, 70, 0.7) == true);
    assert(BatteryStatusCheck.batteryHealthIsOk(50, 85, 0) == false);
}
