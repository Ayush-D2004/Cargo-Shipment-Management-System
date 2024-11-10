#include "Cargo.h"
#include <iostream>
#include <stdexcept>

Cargo::Cargo(std::string i, double w, double v, double val)
{
    if (w < 0 || v < 0 || val < 0) {
        throw std::invalid_argument("Weight, volume, and value must be non-negative.");
    }
    this->id = i;
    this->weight = w;
    this->volume = v;
    this->value = val;
}

void Cargo::displayCargoInfo() const
{
    std::cout << "Cargo ID: " << id << std::endl
              << "Weight: " << weight << " kg" << std::endl
              << "Volume: " << volume << " cubic meters" << std::endl
              << "Value: $" << value << std::endl;
}

Cargo::~Cargo() {}

std::string Cargo::getId() const { return id; }
double Cargo::getWeight() const { return weight; }
double Cargo::getVolume() const { return volume; }
double Cargo::getValue() const { return value; }
