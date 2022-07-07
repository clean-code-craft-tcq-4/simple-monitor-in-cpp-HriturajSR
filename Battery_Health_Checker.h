#include <iostream>

namespace battery
{
  class BatteryChecker
  {
  public:
    bool batteryTemperatureIsOk(float temperature);
    bool batterySocIsOk(float soc);
    bool batteryChargeRateIsOk(float chargeRate);
    bool checkRange(float actualValue, float minValue, float maxValue);
    bool batteryHealthIsOk(float temperature, float soc, float chargeRate);
  };
}
