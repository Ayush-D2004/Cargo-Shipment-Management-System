#pragma once

#include "Cargo.h"

class MineralCargo : public Cargo
{
public:
    MineralCargo(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Iron : public MineralCargo
{
public:
    Iron(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Coal : public MineralCargo
{
public:
    Coal(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Bauxite : public MineralCargo
{
public:
    Bauxite(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};