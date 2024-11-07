#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vehicle {
protected:
    double price;
    int max_speed;

public:
    Vehicle(double price, int max_speed);
    virtual ~Vehicle() {}  

    virtual void displayInfo() const = 0; 
};
