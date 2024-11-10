#include "Machine.h"
#include <iostream>

Machine::Machine(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void Machine::displayCargoInfo() const
{
    std::cout << "--- Machine Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

IndustrialMachinery::IndustrialMachinery(std::string id, double weight, double volume, double value)
    : Machine(id, weight, volume, value) {}

void IndustrialMachinery::displayCargoInfo() const
{
    std::cout << "--- Industrial Machinery Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

AgriculturalMachinery::AgriculturalMachinery(std::string id, double weight, double volume, double value)
    : Machine(id, weight, volume, value) {}

void AgriculturalMachinery::displayCargoInfo() const
{
    std::cout << "--- Agricultural Machinery Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

ConstructionMachinery::ConstructionMachinery(std::string id, double weight, double volume, double value)
    : Machine(id, weight, volume, value) {}

void ConstructionMachinery::displayCargoInfo() const
{
    std::cout << "--- Construction Machinery Info ---" << std::endl;
    Cargo::displayCargoInfo();
    std::cout << "Type: Construction Machinery" << std::endl;
}