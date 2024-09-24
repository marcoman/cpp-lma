#include <iostream>

using namespace std;

// Write a program which demonstrates universal initialization of built-in types and ojects with single and multiple initial values.

int main (void) {
    int i = 10;
    int j {20};
    int k(30);
    int l = {40};
    int m {50};

    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;
    cout << "l = " << l << endl;
    cout << "m = " << m << endl;

    return 0;
}