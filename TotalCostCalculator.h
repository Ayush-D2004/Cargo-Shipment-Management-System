#pragma once

#include "FreightCharges.h"
#include "CustomDuty.h"
#include "Cargo.h"
#include <string>

class TotalCostCalculator : public FreightCharges, public CustomDuty
{
public:
    TotalCostCalculator(double baseRate, double weightRate, double volumeRate, double typeMultiplier, 
                        double dutyRate, std::string destinationCountry, double additionalFee);

    double calculateTotalCost(double distance, const Cargo *cargo, std::string cargoType);
    void displayRatesAndDuties() const;
};