#include "Carrier.h"
#include <iostream>
#include <stdexcept>

Carrier::Carrier(std::string n, double cap, double spd, std::string sz, std::string dsg)
{
    if (cap < 0 || spd < 0) {
        throw std::invalid_argument("Capacity and speed must be non-negative.");
    }
    this->name = n;
    this->capacity = cap;
    this->speed = spd;
    this->size = sz;
    this->design = dsg;
    this->crew = nullptr;
}

Carrier::~Carrier()
{
    for (auto cargo : cargoList)
    {
        delete cargo;
    }
    // Note: We don't delete crew here as it's assumed to be managed elsewhere
}

void Carrier::assignCrew(Crew* crewMember)
{
    if (crewMember == nullptr) {
        throw std::invalid_argument("Cannot assign null crew member.");
    }
    crew = crewMember;
}

void Carrier::loadCargo(Cargo* cargo)
{
    if (cargo == nullptr) {
        throw std::invalid_argument("Cannot load null cargo.");
    }
    if (cargo->getWeight() <= capacity * 1000)
    {
        cargoList.push_back(cargo);
        capacity -= cargo->getWeight() / 1000;
    }
    else
    {
        throw std::runtime_error("Not enough capacity to load this cargo!");
    }
}

std::string Carrier::getName() const
{
    return name;
}

void Carrier::displayCarrierInfo() const
{
    std::cout << "Carrier: " << name << std::endl;
    std::cout << "Remaining Capacity: " << capacity << " tons" << std::endl;
    std::cout << "Speed: " << speed << " knots" << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Design: " << design << std::endl;
    if (crew)
        crew->displayCrewInfo();
    else
        std::cout << "No crew assigned." << std::endl;
    std::cout << "--- Loaded Cargo ---" << std::endl;
    for (const auto& cargo : cargoList)
        cargo->displayCargoInfo();
}

// Derived class implementations
GeneralCargoVessel::GeneralCargoVessel(std::string n, double cap, double spd, std::string sz)
    : Carrier(n, cap, spd, sz, "General Cargo Vessel")
{
}

OilTanker::OilTanker(std::string n, double cap, double spd, std::string sz)
    : Carrier(n, cap, spd, sz, "Oil Tanker")
{
}

BulkCarrier::BulkCarrier(std::string n, double cap, double spd, std::string sz)
    : Carrier(n, cap, spd, sz, "Bulk Carrier")
{
}

PassengerLiner::PassengerLiner(std::string n, double cap, double spd, std::string sz)
    : Carrier(n, cap, spd, sz, "Passenger Liner")
{
}

ContainerShip::ContainerShip(std::string n, double cap, double spd, std::string sz)
    : Carrier(n, cap, spd, sz, "Container Ship")
{
}
