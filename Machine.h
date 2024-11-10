#pragma once

#include "Cargo.h"
#include <string>

class Machine : public Cargo
{
public:
    Machine(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class IndustrialMachinery : public Machine
{
public:
    IndustrialMachinery(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class AgriculturalMachinery : public Machine
{
public:
    AgriculturalMachinery(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class ConstructionMachinery : public Machine
{
public:
    ConstructionMachinery(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};