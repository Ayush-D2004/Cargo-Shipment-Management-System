#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Base Class for Cargo
class Cargo
{
protected:
    string id;
    double weight;
    double volume;
    double value;

public:
    Cargo(string i, double w, double v, double val)
    {
        this->id = i;
        this->weight = w;
        this->volume = v;
        this->value = val;
    }

    virtual void displayCargoInfo() const
    {
        cout << "Cargo ID: " << id << endl
              << "Weight: " << weight << " kg" << endl
              << "Volume: " << volume << " cubic meters" << endl
              << "Value: $" << value << endl;
    }
    virtual ~Cargo() {}

    string getId() const
    {
        return id;
    }

    double getWeight() const
    {
        return weight;
    }

    double getVolume() const
    {
        return volume;
    }

    double getValue() const
    {
        return value;
    }
};

// Derived Class for Container Cargo
class Container : public Cargo
{
public:
    Container(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Container Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Class for Fragile Cargo
class FragileCargo : public Cargo
{
public:
    FragileCargo(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Fragile Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Class for Liquid Cargo
class LiquidCargo : public Cargo
{
public:
    LiquidCargo(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Liquid Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};


class CrudeOil : public LiquidCargo
{
public:
    CrudeOil(string id, double weight, double volume, double value)
        : LiquidCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Crude Oil Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Class for Refined Petroleum derived from LiquidCargo
class RefinedPetroleum : public Cargo
{
public:
    RefinedPetroleum(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Refined Petroleum Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Chemicals : public LiquidCargo
{
public:
    Chemicals(string id, double weight, double volume, double value)
        : LiquidCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Chemicals Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Derived classe for Mineral Cargo
class MineralCargo : public Cargo
{
public:
    MineralCargo(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Mineral Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Iron : public MineralCargo
{
public:
    Iron(string id, double weight, double volume, double value)
        : MineralCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Iron Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Coal : public MineralCargo
{
public:
    Coal(string id, double weight, double volume, double value)
        : MineralCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Coal Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Bauxite : public MineralCargo
{
public:
    Bauxite(string id, double weight, double volume, double value)
        : MineralCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Bauxite Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Base class for Food Cargo
class FoodCargo : public Cargo
{
public:
    FoodCargo(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Food Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Wheat : public FoodCargo
{
public:
    Wheat(string id, double weight, double volume, double value)
        : FoodCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Wheat Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Rice : public FoodCargo
{
public:
    Rice(string id, double weight, double volume, double value)
        : FoodCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Rice Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class Pulses : public FoodCargo
{
public:
    Pulses(string id, double weight, double volume, double value)
        : FoodCargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Pulses Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};


// Class for Refrigerated Food derived from FoodCargo
class RefrigeratedFood : public FoodCargo
{
protected:
    double temperature; // Recommended storage temperature in Celsius

public:
    RefrigeratedFood(string id, double weight, double volume, double value, double temperature)
        : FoodCargo(id, weight, volume, value), temperature(temperature) {}

    void displayCargoInfo() const override
    {
        cout << "--- Refrigerated Food Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
        cout << "Storage Temperature: " << temperature << " °C" << endl;
    }
};

// Class for Fruits derived from RefrigeratedFood
class Fruits : public RefrigeratedFood
{
public:
    Fruits(string id, double weight, double volume, double value, double temperature)
        : RefrigeratedFood(id, weight, volume, value, temperature) {}

    void displayCargoInfo() const override
    {
        cout << "--- Fruits Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
        cout << "Storage Temperature: " << temperature << " °C" << endl;
    }
};

// Class for Vegetables derived from RefrigeratedFood
class Vegetables : public RefrigeratedFood
{
public:
    Vegetables(string id, double weight, double volume, double value, double temperature)
        : RefrigeratedFood(id, weight, volume, value, temperature) {}

    void displayCargoInfo() const override
    {
        cout << "--- Vegetables Cargo Info ---" << endl;
        Cargo::displayCargoInfo();
        cout << "Storage Temperature: " << temperature << " °C" << endl;
    }
};

// Adding Machine Cargo Classes
class Machine : public Cargo
{
public:
    Machine(string id, double weight, double volume, double value)
        : Cargo(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Machine Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class IndustrialMachinery : public Machine
{
public:
    IndustrialMachinery(string id, double weight, double volume, double value)
        : Machine(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Industrial Machinery Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

class AgriculturalMachinery : public Machine
{
public:
    AgriculturalMachinery(string id, double weight, double volume, double value)
        : Machine(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Agricultural Machinery Info ---" << endl;
        Cargo::displayCargoInfo();
    }
};

// Derived class for Construction Machinery
class ConstructionMachinery : public Machine
{
public:
    ConstructionMachinery(string id, double weight, double volume, double value)
        : Machine(id, weight, volume, value) {}

    void displayCargoInfo() const override
    {
        cout << "--- Construction Machinery Info ---" << endl;
        Cargo::displayCargoInfo();
        cout << "Type: Construction Machinery" << endl;
    }
};

// Class for Textile Cargo
class TextileCargo : public Cargo
{
private:
    string fabricType;  // e.g., cotton, silk, wool
    string origin;      // e.g., country of origin

public:
    TextileCargo(string id, double weight, double volume, double value, string fabricType, string origin)
        : Cargo(id, weight, volume, value)
    {
        this->fabricType = fabricType;
        this->origin = origin;
    }

    void displayCargoInfo() const override
    {
        cout << "Textile Cargo ID: " << id 
             << ", Fabric Type: " << fabricType 
             << ", Origin: " << origin 
             << ", Weight: " << weight << " kg" 
             << ", Volume: " << volume << " m^3" 
             << ", Value: " << value << endl;
    }
};

// Class for Heavy Equipment Cargo
class HeavyEquipmentCargo : public Cargo
{
private:
    string equipmentType;  // e.g., tank, airplane, fighter jet
    string usage;          // e.g., defense, aviation, construction

public:
    HeavyEquipmentCargo(string id, double weight, double volume, double value, string equipmentType, string usage)
        : Cargo(id, weight, volume, value)
    {
        this->equipmentType = equipmentType;
        this->usage = usage;
    }

    void displayCargoInfo() const override
    {
        cout << "Heavy Equipment Cargo ID: " << id 
             << ", Equipment Type: " << equipmentType 
             << ", Usage: " << usage 
             << ", Weight: " << weight << " kg" 
             << ", Volume: " << volume << " m^3" 
             << ", Value: " << value << endl;
    }
};

// Class for Custom Duty Calculation
class CustomDuty
{
private:
    double dutyRate;      // Percentage rate of duty
    string destinationCountry;
    double additionalFee; // Extra charges for certain cargo types

public:
    CustomDuty(double rate, string dest, double fee)
    {
        this->dutyRate = rate;
        this->destinationCountry = dest;
        this->additionalFee = fee;
    }

    double calculateDuty(const Cargo* cargo) const
    {
        double basicDuty = (cargo->getValue() * dutyRate) / 100;
        double totalDuty = basicDuty + additionalFee;
        return totalDuty;
    }

    void displayDutyDetails(const Cargo* cargo) const
    {
        cout << "--- Custom Duty Details ---" << endl;
        cout << "Destination Country: " << destinationCountry << endl;
        cout << "Duty Rate: " << dutyRate << "%" << endl;
        cout << "Additional Fee: $" << additionalFee << endl;
        cout << "Calculated Duty for Cargo ID " << cargo->getId() << ": $" << calculateDuty(cargo) << endl;
    }

    string getDestinationCountry() const 
    { 
        return destinationCountry; 
    }

    void setDutyRate(double rate) 
    { 
        dutyRate = rate; 
    }

    void setAdditionalFee(double fee) 
    { 
        additionalFee = fee; 
    }
};

// Class for Freight Shipping Charges Calculation
class FreightCharges
{
private:
    double baseRatePerKm;     // Base rate per kilometer
    double weightRate;        // Rate per kilogram of cargo weight
    double volumeRate;        // Rate per cubic meter of cargo volume
    double cargoTypeMultiplier; // Multiplier based on cargo type (e.g., fragile, liquid)

public:
    // Constructor to initialize rates
    FreightCharges(double baseRate, double weightRate, double volumeRate, double multiplier)
    {
        this->baseRatePerKm = baseRate;
        this->weightRate = weightRate;
        this->volumeRate = volumeRate;
        this->cargoTypeMultiplier = multiplier;
    }

    // Method to calculate the charges
    double calculateCharges(double distance, double weight, double volume, string cargoType)
    {
        double typeMultiplier = 1.0;

        // Adjust the multiplier based on cargo type
        if (cargoType == "fragile")
        {
            typeMultiplier = 1.5; // Higher multiplier for fragile cargo
        }
        else if (cargoType == "liquid")
        {
            typeMultiplier = 1.2; // Slightly higher for liquid cargo
        }
        else if (cargoType == "bulk")
        {
            typeMultiplier = 0.9; // Discount for bulk cargo
        }

        // Calculate the charge
        double totalCharges = (baseRatePerKm * distance) + (weightRate * weight) + (volumeRate * volume);
        totalCharges *= (typeMultiplier * cargoTypeMultiplier);

        return totalCharges;
    }

    void displayRateInfo() const
    {
        cout << "--- Freight Charges Rate Information ---" << endl;
        cout << "Base Rate per Km: $" << baseRatePerKm << endl;
        cout << "Weight Rate per Kg: $" << weightRate << endl;
        cout << "Volume Rate per Cubic Meter: $" << volumeRate << endl;
        cout << "Cargo Type Multiplier: " << cargoTypeMultiplier << endl;
    }
};

// Class to Calculate Total Cost of Shipping Including Customs Duty
class TotalCostCalculator : public FreightCharges, public CustomDuty
{
public:
    // Constructor to initialize both base classes
    TotalCostCalculator(double baseRate, double weightRate, double volumeRate, double typeMultiplier, double dutyRate, string destinationCountry, double additionalFee)
        : FreightCharges(baseRate, weightRate, volumeRate, typeMultiplier), CustomDuty(dutyRate, destinationCountry, additionalFee) {}

    // Method to calculate the total cost
    double calculateTotalCost(double distance, const Cargo* cargo, string cargoType)
    {
        double shippingCost = calculateCharges(distance, cargo->getWeight(), cargo->getVolume(), cargoType);
        double dutyCost = calculateDuty(cargo);
        return shippingCost + dutyCost;
    }

    // Method to display the detailed breakdown of customs duty for a cargo
    void displayDutyDetails(const Cargo* cargo) const
    {
        CustomDuty::displayDutyDetails(cargo);
    }

    // Display the rates and duties information
    void displayRatesAndDuties() const
    {
        FreightCharges::displayRateInfo();
        cout << "--- Customs Duty Information ---" << endl;
        cout << "Destination Country: " << CustomDuty::getDestinationCountry() << endl;
    }

    // Method to display the total cost breakdown
    void displayTotalCost(double distance, const Cargo* cargo, string cargoType)
    {
        double shippingCost = calculateCharges(distance, cargo->getWeight(), cargo->getVolume(), cargoType);
        double dutyCost = calculateDuty(cargo);
        double totalCost = shippingCost + dutyCost;

        cout << "--- Total Cost Breakdown ---" << endl;
        cout << "Cargo ID: " << cargo->getId() << endl;
        cout << "Shipping Cost: $" << shippingCost << endl;
        cout << "Customs Duty: $" << dutyCost << endl;
        cout << "Total Cost: $" << totalCost << endl;
    }
};


// Class for Crew
class Crew
{
private:
    string name;
    string position;
    int experience; // in years

public:
    Crew(string n, string pos, int exp)
    {
        this->name = n;
        this->position = pos;
        this->experience = exp;
    }

    string getName() const
    {
        return name;
    }

    string getPosition() const
    {
        return position;
    }

    int getExperience() const
    {
        return experience;
    }

    void displayCrewInfo() const
    {
        cout << "Crew Member - Name: " << name << ", Position: " << position << ", Experience: " << experience << " years" << endl;
    }
};


// Carrier Class and Derived Carrier Classes
class Carrier
{
protected:
    string name;
    double capacity;  // Capacity in tons
    double speed;     // Speed in knots
    string size;      // Size of the carrier
    string design;    // Design type (e.g., container ship, bulk carrier)
    vector<Cargo*> cargoList;
    Crew* crew; // Pointer to assigned crew member

public:
    Carrier(string n, double cap, double spd, string sz, string dsg)
    {
        this->name = n;
        this->capacity = cap;
        this->speed = spd;
        this->size = sz;
        this->design = dsg;
        this->crew = nullptr; // Initialize without crew
    }

    void assignCrew(Crew* crewMember)
    {
        crew = crewMember;
    }

    void loadCargo(Cargo* cargo)
    {
        if (cargo->getWeight() <= capacity * 1000) // Convert tons to kg
        {
            cargoList.push_back(cargo);
            capacity -= cargo->getWeight() / 1000; // Convert kg to tons
        }
        else
        {
            cout << "Not enough capacity to load this cargo!" << endl;
        }
    }

    string getName() const { return name; }

    void displayCarrierInfo() const
    {
        cout << "Carrier: " << name << endl;
        cout << "Remaining Capacity: " << capacity << " tons" << endl;
        cout << "Speed: " << speed << " knots" << endl;
        cout << "Size: " << size << endl;
        cout << "Design: " << design << endl;
        if (crew) crew->displayCrewInfo();
        else cout << "No crew assigned." << endl;
        cout << "--- Loaded Cargo ---" << endl;
        for (const auto& cargo : cargoList) cargo->displayCargoInfo();
    }
};

// General Cargo Vessel class
class GeneralCargoVessel : public Carrier
{
public:
    GeneralCargoVessel(string n, double cap, double spd, string sz)
        : Carrier(n, cap, spd, sz, "General Cargo Vessel") {}
};

// Oil Tanker class
class OilTanker : public Carrier
{
public:
    OilTanker(string n, double cap, double spd, string sz)
        : Carrier(n, cap, spd, sz, "Oil Tanker") {}
};

// Bulk Carrier class
class BulkCarrier : public Carrier
{
public:
    BulkCarrier(string n, double cap, double spd, string sz)
        : Carrier(n, cap, spd, sz, "Bulk Carrier") {}
};

// Passenger Liner class
class PassengerLiner : public Carrier
{
public:
    PassengerLiner(string n, double cap, double spd, string sz)
        : Carrier(n, cap, spd, sz, "Passenger Liner") {}
};

// Container Ship class
class ContainerShip : public Carrier
{
public:
    ContainerShip(string n, double cap, double spd, string sz)
        : Carrier(n, cap, spd, sz, "Container Ship") {}
};

// Ports - Base Class and Derived Classes
class Port
{
protected:
    string name;
    string location;

public:
    Port(string n, string loc)
    {
        this->name = n;
        this->location = loc;
    }

    string getName() const 
    { 
        return name; 
    }
    string getLocation() const 
    { 
        return location; 
    }
    virtual void displayPortInfo() const
    {
        cout << "Port Name: " << name << ", Location: " << location << endl;
    }
};

// Derived Class for Source Port
class SourcePort : public Port
{
public:
    SourcePort(string n, string loc) : Port(n, loc) {}
    void displayPortInfo() const override
    {
        cout << "Source Port - Name: " << name << ", Location: " << location << endl;
    }
};

// Derived Class for Destination Port
class DestinationPort : public Port
{
public:
    DestinationPort(string n, string loc) : Port(n, loc) {}
    void displayPortInfo() const override
    {
        cout << "Destination Port - Name: " << name << ", Location: " << location << endl;
    }
};

// Shipment Class
class Shipment
{
private:
    string shipmentId;
    Port* sourcePort;       // Source Port
    Port* destinationPort;  // Destination Port
    Carrier* assignedCarrier;
    string status;  // e.g., "In Transit", "Delivered"
    double totalDistance; // km
    double totalTime;     // hours
    string weatherConditions;

public:
    Shipment(string id, Port* source, Port* destination, Carrier* carrier, double distance, double time, string weather)
    {
        this->shipmentId = id;
        this->sourcePort = source;
        this->destinationPort = destination;
        this->assignedCarrier = carrier;
        this->status = "In Transit";
        this->totalDistance = distance;
        this->totalTime = time;
        this->weatherConditions = weather;
    }

    void updateStatus(const string& newStatus) 
    { 
        status = newStatus; 
    }

    void displayShipmentInfo() const
    {
        cout << "--- Shipment Info ---" << endl;
        cout << "Shipment ID: " << shipmentId << endl;
        cout << "Status: " << status << endl;
        cout << "Source Port: " << sourcePort->getName() << ", " << sourcePort->getLocation() << endl;
        cout << "Destination Port: " << destinationPort->getName() << ", " << destinationPort->getLocation() << endl;
        cout << "Carrier: " << assignedCarrier->getName() << endl;
        cout << "Total Distance: " << totalDistance << " km" << endl;
        cout << "Total Time: " << totalTime << " hours" << endl;
        cout << "Weather Conditions: " << weatherConditions << endl;
        assignedCarrier->displayCarrierInfo();
    }
};

// Class for Customer
class Customer
{
private:
    string customerName;
    string contactInfo;
    vector<Shipment*> shipmentHistory;

public:
    Customer(string name, string contact)
    {
        this->customerName = name;
        this->contactInfo = contact;
    }

    void addShipment(Shipment* shipment)
    {
        shipmentHistory.push_back(shipment);
    }

    void displayCustomerInfo() const
    {
        cout << "Customer Name: " << customerName << endl;
        cout << "Contact Info: " << contactInfo << endl;
        cout << "--- Shipment History ---" << endl;
        for (const auto& shipment : shipmentHistory)
        {
            shipment->displayShipmentInfo();
        }
    }
};

// Class for Shipment Records
class ShipmentRecord
{
private:
    vector<Shipment*> shipmentLog;

public:
    void logShipment(Shipment* shipment)
    {
        shipmentLog.push_back(shipment);
    }

    void displayShipmentLog() const
    {
        cout << "--- Shipment Log ---" << endl;
        for (const auto& shipment : shipmentLog)
        {
            shipment->displayShipmentInfo();
        }
    }
};

// Management system to handle all operations
class ShipmentManagementSystem
{
private:
    vector<Shipment*> shipments;
    vector<Carrier*> carriers;
    vector<Port*> ports;
    vector<Customer*> customers;

public:
    ~ShipmentManagementSystem()
    {
        for (auto shipment : shipments)
        {
            delete shipment;
        }
        for (auto carrier : carriers)
        {
            delete carrier;
        }
        for (auto port : ports)
        {
            delete port;
        }
        for (auto customer : customers)
        {
            delete customer;
        }
    }

    void addShipment(Shipment* shipment)
    {
        shipments.push_back(shipment);
    }

    void addCarrier(Carrier* carrier)
    {
        carriers.push_back(carrier);
    }

    void addPort(Port* port)
    {
        ports.push_back(port);
    }

    void addCustomer(Customer* customer)
    {
        customers.push_back(customer);
    }

    void displayAllShipments() const
    {
        cout << "\n--- All Shipments ---" << endl;
        for (const auto& shipment : shipments)
        {
            shipment->displayShipmentInfo();
        }
    }

    void displayAllCustomers() const
    {
        cout << "\n--- All Customers ---" << endl;
        for (const auto& customer : customers)
        {
            customer->displayCustomerInfo();
        }
    }
};

// Main Function
int main()
{
    // Create Crew
    Crew *crewMember1 = new Crew("John Smith", "Captain", 5);
    Crew *crewMember2 = new Crew("Emily Davis", "First Officer", 4);
    Crew *crewMember3 = new Crew("Raj Kumar", "Captain", 6);
    Crew *crewMember4 = new Crew("Anna Green", "First Officer", 3);

    // Create Carriers
    Carrier *carrier1 = new GeneralCargoVessel("OceanX", 5000, 20, "Large");
    Carrier *carrier2 = new OilTanker("SeaVoyager", 7000, 30, "Extra Large");
    Carrier *carrier3 = new BulkCarrier("MaritimeExpress", 6000, 25, "Medium");
    Carrier *carrier4 = new ContainerShip("GlobalFreight", 5500, 22, "Large");
    Carrier *carrier5 = new GeneralCargoVessel("AfricanStar", 8000, 35, "Heavy Duty");

    // Assign Crew to Carriers
    carrier1->assignCrew(crewMember1);
    carrier2->assignCrew(crewMember2);
    carrier3->assignCrew(crewMember3);
    carrier4->assignCrew(crewMember4);
    carrier5->assignCrew(crewMember1);  // Reusing crew for the fifth carrier

    // Create Ports
    Port *mumbaiPort = new Port("Mumbai Port", "India");
    Port *dubaiPort = new Port("Dubai Port", "UAE");
    Port *chennaiPort = new Port("Chennai Port", "India");
    Port *newYorkPort = new Port("New York Port", "USA");
    Port *shanghaiPort = new Port("Shanghai Port", "China");
    Port *kolkataPort = new Port("Kolkata Port", "India");
    Port *vizagPort = new Port("Vizag Port", "India");
    Port *londonPort = new Port("London Port", "UK");
    Port *porbandarPort = new Port("Porbandar Port", "India");
    Port *capeTownPort = new Port("Cape Town Port", "South Africa");

    // Create Cargo with Source and Destination Ports
    Cargo* iron = new Iron("M001", 6000, 150, 80000);
    Cargo* coal = new Coal("M002", 7000, 170, 85000);
    Cargo* bauxite = new Bauxite("M003", 5000, 140, 75000);
    Cargo* crudeOil = new CrudeOil("C001", 5000, 100, 150000);
    Cargo* refinedPetroleum = new RefinedPetroleum("RP001", 4000, 90, 120000);
    Cargo* chemicals = new Chemicals("CH001", 3000, 80, 100000);
    Cargo* wheatCargo = new Wheat("W001", 2000, 30, 22000);
    Cargo* riceCargo = new Rice("R001", 1800, 25, 21000);
    Cargo* pulsesCargo = new Pulses("P001", 1500, 20, 18000);
    Cargo* fruitCargo = new Fruits("F001", 1200, 18, 25000, -5);
    Cargo* vegetableCargo = new Vegetables("V001", 1300, 22, 23000, 2);
    Cargo* industrialMachine = new IndustrialMachinery("IM001", 10000, 200, 300000);
    Cargo* agriculturalMachine = new AgriculturalMachinery("AM001", 8000, 180, 250000);
    Cargo* constructionMachine = new ConstructionMachinery("CM001", 9000, 220, 280000);


    // Load Cargo into Carriers
    carrier1->loadCargo(iron);
    carrier1->loadCargo(coal);
    carrier2->loadCargo(crudeOil);
    carrier2->loadCargo(refinedPetroleum);
    carrier3->loadCargo(wheatCargo);
    carrier3->loadCargo(riceCargo);
    carrier4->loadCargo(chemicals);
    carrier5->loadCargo(industrialMachine);
    carrier5->loadCargo(agriculturalMachine);

    // Create Customs Duty
    CustomDuty customsUAE(5.0, "UAE", 100);    // 5% duty rate, UAE, $100 additional fee
    CustomDuty customsUSA(7.5, "USA", 150);    // 7.5% duty rate, USA, $150 additional fee
    CustomDuty customsIndia(6.0, "India", 75); // 6% duty rate, India, $75 additional fee

    // Create Freight Charges
    FreightCharges freight(0.5, 0.02, 0.01, 1.0); // Example rates

    // Create Total Cost Calculator
    TotalCostCalculator totalCostCalculator(0.5, 0.02, 0.01, 1.0, 5.0, "UAE", 100);

    // Calculate Total Cost for Each Cargo
    double ironTotalCost = totalCostCalculator.calculateTotalCost(3000, iron, "bulk");
    double coalTotalCost = totalCostCalculator.calculateTotalCost(1500, coal, "bulk");
    double crudeOilTotalCost = totalCostCalculator.calculateTotalCost(2000, crudeOil, "liquid");
    double refinedPetroleumTotalCost = totalCostCalculator.calculateTotalCost(500, refinedPetroleum, "liquid");

    // Display Total Costs
    cout << "--- Total Shipping Costs ---" << endl;
    cout << "Iron Cargo Total Cost: $" << ironTotalCost << endl;
    cout << "Coal Cargo Total Cost: $" << coalTotalCost << endl;
    cout << "Crude Oil Cargo Total Cost: $" << crudeOilTotalCost << endl;
    cout << "Refined Petroleum Cargo Total Cost: $" << refinedPetroleumTotalCost << endl;

    // Display Customs Duty Details
    customsUAE.displayDutyDetails(iron);
    customsUSA.displayDutyDetails(coal);
    customsIndia.displayDutyDetails(crudeOil);
    customsUAE.displayDutyDetails(refinedPetroleum);

    // Display Freight Charges Information
    freight.displayRateInfo();

    // Display Rates and Duties
    totalCostCalculator.displayRatesAndDuties();

    // Clean Up
    delete crewMember1;
    delete crewMember2;
    delete crewMember3;
    delete crewMember4;
    delete carrier1;
    delete carrier2;
    delete carrier3;
    delete carrier4;
    delete carrier5;
    delete mumbaiPort;
    delete dubaiPort;
    delete chennaiPort;
    delete newYorkPort;
    delete shanghaiPort;
    delete kolkataPort;
    delete vizagPort;
    delete londonPort;
    delete porbandarPort;
    delete capeTownPort;
    delete iron;
    delete coal;
    delete bauxite;
    delete crudeOil;
    delete refinedPetroleum;
    delete chemicals;
    delete wheatCargo;
    delete riceCargo;
    delete fruitCargo;
    delete vegetableCargo;
    delete industrialMachine;
    delete agriculturalMachine;
    delete constructionMachine;

    return 0;
}