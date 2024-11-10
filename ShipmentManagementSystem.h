#pragma once

#include <vector>
#include <stdexcept>
#include <string>
#include "Shipment.h"
#include "Carrier.h"
#include "Port.h"
#include "Customer.h"
#include "ShipmentRecord.h"

class ShipmentManagementSystem
{
private:
    std::vector<Shipment*> shipments;
    std::vector<Carrier*> carriers;
    std::vector<Port*> ports;
    std::vector<Customer*> customers;
    std::vector<ShipmentRecord> records;

public:
    ~ShipmentManagementSystem();

    void addShipment(Shipment* shipment);
    void addCarrier(Carrier* carrier);
    void addPort(Port* port);
    void addCustomer(Customer* customer);
    void displayAllShipments() const;
    void displayAllCustomers() const;

    void initialize();
    void processShipments();
    std::vector<ShipmentRecord> calculateShipmentCosts();
    void addShipmentRecord(const ShipmentRecord& record);
    void saveToCSV(const std::string& filename) const;
};
