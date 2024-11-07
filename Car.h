#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(double price, int max_speed);
    void displayInfo() const override;
};
