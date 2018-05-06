// Author: Sandeep Singh
// Date: April 29, 2018
// Basic Utilities for 2-D Array

#include <iostream>
#define ROWS 3
#define COLS 4
using namespace std;

int main()
{
    int **ptr = new int*[ROWS];

    for (int i=0; i<ROWS; i++)
        ptr[i] = new int [COLS];


    // Fill Values
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
            ptr[i][j] = i+j;
    }

    // Print Values
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
            cout << ptr[i][j] << ' ';
        cout << endl;
    }


    // Release Memory
    for (int i=0; i<ROWS; i++)
        delete[] ptr[i];

    return 0;
}
