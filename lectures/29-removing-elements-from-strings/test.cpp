#include <string>
#include <iostream>

using namespace std;

int main() {

    // Let's erase a specific character from a string.

    string hello("Hello There");
    cout << "hello = " << hello << endl;
    hello.erase(1,1); // This erases the 4th characater, which is the letter 'e'
    cout << "hello = " << hello << endl;

    auto opos = hello.find('e');
    if (opos != string::npos) {
        hello.erase(opos, 2);
    }
    else {
        cout << "The letter 'e' was not found" << endl;
    }
    cout << "hello = " << hello << endl;


    // Now let's erase using iterators

    string hello2("Hello There");
    auto first = begin(hello2);
    hello2.erase(first);
    cout << "hello2 = " << hello2 << endl;
    hello2.erase(begin(hello2) + 1, end(hello2) - 1); // Erase all of the characters, except the first and last.
    cout << "hello2 = " << hello2 << endl;

    // Now let's try replace
    string str{"Say Hello"};
    cout << "str = " << str << endl;
    auto gdx = str.find("H");

    // This replaces 5 characers starting from H with the letters "Goodbye".  That means replacing "Hello" with "Goodbye"
    if (gdx  != string::npos)
        str.replace(gdx, 5, "Goodbye");
    cout << "str = " << str << endl;

    // Now use replace() with iterators
    string str2{"Say Goodbye"};
    cout << "str2 = " << str2 << endl;
    // Replace the first 3 characters
    str2.replace(begin(str2), begin(str2) + 3, "Wave");
    cout << "str2 = " << str2 << endl;

    /// Now let's try assign()
    string str3{"Hello"};
    cout << "str3 = " << str3 << endl;
    str3.assign("Goodbye");
    cout << "str3 = " << str3 << endl;

    return 0;

}