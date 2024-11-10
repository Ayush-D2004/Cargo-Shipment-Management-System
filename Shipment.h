#pragma once

#include <string>
#include <stdexcept>
#include "Port.h"        // Assuming you have a Port class defined
#include "Carrier.h"     // Assuming you have a Carrier class defined

class Shipment {
private:
    std::string shipmentId;
    Port* sourcePort;       // Source Port
    Port* destinationPort;  // Destination Port
    Carrier* assignedCarrier;
    std::string status;     // e.g., "In Transit", "Delivered"
    double totalDistance;   // km
    double totalTime;       // hours
    std::string weatherConditions;

public:
    Shipment(std::string id, Port* source, Port* destination, Carrier* carrier, double distance, double time, std::string weather);
    
    void updateStatus(const std::string& newStatus);
    void displayShipmentInfo() const;
};
