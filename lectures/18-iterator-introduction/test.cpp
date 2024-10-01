#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

    string str{"Hello"};
    string::iterator it = str.begin();
    // We can also do a for-loop, 
    while (it != str.end() ) {
        cout << *it << ", ";
        ++it;
    }
    cout << endl;

    // Now with a vector
    vector<int> vec{3, 1, 3, 11, 33, 1, 2, 3, 4, 5};

    for (vector<int>::iterator it = vec.begin() ; it != vec.end(); ++it) {
        cout << *it << ", ";
    }
    cout << endl;

    return 0;
}