#include <iostream>

using namespace std;

void bad_print(char * str);
void good_print(const char * str);

int main () {

    int c = 'A';
    // This next line prints out the ASCII value of 'A', which is 65
    cout << c << endl;

    // Thsi next line prints out the character associated with the ASCII value 65, which is 'A'
    cout << (char) c << endl;

    // The new and improved way to print out a character
    cout << static_cast<char> (c) << endl;

    // Now let's do some casting
    // The first line has no change
    cout << static_cast<int> (c) << endl;
    // This second line is the same as the (char) cast
    cout << static_cast<char> (c) << endl;

    // Now let's print to our bad/good functions
    const char *msg = "Hello, Earthling!";
    // bad_print(msg); - we can't call this.
    // We can call this:
    bad_print(const_cast<char *> (msg));

    // This works, naturally:
    good_print(msg);

    // Let's test reinterpret_cast
    int *p = new int(65);
    char *q = reinterpret_cast<char *> (p);
    cout << *q << endl;

    // Free memory
    delete p;
    return 0;
}

void bad_print(char * str) {
    cout << str << endl;
}

void good_print(const char * str) {
    cout << str << endl;
}