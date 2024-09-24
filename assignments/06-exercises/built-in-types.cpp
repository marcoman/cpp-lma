#include <iostream>

using namespace std;

// Write a program which demonstrates universal initialization of built-in types and ojects with single and multiple initial values.

int main (void) {
    int i = 10;
    int j {20};

    // This won't work because it shouldn't in C++
//    int myarr{3,5};
    // Instead, this is how we intialize an array with values
    int myarr[3] = {3,5,7};

    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    // This prints the address of the array
    cout << "myarr = " << myarr << endl;
    // this prints the value of the first item in the array
    cout << "*myarr = " << *myarr << endl;

    return 0;
}