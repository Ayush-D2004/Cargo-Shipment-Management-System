#pragma once
#include <string>
#include <stdexcept>

class Cargo {
protected:
    std::string id;
    double weight;
    double volume;
    double value;

public:
    Cargo(std::string i, double w, double v, double val);
    virtual void displayCargoInfo() const;
    virtual ~Cargo();

    std::string getId() const;
    double getWeight() const;
    double getVolume() const;
    double getValue() const;
};
