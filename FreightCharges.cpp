#include "FreightCharges.h"
#include <iostream>

FreightCharges::FreightCharges(double baseRate, double weightRate, double volumeRate, double multiplier,
                               double bulk, double liquid, double container, double fragile)
    : baseRatePerKm(baseRate), weightRate(weightRate), volumeRate(volumeRate), cargoTypeMultiplier(multiplier),
      bulkRate(bulk), liquidRate(liquid), containerRate(container), fragileRate(fragile)
{
    if (baseRate < 0 || weightRate < 0 || volumeRate < 0 || multiplier < 0) {
        throw std::invalid_argument("Rates and multiplier must be non-negative.");
    }
}

double FreightCharges::calculateCharges(double distance, const Cargo* cargo, std::string cargoType) const
{
    if (cargo == nullptr) {
        throw std::invalid_argument("Cargo cannot be null.");
    }
    if (distance < 0) {
        throw std::invalid_argument("Distance must be non-negative.");
    }
    double typeMultiplier = 1.0;

    // Adjust the multiplier based on cargo type
    if (cargoType == "fragile")
    {
        typeMultiplier = 1.5; // Higher multiplier for fragile cargo
    }
    else if (cargoType == "liquid")
    {
        typeMultiplier = 1.2; // Slightly higher for liquid cargo
    }
    else if (cargoType == "bulk")
    {
        typeMultiplier = 0.9; // Discount for bulk cargo
    }

    // Calculate the charge
    double totalCharges = (baseRatePerKm * distance) +
                          (weightRate * cargo->getWeight()) +
                          (volumeRate * cargo->getVolume());
    totalCharges *= (typeMultiplier * cargoTypeMultiplier);

    return totalCharges;
}

void FreightCharges::displayCharges(double distance, const Cargo* cargo, std::string cargoType) const
{
    if (cargo == nullptr) {
        throw std::invalid_argument("Cargo cannot be null.");
    }
    if (distance < 0) {
        throw std::invalid_argument("Distance must be non-negative.");
    }
    std::cout << "--- Freight Charges Rate Information ---" << std::endl;
    std::cout << "Base Rate per Km: $" << baseRatePerKm << std::endl;
    std::cout << "Weight Rate per Kg: $" << weightRate << std::endl;
    std::cout << "Volume Rate per Cubic Meter: $" << volumeRate << std::endl;
    std::cout << "Cargo Type Multiplier: " << cargoTypeMultiplier << std::endl;
}

void FreightCharges::displayRateInfo() const {
    std::cout << "Freight Charges Rates:" << std::endl;
    std::cout << "Bulk Rate: $" << bulkRate << " per ton" << std::endl;
    std::cout << "Liquid Rate: $" << liquidRate << " per liter" << std::endl;
    std::cout << "Container Rate: $" << containerRate << " per container" << std::endl;
    std::cout << "Fragile Rate: $" << fragileRate << " per item" << std::endl;
}
