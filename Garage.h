#pragma once
#include <vector>
#include "Vehicle.h"

using namespace std;

class Garage {
private:
    vector<Vehicle*> vehicles;

public:
    ~Garage();
    void addVehicle(Vehicle* vehicle);
    void displayAll() const;
};
