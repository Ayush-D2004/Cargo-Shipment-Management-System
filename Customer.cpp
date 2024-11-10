#include "Customer.h"
#include <iostream>
#include <vector>

Customer::Customer(std::string name, std::string email, std::string address)
    : customerName(name), contactInfo(email), address(address) {
    // Constructor body
}

void Customer::addShipment(Shipment* shipment)
{
    shipmentHistory.push_back(shipment);
}

void Customer::displayCustomerInfo() const {
    std::cout << "Customer: " << customerName << ", Contact: " << contactInfo << std::endl;
}

const std::string& Customer::getName() const {
    return customerName;
}
