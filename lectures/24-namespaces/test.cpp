#include <iostream>

using namespace std;

int x{23};  // This is defined in the global namespace

namespace marco {
    int x{47}; // I have to remember to use this form of initializer, as it is modern.
    void func() {
        std::cout << "x = " << x << std::endl;
        std::cout << "::x = " << ::x << std::endl;
    }

}

int main() {
    marco::func();

    // The following also work:

    cout << "marco::x is " << marco::x << endl;
    cout << "global x is " << x << endl;
    return 0;
}
