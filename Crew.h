#pragma once
#include <string>
#include <stdexcept>

class Crew
{
private:
    std::string name;
    std::string position;
    int experience;

public:
    Crew(std::string n, std::string pos, int exp);
    void displayCrewInfo() const;
    std::string getName() const;
    std::string getPosition() const;
    int getExperience() const;
};
