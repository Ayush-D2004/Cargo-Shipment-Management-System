#pragma once
#include <stdexcept>
#include "Cargo.h"

class FreightCharges
{
private:
    double baseRatePerKm;       // Base rate per kilometer
    double weightRate;          // Rate per kilogram of cargo weight
    double volumeRate;          // Rate per cubic meter of cargo volume
    double cargoTypeMultiplier; // Multiplier based on cargo type (e.g., fragile, liquid)
    double bulkRate;
    double liquidRate;
    double containerRate;
    double fragileRate;

public:
    FreightCharges(double baseRate, double weightRate, double volumeRate, double multiplier,
                   double bulk, double liquid, double container, double fragile);
    double calculateCharges(double distance, const Cargo* cargo, std::string cargoType) const;
    void displayCharges(double distance, const Cargo* cargo, std::string cargoType) const;
    void displayRateInfo() const;
};
