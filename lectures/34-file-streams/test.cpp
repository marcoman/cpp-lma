#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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


    // Now, let's write a file

    ofstream ofile{"text-out.txt"};

    if (ofile)
        cout << "successfully opened file for writring\n";
    
    vector <string> words = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};

    for (auto word: words)
        ofile << word << ", ";
    
    ofile.close();

}