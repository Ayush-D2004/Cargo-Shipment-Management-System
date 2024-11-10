#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Cargo.h"
#include "Crew.h"

class Carrier
{
protected:
    std::string name;
    double capacity; // Capacity in tons
    double speed;    // Speed in knots
    std::string size;     // Size of the carrier
    std::string design;   // Design type (e.g., container ship, bulk carrier)
    Crew* crew; // Pointer to assigned crew member
    std::vector<Cargo*> cargoList;

public:
    Carrier(std::string n, double cap, double spd, std::string sz, std::string dsg);
    virtual ~Carrier();

    void assignCrew(Crew* crewMember);
    void loadCargo(Cargo* cargo);
    std::string getName() const;
    void displayCarrierInfo() const;
};

class GeneralCargoVessel : public Carrier
{
public:
    GeneralCargoVessel(std::string n, double cap, double spd, std::string sz);
};

class OilTanker : public Carrier
{
public:
    OilTanker(std::string n, double cap, double spd, std::string sz);
};

class BulkCarrier : public Carrier
{
public:
    BulkCarrier(std::string n, double cap, double spd, std::string sz);
};

class PassengerLiner : public Carrier
{
public:
    PassengerLiner(std::string n, double cap, double spd, std::string sz);
};

class ContainerShip : public Carrier
{
public:
    ContainerShip(std::string n, double cap, double spd, std::string sz);
};
