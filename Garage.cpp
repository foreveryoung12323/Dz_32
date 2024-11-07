#include "Garage.h"

Garage::~Garage() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

void Garage::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void Garage::displayAll() const {
    for (const Vehicle* vehicle : vehicles) {
        vehicle->displayInfo();
    }
}
