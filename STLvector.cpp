// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::vector Utilities

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define PRINT print(myvector);

void print (vector <int> myvector)
{
    for (auto elem: myvector)
        cout << elem << endl;
    cout << "====" << endl;
}


int main()
{
    // Create a Vector
    vector <int> myvector;
    vector <int>::iterator itr;

    // Add element at the end
    myvector.push_back(100);

    // Find Match with Key=100
    itr = std::find(myvector.begin(),
                    myvector.end(),
                    100);

    if (itr != myvector.end())
        cout << "Match Found: 100" << endl;

    myvector.push_back (200);

    // Delete element with Key=200
    itr = std::find(myvector.begin(),
                    myvector.end(),
                    200);
    if (itr != myvector.end())
        myvector.erase (itr);

    // Find Number of Vector Entries
    cout << "Size = " << myvector.size() << endl;

    myvector.push_back (200);
    myvector.push_back (300);
    myvector.push_back (400);

    // Print Vector Values
    // for each works with all containers supporting begin() & end()
    // Note: elem is not an iterator but the constituent element itself
    for (auto elem: myvector)
    {
        cout << elem << endl;
    }
    cout << "====" << endl;

    // Remove Last Element
    myvector.pop_back();

    PRINT

    // Sort the Vector
    std::sort (myvector.begin(),myvector.end());

    PRINT


    return 0;
}


