#include "Battery_Health_Checker.h"
#include "iostream"

  static float TEMP_MIN = 0;
  static float TEMP_MAX = 45;
  static float SOC_MIN = 20;
  static float SOC_MAX = 80;
  static float CHARGERATE_MIN = 0;
  static float CHARGERATE_MAX = 0.8;


bool BatteryChecker::checkRange(float actualValue, float minValue, float maxValue)
{
    return (actualValue < minValue || actualValue > maxValue);
}

bool BatteryChecker::batteryIsOk(float temperature, float soc, float chargeRate)
{
   return (batteryTemperatureIsOk(temperature) && batterySocIsOk(soc) && batteryChargeRateIsOk(chargeRate));
}

bool BatteryChecker::batteryTemperatureIsOk(float temperature)
{
    bool result = true;
    if (checkRange(temperature, TEMP_MIN, TEMP_MAX))
    {
      std::cout << "Temperature out of range!\n";
      result = false;
    }
    return result;
}

bool BatteryChecker::batterySocIsOk(float soc)
{
    bool result = true;
    if (checkRange(soc, SOC_MIN, SOC_MAX))
    {
      std::cout << "State of Charge out of range!\n";
      result = false;
    }
    return result;
}

bool BatteryChecker::batteryChargeRateIsOk(float chargeRate)
{
     bool result = true;
    if (checkRange(chargeRate, CHARGERATE_MIN, CHARGERATE_MAX))
    {
      std::cout << "Charge Rate out of range!\n";
      result = false;
    }
    return result;
}
