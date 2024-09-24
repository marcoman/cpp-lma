#include <iostream>

using namespace std;

class Test {
    int i;
    string str;
    public:
        Test() {
            i = 0;
            str = "Hello";
        }

        // Initialize object from arguments
        Test(int i, const string& str) : i(i), str(str) {
        // Allocate memory, connect to database, etc
        }

        // Initialize object from another Test object
        Test(const Test& other) : i(other.i), str(other.str) { 
        // Configure object (if needed)
        }

        // Assign object from another Test object
        Test& operator =(const Test& other) {
            i = other.i;
            str = other.str;
            return *this; // Return assigned-to object
        }

        // Prepare object to be released
        ~Test() {
        // Release allocated memory, close the connection to the database, etc
        }


        void print_test(void) {
            cout << i << " " << str << endl;
        }
};

int main(void) {
    Test myTest;
    myTest.print_test();
    return 0;
}