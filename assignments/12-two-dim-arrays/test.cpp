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
    cout << "\n The names are:";

    for (int r = 0; r < NUM_ROWS; r++)
    {
        for (int c = 0; c < NUM_COLS; c++)
        {
            cout << names[r][c] << " ";
        }
    }
    cout << "\n";
    return 0;
}