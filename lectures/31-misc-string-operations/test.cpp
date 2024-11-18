#include <iostream>
#include <string>
#include <vector>

using namespace std;

// This function prints the items in an array one-by-one
void print(int *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void) {

    // Use the data member function
    std::vector<int> numbers{1,2,3,4,5,6};
    print(numbers.data(), numbers.size());

    // Now, let's swap two different strings and show the results
    string s1{"Hello"};
    string s2{"Goodbye"};
    cout << "strings are " << s1 << " and " << s2 << endl;

    s1.swap(s2);
    cout << "strings are now: " << s1 << " and " << s2 << endl;
   
    // Now, let's swap the two strings using the std::swap function
    std::swap(s1, s2);
    cout << "strings are now: " << s1 << " and " << s2 << endl;

    return 0;
}