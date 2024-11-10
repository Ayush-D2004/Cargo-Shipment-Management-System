#include "ShipmentRecord.h"
#include <iostream>

void ShipmentRecord::logShipment(Shipment* shipment)
{
    shipmentLog.push_back(shipment);
}

void ShipmentRecord::displayShipmentLog() const
{
    std::cout << "--- Shipment Log ---" << std::endl;
    for (const auto& shipment : shipmentLog)
    {
        shipment->displayShipmentInfo();
        std::cout << "------------------------" << std::endl;
    }
}

void ShipmentRecord::setDate(const std::string& date) {
    this->date = date;
}

std::string ShipmentRecord::getDate() const {
    return date;
}

ShipmentRecord::ShipmentRecord(int id, const Customer& customer, const std::string& origin, 
                               const std::string& destination, double weight, const std::string& date)
    : id(id), customer(customer), origin(origin), destination(destination), weight(weight), date(date) {}

std::string ShipmentRecord::getOrigin() const {
    return origin;
}

std::string ShipmentRecord::getDestination() const {
    return destination;
}

// Implement other methods as needed
