#pragma once
#include "Animal.h"

using namespace std;

namespace Birds {
    namespace Domestic {
        class Chicken : public Animal {
        public:
            void makeSound() const override;
        };
    }
}
