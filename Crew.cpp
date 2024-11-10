#include "Crew.h"
#include <iostream>
#include <stdexcept>

Crew::Crew(std::string n, std::string pos, int exp)
{
    if (exp < 0) {
        throw std::invalid_argument("Experience must be non-negative.");
    }
    this->name = n;
    this->position = pos;
    this->experience = exp;
}

std::string Crew::getName() const { return name; }

std::string Crew::getPosition() const { return position; }

int Crew::getExperience() const { return experience; }

void Crew::displayCrewInfo() const
{
    std::cout << "Name: " << name << std::endl
              << "Position: " << position << std::endl
              << "Experience: " << experience << " years" << std::endl;
}
