#include "TotalCostCalculator.h"
#include <iostream>

TotalCostCalculator::TotalCostCalculator(double baseRate, double weightRate, double volumeRate,
                                         double typeMultiplier, double dutyRate,
                                         std::string destinationCountry, double additionalFee)
    : FreightCharges(baseRate, weightRate, volumeRate, typeMultiplier, 0, 0, 0, 0),
      CustomDuty(dutyRate, destinationCountry, additionalFee)
{
}

double TotalCostCalculator::calculateTotalCost(double distance, const Cargo *cargo, std::string cargoType)
{
    double shippingCost = calculateCharges(distance, cargo, cargoType);
    double dutyCost = calculateDuty(cargo);
    return shippingCost + dutyCost;
}

void TotalCostCalculator::displayRatesAndDuties() const
{
    displayRateInfo();
    displayDutyDetails(new Cargo("", 0, 0, 0)); // Example to show duty details without a specific cargo
}
