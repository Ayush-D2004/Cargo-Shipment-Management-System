#pragma once

#include <vector>
#include <string>
#include "Shipment.h"
#include "Customer.h"

class ShipmentRecord
{
private:
    int id;
    Customer customer;
    std::string origin;
    std::string destination;
    double weight;
    std::string date;
    std::vector<Shipment*> shipmentLog;

public:
    std::string cargoId;
    std::string cargoType;
    double volume;
    double value;
    double totalCost;

    ShipmentRecord(int id, const Customer& customer, const std::string& origin, 
                   const std::string& destination, double weight, const std::string& date);
    void logShipment(Shipment* shipment);
    void displayShipmentLog() const;
    void setDate(const std::string& date);
    std::string getDate() const;
    int getShipmentId() const { return id; }
    const std::string& getCustomerName() const { return customer.getName(); }
    std::string getOrigin() const;
    std::string getDestination() const;
    double getWeight() const { return weight; }
};
