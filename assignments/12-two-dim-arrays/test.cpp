#include <iostream>

using namespace std;

// For fun, let's define some constants for the number of rows and columns in our 2D array
#define NUM_ROWS 2
#define NUM_COLS 4

int main(void)
{
    // This example allocates memory on the stack.
    string names[NUM_ROWS][NUM_COLS] = {
        {"John", "Mary", "Peter", "Sue"},
        {"Smith", "Jones", "Brown", "Davis"}
    };


    cout << "names[1][2] is " << names[1][2] << endl;
    cout << "\nThe names are:";

    for (int r = 0; r < NUM_ROWS; r++)
    {
        for (int c = 0; c < NUM_COLS; c++)
        {
            cout << names[r][c] << " ";
        }
    }
    cout << "\n";

    // This is the better example, because it uses memory allocated from the heap.
    string** pName = new string*[NUM_ROWS];
    for (int r = 0; r < NUM_ROWS; r++)
    {
        pName[r] = new string[NUM_COLS];
    }

    pName[0][0] = "nJohn";
    pName[0][1] = "nMary";
    pName[0][2] = "nPeter";
    pName[0][3] = "nSue";
    pName[1][0] = "nSmith";
    pName[1][1] = "nJones";
    pName[1][2] = "nBrown";
    pName[1][3] = "nDavis";

    cout << "new names[1][2] is ... " << pName[1][2] << endl;
    cout << "new names are:";

    for (int r = 0; r < NUM_ROWS; r++)
    {
        for (int c = 0; c < NUM_COLS; c++)
        {
            cout << pName[r][c] << " ";
        }
    }
    cout << "\n";

    // Is this right?
    for (int r = 0; r < NUM_ROWS; r++)
    {
        delete[] pName[r];
    }
    return 0;
}