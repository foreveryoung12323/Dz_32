#include "Garage.h"
#include "Car.h"

int main() {
    Garage garage;

    garage.addVehicle(new Car(15000, 180));
    garage.addVehicle(new Car(20000, 220));

    garage.displayAll();


}
