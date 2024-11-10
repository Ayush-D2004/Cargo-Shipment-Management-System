#include "TextileCargo.h"
#include <iostream>

TextileCargo::TextileCargo(std::string id, double weight, double volume, double value, std::string fabricType, std::string origin)
    : Cargo(id, weight, volume, value), fabricType(fabricType), origin(origin)
{
}

void TextileCargo::displayCargoInfo() const
{
    std::cout << "Textile Cargo ID: " << id
              << ", Fabric Type: " << fabricType
              << ", Origin: " << origin
              << ", Weight: " << weight << " kg"
              << ", Volume: " << volume << " m^3"
              << ", Value: " << value << std::endl;
}