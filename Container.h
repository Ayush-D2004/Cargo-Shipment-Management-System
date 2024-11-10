#pragma once

#include "Cargo.h"

class Container : public Cargo
{
public:
    Container(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};