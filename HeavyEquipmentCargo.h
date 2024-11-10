#pragma once

#include "Cargo.h"
#include <string>
#include <iostream>

class HeavyEquipmentCargo : public Cargo
{
private:
    std::string equipmentType; // e.g., tank, airplane, fighter jet
    std::string usage;         // e.g., defense, aviation, construction

public:
    HeavyEquipmentCargo(std::string id, double weight, double volume, double value, std::string equipmentType, std::string usage);
    void displayCargoInfo() const override;
};