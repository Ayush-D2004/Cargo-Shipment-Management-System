#include "MineralCargo.h"
#include <iostream>

MineralCargo::MineralCargo(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void MineralCargo::displayCargoInfo() const
{
    std::cout << "--- Mineral Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Iron::Iron(std::string id, double weight, double volume, double value)
    : MineralCargo(id, weight, volume, value) {}

void Iron::displayCargoInfo() const
{
    std::cout << "--- Iron Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Coal::Coal(std::string id, double weight, double volume, double value)
    : MineralCargo(id, weight, volume, value) {}

void Coal::displayCargoInfo() const
{
    std::cout << "--- Coal Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Bauxite::Bauxite(std::string id, double weight, double volume, double value)
    : MineralCargo(id, weight, volume, value) {}

void Bauxite::displayCargoInfo() const
{
    std::cout << "--- Bauxite Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}
