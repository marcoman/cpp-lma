#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vec={1,2,3,4,5,6,7,8,9};
    auto size = end(vec) - begin(vec);

    // This is older C++
    int i;
    for (i = 0; i<size; ++i) {
        ;
    }

    auto iter = begin(vec);
    if (iter != end(vec)) {
        cout << "The first element of vec is: " << *iter << endl;
    }

    // OR
    // intializing the vriable is permitted in C++98
    // This is more concise and preferred.
    for (int i=0; i<size; ++i){
        ;
    }

    // This is C++17
    if (auto iter=begin(vec); iter != end(vec)) {
        cout << "The first element of vec is: " << *iter << endl;
    }


    char c;
    // Initialize the white space count to zero.
    int ws_count{0};

    const char *arr = "How much whitespace in\t here?";
    cout << "the text to process is \"" << arr << "\"" << endl;

    for (int i = 0; arr[i]; ++i) {
        // This is the C++17 feature in action - the initializer
        switch (const char c = arr[i]; c) {
            case ' ':
                [[fallthrough]];
            case '\t':
                [[fallthrough]];
            case '\n':
                ++ws_count;
                break;
            default:
                break;
        }
    }
    cout << "You have " << ws_count << " whitespace characters" << endl;
    return 0;

}