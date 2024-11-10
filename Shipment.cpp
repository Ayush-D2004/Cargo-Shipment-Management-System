#include "Shipment.h"
#include <stdexcept>
#include <iostream>

Shipment::Shipment(std::string id, Port* source, Port* destination, Carrier* carrier, double distance, double time, std::string weather)
{
    if (source == nullptr || destination == nullptr || carrier == nullptr) {
        throw std::invalid_argument("Source, destination, and carrier cannot be null.");
    }
    if (distance < 0 || time < 0) {
        throw std::invalid_argument("Distance and time must be non-negative.");
    }
    this->shipmentId = id;
    this->sourcePort = source;
    this->destinationPort = destination;
    this->assignedCarrier = carrier;
    this->status = "In Transit";
    this->totalDistance = distance;
    this->totalTime = time;
    this->weatherConditions = weather;
}

void Shipment::updateStatus(const std::string& newStatus)
{
    status = newStatus;
}

void Shipment::displayShipmentInfo() const {
    std::cout << "Shipment ID: " << shipmentId << std::endl;
    std::cout << "Source: " << sourcePort->getName() << std::endl;
    std::cout << "Destination: " << destinationPort->getName() << std::endl;
    std::cout << "Carrier: " << assignedCarrier->getName() << std::endl;
    std::cout << "Status: " << status << std::endl;
    std::cout << "Total Distance: " << totalDistance << std::endl;
    std::cout << "Total Time: " << totalTime << std::endl;
    std::cout << "Weather Conditions: " << weatherConditions << std::endl;
}
