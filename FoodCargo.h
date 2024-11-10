#pragma once

#include "Cargo.h"
#include <string>

class FoodCargo : public Cargo
{
public:
    FoodCargo(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Wheat : public FoodCargo
{
public:
    Wheat(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Rice : public FoodCargo
{
public:
    Rice(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class Pulses : public FoodCargo
{
public:
    Pulses(std::string id, double weight, double volume, double value);
    void displayCargoInfo() const override;
};

class RefrigeratedFood : public FoodCargo
{
protected:
    double temperature; // Recommended storage temperature in Celsius

public:
    RefrigeratedFood(std::string id, double weight, double volume, double value, double temperature);
    void displayCargoInfo() const override;
};

class Fruits : public RefrigeratedFood
{
public:
    Fruits(std::string id, double weight, double volume, double value, double temperature);
    void displayCargoInfo() const override;
};

class Vegetables : public RefrigeratedFood
{
public:
    Vegetables(std::string id, double weight, double volume, double value, double temperature);
    void displayCargoInfo() const override;
};