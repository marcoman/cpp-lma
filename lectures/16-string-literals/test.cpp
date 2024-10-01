#include <iostream>
#include <string>

using namespace std;
using namespace std::string_literals;

// This is a simple test of strings as an array of 
int main() {
    const char *cca = "Hello, World!";
    cout << "cca is: " << cca << endl;

    string str{"Hello, World!"};
    cout << "str is: " << str << endl;

    cout << "std::string literal example is: " << "Hello"s + ", "s + "World!"s << endl;

    // This would fail
    //cout << "std::string literal example is: " << "Hello" + ", " + "World!" << endl;

    // Now let's have some fun with some double-quotes in string

    string str3 = R"x(This entire string can be quoted, including quotes such as "" or '' or '""')x";
    cout << "str3 is: " << str3 << endl;

    

}