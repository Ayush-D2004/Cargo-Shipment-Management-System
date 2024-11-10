#pragma once

#include "Cargo.h"

class FragileCargo : public Cargo
{
public:
    FragileCargo(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};