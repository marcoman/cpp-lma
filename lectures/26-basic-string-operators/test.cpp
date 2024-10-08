#include <iostream>
#include <string>

using namespace std;

int main() {

    string str{"Hello World!"};
    str[1] = 'a';

    string s1 = str.substr(6);
    string s2 = str.substr(6, 3);

    cout << "main string is " << str << endl;
    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;

    // This creates a string with the character duplicated the number of times.

    string many_x{10, 'x'};
    cout << "many_x is " << many_x << endl;

    // Constructor with an initialize list:
    string howdy{'H', 'o', 'w', 'd', 'y'};
    cout << "howdy is " << howdy << endl;

    // Initialize a string variable from a substring
    string hello2(str, 1);
    string hello3(str, 1, 3);

    cout << "hello2 is " << hello2 << endl;
    cout << "hello3 is " << hello3 << endl;

    string empty;
    cout << "empty is " << empty << " with size " << empty.size() << endl;
    return 0;
}
