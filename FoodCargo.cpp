#include "FoodCargo.h"
#include <iostream>

FoodCargo::FoodCargo(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void FoodCargo::displayCargoInfo() const
{
    std::cout << "--- Food Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Wheat::Wheat(std::string id, double weight, double volume, double value)
    : FoodCargo(id, weight, volume, value) {}

void Wheat::displayCargoInfo() const
{
    std::cout << "--- Wheat Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Rice::Rice(std::string id, double weight, double volume, double value)
    : FoodCargo(id, weight, volume, value) {}

void Rice::displayCargoInfo() const
{
    std::cout << "--- Rice Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

Pulses::Pulses(std::string id, double weight, double volume, double value)
    : FoodCargo(id, weight, volume, value) {}

void Pulses::displayCargoInfo() const
{
    std::cout << "--- Pulses Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}

RefrigeratedFood::RefrigeratedFood(std::string id, double weight, double volume, double value, double temperature)
    : FoodCargo(id, weight, volume, value), temperature(temperature) {}

void RefrigeratedFood::displayCargoInfo() const
{
    std::cout << "--- Refrigerated Food Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
    std::cout << "Storage Temperature: " << temperature << " °C" << std::endl;
}

Fruits::Fruits(std::string id, double weight, double volume, double value, double temperature)
    : RefrigeratedFood(id, weight, volume, value, temperature) {}

void Fruits::displayCargoInfo() const
{
    std::cout << "--- Fruits Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
    std::cout << "Storage Temperature: " << temperature << " °C" << std::endl;
}

Vegetables::Vegetables(std::string id, double weight, double volume, double value, double temperature)
    : RefrigeratedFood(id, weight, volume, value, temperature) {}

void Vegetables::displayCargoInfo() const
{
    std::cout << "--- Vegetables Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
    std::cout << "Storage Temperature: " << temperature << " °C" << std::endl;
}