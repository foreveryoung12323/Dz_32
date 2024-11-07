#pragma once
#include "Animal.h"

using namespace std;

namespace Animals {
    namespace Wild {
        class Wolf : public Animal {
        public:
            void makeSound() const override;
        };
    }
}
