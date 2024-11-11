#include <iostream>
#include <string>
include typo

using namespace std;

int main() {
    string hello{"hello"};
    hello.append(" world"s);
    cout << hello << endl;

    string hello{"redeclare"};

    hello.append("BLA!!!!"s, 3,2); // This adds from character 3, a total of 2 characters.
    cout << hello << endl;

    string first{"for"};
    cout << "first  = " << first << endl;

    first.insert(2, "lde"s);
    cout << "first  = " << first << endl;

    string second{"care"};
    cout << "second = " << second << endl;

    string third("omp");
    second.insert(1,third);

    cout << "second = " << second << endl;

    // Next, let's do substring inserts
    string str {"xx"};
    string str2{"trombone"};
    str.insert(1,str2,4,2);
    cout << str << endl;

    string str3("cash");
    str3.insert(1,3,'r');
    cout << str3 << endl;

    // Inserting at the result of a final call.  We're passing the index from the first call into the second.
    auto opos = hello.find('o');
    if (opos != string::npos)
        hello.insert(opos, 2, 'o');
    cout << hello << endl;

    // Now let's use iterators
    string str4{"word"};
    auto last = end(str4) - 1;
    if (last != str4.end())
        str4.insert(last,'l');

    cout << str4 << endl;

    string str5{"ski"};
    auto last2 = end(str5);
    str5.insert(last2, 2, 'l');
    cout << str5 << endl;

    return 0;
}

