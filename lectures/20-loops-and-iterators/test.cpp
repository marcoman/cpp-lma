#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str = "Hello, World!";
    string::const_iterator cit;

    cout << "Forward iterator: " << endl;
    for (cit = str.begin(); cit != str.end(); cit++)
        // We can access the elements of the container, but we can't modify them.
        cout << *cit << ", ";
    cout << endl;

    cout << "Const iterator for a vector: " << endl;
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::const_iterator cit2;
    for (cit2 = vec.begin(); cit2 != vec.end(); cit2++)
        cout << *cit2 << ", ";
    cout << endl;

    // Now let's test a reverse iterator
    cout << "Reverse iterator: " << endl;
    string::reverse_iterator rit;
    for (rit = str.rbegin(); rit != str.rend(); rit++)
        cout << *rit << ", ";
    cout << endl;

    cout << "Const iterator: " << endl;
    for (auto cit2 = str.cbegin(); cit2 != str.cend(); ++cit2)
        cout << *cit2 << ", ";
    cout << endl;

    cout << "Reverse const iterator: " << endl;
    for (auto crit = str.crbegin(); crit != str.crend(); ++crit)
        cout << *crit << ", ";
    cout << endl;

    // Non-member `begin()` and `end()` functions
    cout << "Non-member `begin()` and `end()` functions: " << endl;
    for (auto it = begin(str); it != end(str); ++it)
        cout << *it << ", ";
    cout << endl;

    // Non-member `rbegin()` and `rend()` functions
    cout << "Non-member `rbegin()` and `rend()` functions: " << endl;
    for (auto rit = rbegin(str); rit != rend(str); ++rit)
        cout << *rit << ", ";
    cout << endl;

    // now with arrays
    cout << "Arrays: " << endl;
    int arr[] = {1, 2, 3, 4, 5};
    for (auto it = begin(arr); it != end(arr); ++it)
        cout << *it << ", ";
    cout << endl;

    // and the reverse
    cout << "Reverse arrays: " << endl;
    for (auto rit = rbegin(arr); rit != rend(arr); ++rit)
        cout << *rit << ", ";
    cout << endl;

    // And const non-member functions
    cout << "Const non-member functions: " << endl;
    for (auto cit = cbegin(arr); cit != cend(arr); ++cit)
        cout << *cit << ", ";
    cout << endl;


    // Range for loops
    cout << "Range for loops: " << endl;
    for (auto i : str)
        cout << i << ", ";
    cout << endl;

    // Now let's modify elements
    cout << "Modifying elements: " << endl;
    for (auto& i : str)
        i = toupper(i);
        // We can modify the elements of the container.
    cout << str << endl;

    // Same example, but with our vector
    for (auto& i : vec)
        i *= 2;
        // We can modify the elements of the container.
    cout << "Modified elements: " << endl;
    for (auto i : vec)
        cout << i << ", ";
        // We can modify the elements of the container.
    cout << endl;

    return 0;
}