#include "Car.h"

Car::Car(double price, int max_speed) : Vehicle(price, max_speed) {}

void Car::displayInfo() const {
    cout << "Car: Price: " << price << ", Speed: " << max_speed << endl;
}
