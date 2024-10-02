#include <iostream>
#include <string>

using namespace std;

int main() {

    // Create a string and find the different values of its iterators, using iterator arithmetic.
    // Let's start with a longer string, for the fun of it.

    string str{"Hello, my name is Marco and I am testing my code, wrtten in C++"};

    cout << "str: " << str << endl;
    cout << "String length is: " << str.end() - str.begin() << endl;
    cout << "The string length can be calculated using a built-in function: " << str.length() << endl;

    auto second = begin(str) + 1;

    cout << "The second iterator is: " << *second << endl;

    auto last = end(str) - 1;
    cout << "The last item in our container is: " << *last << endl;

    auto mid = begin(str) + (end(str) - begin(str))/2;
    cout << "The middle element is: " << *mid << endl;

    // Now let's do some next() and prev() logic

    auto second2 = next(begin(str));
    auto last2 = prev(end(str));

    // We are advised to compare the second2 value with the end, to ensure we're printing something valid
    if (second2 != end(str)) {
        cout << "The second item is: " << *second2 << endl;
    }

    // Similar check for the last item.

    if (last2 != end(str)) {
        cout << "The last item is: " << *last2 << endl;
    }

    auto len2 = distance(begin(str), end(str));  // This returns the number of elements
    cout << "Another calculated length is: " << len2 << endl;

    auto mid2 = begin(str);
    advance(mid2, distance(begin(str), end(str))/2);
    if (mid2 != end(str)) {
        cout << "Another version of the mid presents: " << *mid2 << endl;
    }
    return 0;
}