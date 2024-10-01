
#include <cstdint>
#include <iostream>

using namespace std;

int main() {

    // Let's showcase our knowledge of C++11's types
    uint8_t a = 1;
    uint16_t b = 2;
    uint32_t c = 3;
    uint64_t d = 4;
    int8_t e = 5;
    int16_t f = 6;
    int32_t g = 7;
    int64_t h = 8;

    cout << "Size of uint8_t: " << sizeof(a) << endl;
    cout << "Size of uint16_t: " << sizeof(b) << endl;
    cout << "Size of uint32_t: " << sizeof(c) << endl;
    cout << "Size of uint64_t: " << sizeof(d) << endl;
    cout << "Size of int8_t: " << sizeof(e) << endl;
    cout << "Size of int16_t: " << sizeof(f) << endl;
    cout << "Size of int32_t: " << sizeof(g) << endl;
    cout << "Size of int64_t: " << sizeof(h) << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

    // Now let's show more aspects about types.  
    // First, the default is to use decimal
    int decimal = 42;
    cout << "Decimal: " << decimal << endl;

    // Hex numbers start with 0x or 0X
    int hex = 0xA;
    cout << "Hex: " << hex << endl;
    int hex2 = 0X2;
    cout << "Hex2: " << hex2 << endl;

    // Octal numbers start with '0'
    int octal = 055;
    cout << "Octal: " << octal << endl;

    // Binary types start with '0b'
    int binary = 0b101010;
    cout << "Binary: " << binary << endl;

    // Also the single quote for readability.  This is new in C++14
    // The separator doesn't do anything to the number - it is just for readability
    int bigNumber2 = 1'000'000;
    cout << "Big Number2: " << bigNumber2 << endl;


    return 0;
}