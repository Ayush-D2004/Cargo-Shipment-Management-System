#pragma once

#include <string>
#include <iostream>

class Port
{
protected:
    std::string name;
    std::string location;

public:
    Port(std::string n, std::string loc);
    virtual ~Port() = default;

    std::string getName() const;
    std::string getLocation() const;
    virtual void displayPortInfo() const;
};

class SourcePort : public Port
{
public:
    SourcePort(std::string n, std::string loc);
    void displayPortInfo() const override;
};

class DestinationPort : public Port
{
public:
    DestinationPort(std::string n, std::string loc);
    void displayPortInfo() const override;
};