#include <string>
#include <iostream>

using namespace std;

int main() {

    // Concatenate a number, as a string, to another string.

    string hello{"hello, "};
    string pi{to_string(3.14159)};

    hello += pi;
    cout << hello << endl;

    // Converting strings

    string str("42 ");
    cout << stoi(str) + 1 << endl;

    // Do the same in base 16
    string str2("2a ");
    cout << "printing " + str2 + "as base 16" << endl;
    cout << stoi(str2, nullptr, 16)  << endl;

    string str3("   314 159   ");
    size_t n_processed;

    auto i = stoi(str3, &n_processed);
    if (n_processed < str3.size()) {
        cout << "unprocessed characters: " << n_processed << endl;
        cout << "unprocessed string: " << str3.substr(n_processed) << endl;
    }

    cout << "Result of conversion is:" << i << endl;

    // Now let's convert doubles

    string str4("3.14159");
    cout << "str4, or pi: " << str4 << endl << endl;

    size_t n_processed2;
    cout << "stoi:" << endl;
    cout << stoi(str4, &n_processed2) << endl;
    cout << n_processed2 << " characters processed" << endl << endl;
    cout << "stod:" << endl;
    cout << stod(str4, &n_processed2) << endl;
    cout << n_processed2 << " characters processed" << endl << endl;
    
    return 0;

}