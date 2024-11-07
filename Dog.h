#pragma once
#include "Animal.h"

using namespace std;

namespace Animals {
    class Dog : public Animal {
    public:
        void makeSound() const override;
    };
}
