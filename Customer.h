#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Shipment.h"  // Assuming Shipment class is defined

class Customer {
public:
    Customer(std::string name, std::string email, std::string address);
    void displayCustomerInfo() const;
    void addShipment(Shipment* shipment);
    const std::string& getName() const;

private:
    std::string customerName;
    std::string name;
    std::string email;
    std::string address;
    std::string contactInfo;
    std::vector<Shipment*> shipmentHistory;
};
