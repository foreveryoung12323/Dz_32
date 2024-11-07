#include <iostream>
#include <vector>
#include "NamespaceAB.h"       
#include "Class1.h"             
#include "Class2.h"
#include "Animal.h"             
#include "Dog.h"
#include "Wolf.h"
#include "Parrot.h"
#include "Chicken.h"

int main() {
    // task 1
    A::B::myFunction();
    myFunction();      
    using namespace A::B;
    

    //task 2
    Namespace1::Class1 obj1;
    Namespace2::Class2 obj2;
    obj1.display();
    obj2.display();

    // task 3
    std::vector<Animal*> animals;
    animals.push_back(new Animals::Dog());
    animals.push_back(new Animals::Wild::Wolf());
    animals.push_back(new Birds::Parrot());
    animals.push_back(new Birds::Domestic::Chicken());


    for (const auto& animal : animals) {
        animal->makeSound();
    }

   
    for (auto& animal : animals) {
        delete animal;
    }


}
