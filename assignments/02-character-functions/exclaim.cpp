#include <iostream>
#include <string>

using namespace std;


// Write a function that takes a string as input and returns the string with all punctuation replaced by the exclamation mark
std::string exclaim (std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (ispunct(str[i])) {
            str[i] = '!';
        }
    }
    return str;
}
