#pragma once

#include "Cargo.h"

class LiquidCargo : public Cargo
{
public:
    LiquidCargo(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class CrudeOil : public LiquidCargo
{
public:
    CrudeOil(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class RefinedPetroleum : public LiquidCargo
{
public:
    RefinedPetroleum(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Chemicals : public LiquidCargo
{
public:
    Chemicals(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};