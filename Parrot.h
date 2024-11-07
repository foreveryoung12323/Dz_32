#pragma once
#include "Animal.h"

using namespace std;

namespace Birds {
    class Parrot : public Animal {
    public:
        void makeSound() const override;
    };
}
