#include "FragileCargo.h"
#include <iostream>

FragileCargo::FragileCargo(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void FragileCargo::displayCargoInfo() const
{
    std::cout << "--- Fragile Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}
