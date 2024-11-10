#include "Container.h"
#include <iostream>

Container::Container(std::string id, double weight, double volume, double value)
    : Cargo(id, weight, volume, value) {}

void Container::displayCargoInfo() const
{
    std::cout << "--- Container Cargo Info ---" << std::endl;
    Cargo::displayCargoInfo();
}
