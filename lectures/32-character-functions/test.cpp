#include <iostream>
#include <cctype>

using namespace std;

bool yes_or_no(const string& input) {
    char c = input[0];
    if (toupper(c) == 'Y')
        return true;
    else
        return false;
}

bool equal_strings(const string& lhs, const string& rhs) {
    if (lhs.size() != rhs.size())
        return false;
    
    auto lit = cbegin(lhs);
    auto rit = cbegin(rhs);

    // cbegin() returns a const_iterator
    while (lit != cend(lhs)) {
        if (toupper(*lit) != toupper(*rit))
            return false;
        ++lit;
        ++rit;
    }

    return true;
}



int main()
{
    string hello{"Hello, world!  How are you?"};

    for (auto c: hello) {
        if (isupper(c))
            cout << c << " is upper case letter\n";
        if (islower(c))
            cout << c << " is lower case letter\n";
        if (isdigit(c))
            cout << c << " is a digit\n";
        if (isspace(c))
            cout << c << " is a space\n";
        if (ispunct(c))
            cout << c << " is a punctuation\n";
    }

    // Now, let's test the yes_or_no function
    string input;
    cout << "Enter Y or N: ";
    cin >> input;
    if (yes_or_no(input))
        cout << "You entered yes\n";
    else
        cout << "You entered no\n";


    // Let's compare some strings
    string s1{"Hello"};
    string s2{"hello"};
    string s3{"Hello, world!"};
    string s6{"hello"};
    if (equal_strings(s1, s2))
        cout << "s1 and s2 are equal\n";
    else
        cout << "s1 and s2 are not equal\n";
    
    if (equal_strings(s3, s6))
        cout << "s3 and s6 are equal\n";
    else
        cout << "s3 and s6 are not equal\n";
    
    if (equal_strings(s2, s6))
        cout << "s2 and s6 are equal\n";
    else
        cout << "s2 and s6 are not equal\n";
    
    return 0;
}
