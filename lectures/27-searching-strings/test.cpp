#include <iostream>
#include <string>

using namespace std;

int main() {
    string str{"Hello world"};
    cout << "The initial string is: " << str << endl;

    // I learned we need to check the return value if we're to use it.
    // cout << "Search #1 yields " << str.find('o') << endl;
    // cout << "Search #2 yields " << str.find("or") << endl;
    // cout << "Search #3 yields " << str.find('O') << endl;

    // Alternatively,

    size_t pos;
    pos = str.find("or");
    if (pos != string::npos) {
        cout << "Found 'or' at position " << pos << endl;
    } else {
        cout << "'or' not found" << endl;
    }

    pos = str.find('O');
    if (pos != string::npos) {
        cout << "Found 'O' at position " << pos << endl;
    } else {
        cout << "'O' not found" << endl;
    }

    pos = str.find('o');
    if (pos != string::npos) {
        cout << "Found 'o' at position " << pos << endl;
    } else {
        cout << "'o' not found" << endl;
    }

    // Now, let's use rfind
    pos = str.rfind('o');
    if (pos != string::npos) {
        cout << "Found 'o' at position " << pos << endl;
        str[pos] = 'O';
    } else {
        cout << "Last 'o' not found" << endl;
    }

    cout << "The modified string is: " << str << endl;
    pos = str.rfind('o');
    if (pos != string::npos) {
        cout << "Found 'o' at position " << pos << endl;
    } else {
        cout << "'o' not found" << endl;
    }

    // Now, let's use replace
    str.replace(0, 5, "Goodbye");
    // Show me what we have
    cout << "The modified string is: " << str << endl;

    // Now let's search first of and first not of
    string vowels{"aeiou"};
    pos = str.find_first_of(vowels);
    if (pos != string::npos) {
        cout << "First vowel found at position " << pos << endl;
    } else {
        cout << "No vowels found" << endl;
    }
    pos = str.find_first_not_of(vowels);
    if (pos != string::npos) {
        cout << "First consonant found at position " << pos << endl;
    } else {
        cout << "No consonants found" << endl;
    }
    // find the last ones
    pos = str.find_last_of(vowels);
    if (pos != string::npos) {
        cout << "Last vowel found at position " << pos << endl;
    } else {
        cout << "No vowels found" << endl;
    }
    pos = str.find_last_not_of(vowels);
    if (pos != string::npos) {
        cout << "Last consonant found at position " << pos << endl;
    } else {
        cout << "No consonants found" << endl;
    }
    return 0;

}

