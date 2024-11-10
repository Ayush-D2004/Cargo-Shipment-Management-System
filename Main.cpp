#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
using namespace std;

// Abstract Base Class for Cargo
#include "Cargo.h"

// Derived Class for Container Cargo
#include "Container.h"

// Class for Fragile Cargo
#include "FragileCargo.h"

// Class for Liquid Cargo
#include "LiquidCargo.h"

// Derived classes for Mineral Cargo
#include "MineralCargo.h"

// Base class for Food Cargo
#include "FoodCargo.h"

// Adding Machine Cargo Classes
#include "Machine.h"

// Class for Textile Cargo
#include "TextileCargo.h"

// Class for Heavy Equipment Cargo
#include "HeavyEquipmentCargo.h"

// Class for Custom Duty Calculation
#include "CustomDuty.h"

// Class for Freight Shipping Charges Calculation
#include "FreightCharges.h"

// Class to Calculate Total Cost of Shipping Including Customs Duty
#include "TotalCostCalculator.h"

// Class for Crew
#include "Crew.h"

// Carrier Class and Derived Carrier Classes
#include "Carrier.h"

// Ports - Base Class and Derived Classes
#include "Port.h"

// Shipment Class
#include "Shipment.h"

// New class for Customer
#include "Customer.h"

// New class for Shipment Records
#include "ShipmentRecord.h"

// Management system to handle all operations
#include "ShipmentManagementSystem.h"

// Main Function
int main() {
    ShipmentManagementSystem sms;

    Customer customer1("John Doe", "john@example.com", "123 Main St");
    ShipmentRecord shipment1(1001, customer1, "New York", "Los Angeles", 150.5, "2023-05-15");
    sms.addShipmentRecord(shipment1);

    Customer customer2("Jane Smith", "jane@example.com", "456 Elm St");
    ShipmentRecord shipment2(1002, customer2, "Chicago", "Miami", 75.2, "2023-05-16");
    sms.addShipmentRecord(shipment2);

    Customer customer3("Bob Johnson", "bob@example.com", "789 Oak St");
    ShipmentRecord shipment3(1003, customer3, "Seattle", "Houston", 200.0, "2023-05-17");
    sms.addShipmentRecord(shipment3);

    Customer customer4("Alice Brown", "alice@example.com", "101 Pine St");
    ShipmentRecord shipment4(1004, customer4, "Boston", "San Francisco", 120.8, "2023-05-18");
    sms.addShipmentRecord(shipment4);

    Customer customer5("Charlie Davis", "charlie@example.com", "202 Maple St");
    ShipmentRecord shipment5(1005, customer5, "Denver", "Atlanta", 90.3, "2023-05-19");
    sms.addShipmentRecord(shipment5);

    Customer customer6("Eva Green", "eva@example.com", "303 Cedar St");
    ShipmentRecord shipment6(1006, customer6, "Portland", "Phoenix", 180.7, "2023-05-20");
    sms.addShipmentRecord(shipment6);

    Customer customer7("Frank White", "frank@example.com", "404 Birch St");
    ShipmentRecord shipment7(1007, customer7, "Las Vegas", "Orlando", 135.2, "2023-05-21");
    sms.addShipmentRecord(shipment7);

    Customer customer8("Grace Lee", "grace@example.com", "505 Walnut St");
    ShipmentRecord shipment8(1008, customer8, "Detroit", "Dallas", 160.9, "2023-05-22");
    sms.addShipmentRecord(shipment8);

    sms.saveToCSV("shipment_records.csv");
    cout << "Test cases executed and data saved to shipment_records.csv" << std::endl;
    return 0;
}
