#pragma once

#include "Cargo.h"
#include <string>

class CustomDuty
{
private:
    double dutyRate;
    std::string destinationCountry;
    double additionalFee;

public:
    CustomDuty(double rate, std::string dest, double fee);
    double calculateDuty(const Cargo *cargo) const;
    void displayDutyDetails(const Cargo *cargo) const;
    std::string getDestinationCountry() const;
    void setDutyRate(double rate);
    void setAdditionalFee(double fee);
};
