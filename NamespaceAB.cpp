#include "NamespaceAB.h"

using namespace std;

namespace A {
    namespace B {
        void myFunction() {
            cout << "Function inside namespace A::B" << endl;
        }
    }
}

void myFunction() {
    cout << "Global function outside any namespace" << endl;
}
