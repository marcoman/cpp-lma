#include <iostream>
#include <string>
#include <vector>

using namespace std;

int retint(void);
char retchar(void);
string retstring(void);

int main () {

    auto i{42};
    auto str1 = "Hello";
    auto str2 = "Hello"s;

    // Also simplify a complex type.  These accomplish the same!

    vector<int> vec{1,2,3,4,5,6,7};
    vector<int>::iterator it = vec.begin();

    // Let the compiler help us:
    auto it2 = vec.begin();

    auto it_string = str2.begin();
    cout << "First element of str2: " << *it << endl;

    const int& x{6};
    auto y = x;
    ++y;  // Is this alllowed?
    // YES.  This is because auto ignores qualifiers.
    cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y << endl;

    cout << "The address of x is " << &x << endl;
    cout << "The address of y is " << &y << endl;

    // This is valid:
    const auto z = x;

    auto t1 = retint();
    auto t2 = retchar();
    auto t3 = retstring();

    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;
    cout << "t3 = " << t3 << endl;

    return 0;

}

int retint (void) {
    return 42;
}

char retchar (void) {
    return 'a';
}

string retstring (void) {
    return "Hello";
}
