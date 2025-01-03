#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main() {
    // Let's read some data from a file named "text.txt" and show it on the terminal

    ifstream ifile{"text.txt"};

    if (ifile) {
        string line;
        while (ifile >> line) {
            cout << line << ",";
        }
    } else {
        cout << "File not found" << endl;
    }

    cout << endl;
    ifile.close();


    // THis next block reads from the file, one line at a time.
    ifstream ifile2{"text.txt"};
    if (ifile2) {
        string line;
        while (getline(ifile2, line)) {
            cout << line << endl;
        }
    } else {
        cout << "File not found" << endl;
    }

    ifile2.close();
}