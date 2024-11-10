#include "Port.h"

// Port implementation
Port::Port(std::string n, std::string loc)
    : name(n), location(loc)
{
}

std::string Port::getName() const
{
    return name;
}

std::string Port::getLocation() const
{
    return location;
}

void Port::displayPortInfo() const
{
    std::cout << "Port Name: " << name << ", Location: " << location << std::endl;
}

// SourcePort implementation
SourcePort::SourcePort(std::string n, std::string loc)
    : Port(n, loc)
{
}

void SourcePort::displayPortInfo() const
{
    std::cout << "Source Port - Name: " << name << ", Location: " << location << std::endl;
}

// DestinationPort implementation
DestinationPort::DestinationPort(std::string n, std::string loc)
    : Port(n, loc)
{
}

void DestinationPort::displayPortInfo() const
{
    std::cout << "Destination Port - Name: " << name << ", Location: " << location << std::endl;
}