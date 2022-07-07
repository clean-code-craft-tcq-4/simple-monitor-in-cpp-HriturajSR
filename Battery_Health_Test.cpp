#include <iostream>
#include "Battery_Health_Checker.h"
#include <assert.h>
int main()
{
BatteryChecker BatteryStatusCheck;
    assert(BatteryStatusCheck.batteryIsOk(25, 70, 0.7) == true);
    assert(BatteryStatusCheck.batteryIsOk(50, 85, 0) == false);
}
