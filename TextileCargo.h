#pragma once

#include "Cargo.h"
#include <string>

class TextileCargo : public Cargo
{
private:
    std::string fabricType;
    std::string origin;

public:
    TextileCargo(std::string id, double weight, double volume, double value, std::string fabricType, std::string origin);
    void displayCargoInfo() const override;
};