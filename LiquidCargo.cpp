#include "LiquidCargo.h"
#include <iostream>

LiquidCargo::LiquidCargo(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void LiquidCargo::displayCargoInfo() const
{
    std::cout << "--- Liquid Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

CrudeOil::CrudeOil(std::string id, double weight, double volume, double value)
    : LiquidCargo(id, weight, volume, value) {}

void CrudeOil::displayCargoInfo() const
{
    std::cout << "--- Crude Oil Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

RefinedPetroleum::RefinedPetroleum(std::string id, double weight, double volume, double value)
    : LiquidCargo(id, weight, volume, value) {}

void RefinedPetroleum::displayCargoInfo() const
{
    std::cout << "--- Refined Petroleum Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Chemicals::Chemicals(std::string id, double weight, double volume, double value)
    : LiquidCargo(id, weight, volume, value) {}

void Chemicals::displayCargoInfo() const
{
    std::cout << "--- Chemicals Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}
