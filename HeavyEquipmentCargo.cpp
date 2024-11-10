#include "HeavyEquipmentCargo.h"

HeavyEquipmentCargo::HeavyEquipmentCargo(std::string id, double weight, double volume, double value, std::string equipmentType, std::string usage)
    : Cargo(id, weight, volume, value), equipmentType(equipmentType), usage(usage)
{
}

void HeavyEquipmentCargo::displayCargoInfo() const
{
    std::cout << "Heavy Equipment Cargo ID: " << id
              << ", Equipment Type: " << equipmentType
              << ", Usage: " << usage
              << ", Weight: " << weight << " kg"
              << ", Volume: " << volume << " m^3"
              << ", Value: " << value << std::endl;
}