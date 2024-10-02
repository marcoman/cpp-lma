#include <iostream>
#include <vector>

using namespace std;

// Prototype for a template

template <class M>
M Max(const M& t1, M& t2) {
    if (t1 > t2) {
        return t1;
    }
    else {
        return t2;
    }
}

int main() {

    // Exercise the template class above.

    int i1{3};
    int i2{6};
    double d1{3.9393};
    double d2{9.99};
    string s1{"Marco"};
    string s2{"Polo"};

    cout << "The max of the two ints is: " << Max(i1, i2) << endl;
    cout << "the max of the two doubles is: " << Max(d1, d2) << endl;
    cout << "The max of the two strings is: " << Max(s1, s2) << endl;


    // Let's use CTAD
    vector vec{1,2,3};
    cout << "vec = ";
    for (auto it: vec){
        cout << it << ", ";
    }
    cout << endl;

    return 0;

}


