// this file tests the examples as desribed in the readme.

#include <iostream>
#include <random>

int main (void) {
    // Create a pointer
    int *pMyInt;
    int nMyInt = 42;
    // we could also initialize the value of intMyInt as:
    int *ptrMyInt2 = new int{55};
    pMyInt = &nMyInt;
    std::cout << "The value of the pointer is: " << *pMyInt << std::endl;
    std::cout << "The address of the pointer is: " << pMyInt << std::endl;
    std::cout << "The address of the variable is: " << &nMyInt << std::endl;
    std::cout << "The value of the variable is: " << nMyInt << std::endl;

    std::cout << "\nThe value of the pointer is: " << *ptrMyInt2 << std::endl;
    std::cout << "The address of the pointer is: " << ptrMyInt2 << std::endl;
    
    delete ptrMyInt2;


    // Now let's allocate memory for an array
    #define ARRAY_SIZE 5
    int *paMyInts = new int[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        paMyInts[i] = rand() % 100;
    }
    std::cout << "\nArray elements: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << paMyInts[i] << " ";
    }

    delete []paMyInts;
    return 0;
}