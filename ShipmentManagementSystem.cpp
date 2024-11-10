#include "ShipmentManagementSystem.h"
#include "ShipmentRecord.h"
#include <iostream>
#include <stdexcept>
#include <fstream>

ShipmentManagementSystem::~ShipmentManagementSystem()
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

void ShipmentManagementSystem::addShipment(Shipment* shipment)
{
    if (shipment == nullptr) {
        throw std::invalid_argument("Cannot add null shipment.");
    }
    shipments.push_back(shipment);
}

void ShipmentManagementSystem::addCarrier(Carrier* carrier)
{
    if (carrier == nullptr) {
        throw std::invalid_argument("Cannot add null carrier.");
    }
    carriers.push_back(carrier);
}

void ShipmentManagementSystem::addPort(Port* port)
{
    if (port == nullptr) {
        throw std::invalid_argument("Cannot add null port.");
    }
    ports.push_back(port);
}

void ShipmentManagementSystem::addCustomer(Customer* customer)
{
    if (customer == nullptr) {
        throw std::invalid_argument("Cannot add null customer.");
    }
    customers.push_back(customer);
}

void ShipmentManagementSystem::displayAllShipments() const
{
    std::cout << "\n--- All Shipments ---" << std::endl;
    for (const auto& shipment : shipments)
    {
        shipment->displayShipmentInfo();
    }
}

void ShipmentManagementSystem::displayAllCustomers() const
{
    std::cout << "\n--- All Customers ---" << std::endl;
    for (const auto& customer : customers)
    {
        customer->displayCustomerInfo();
    }
}

void ShipmentManagementSystem::initialize() {
    // Add initialization logic here
    // For example: load data, set up initial state, etc.
}

void ShipmentManagementSystem::processShipments() {
    // Implement the logic for processing shipments here
    // For example:
    // - Iterate through shipments
    // - Assign carriers
    // - Update shipment status
}

std::vector<ShipmentRecord> ShipmentManagementSystem::calculateShipmentCosts() {
    std::vector<ShipmentRecord> records;
    // Implement the logic to calculate costs and create ShipmentRecord objects
    // Add the records to the vector
    return records;
}

void ShipmentManagementSystem::addShipmentRecord(const ShipmentRecord& record) {
    records.push_back(record);
}

void ShipmentManagementSystem::saveToCSV(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << "ShipmentID,CustomerName,OriginPort,DestinationPort,Weight,Date\n";
        for (const auto& record : records) {
            file << record.getShipmentId() << ","
                 << record.getCustomerName() << ","
                 << record.getOrigin() << ","
                 << record.getDestination() << ","
                 << record.getWeight() << ","
                 << record.getDate() << "\n";
        }
        file.close();
    }
}
