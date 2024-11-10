#include "CustomDuty.h"
#include <iostream>
#include <stdexcept>

CustomDuty::CustomDuty(double rate, std::string dest, double fee)
{
    if (rate < 0 || fee < 0) {
        throw std::invalid_argument("Duty rate and additional fee must be non-negative.");
    }
    this->dutyRate = rate;
    this->destinationCountry = dest;
    this->additionalFee = fee;
}

double CustomDuty::calculateDuty(const Cargo* cargo) const
{
    double basicDuty = (cargo->getValue() * dutyRate) / 100;
    double totalDuty = basicDuty + additionalFee;
    return totalDuty;
}

void CustomDuty::displayDutyDetails(const Cargo* cargo) const
{
    std::cout << "--- Custom Duty Details ---" << std::endl;
    std::cout << "Destination Country: " << destinationCountry << std::endl;
    std::cout << "Duty Rate: " << dutyRate << "%" << std::endl;
    std::cout << "Additional Fee: $" << additionalFee << std::endl;
    std::cout << "Calculated Duty for Cargo ID " << cargo->getId() << ": $" << calculateDuty(cargo) << std::endl;
}

std::string CustomDuty::getDestinationCountry() const { return destinationCountry; }

void CustomDuty::setDutyRate(double rate)
{
    if (rate < 0) {
        throw std::invalid_argument("Duty rate must be non-negative.");
    }
    dutyRate = rate;
}

void CustomDuty::setAdditionalFee(double fee)
{
    if (fee < 0) {
        throw std::invalid_argument("Additional fee must be non-negative.");
    }
    additionalFee = fee;
}
