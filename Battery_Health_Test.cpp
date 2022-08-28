#include <iostream>
#include "Battery_Health_Checker.h"
#include <assert.h>
int main()
{
      battery::BatteryChecker BatteryStatusCheck;
      assert(BatteryStatusCheck.batteryHealthIsOk(25, 70, 0.7) == true);
      assert(BatteryStatusCheck.batteryHealthIsOk(50, 85, 0) == false);
      assert(BatteryStatusCheck.batteryHealthIsOk(25, 70, 0.7) == true);
      assert(BatteryStatusCheck.batteryHealthIsOk(50, 70, 0.7) == false);
      assert(BatteryStatusCheck.batteryHealthIsOk(25, 10, 0.7) == false);
      assert(BatteryStatusCheck.batteryHealthIsOk(25, 85, 0.5) == false);
      assert(BatteryStatusCheck.batteryHealthIsOk(30, 70, 0.1) == true);
}
