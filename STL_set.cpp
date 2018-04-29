// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::set Utilities

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Create a Set
    set <int> myset;
    set <int>::iterator itr;

    // Insert the value 100
    auto retVal = myset.insert (100);
    if (retVal.second)
        cout << "INSERT OK" << endl;

    itr=retVal.first;
    cout << "Value: " << *itr << endl;


    // Count elements with a specific key
    if (myset.count(100) > 0)
        cout << "Match Found: 100" << endl;

    // Find Match with Key=100
    itr = myset.find(100);
    if (itr != myset.end())
        cout << "Match Found: 100" << endl;

    myset.insert (200);

    // Delete element with Key=200
    myset.erase (200);

    // Find Number of Set Entries
    cout << "Size = " << myset.size() << endl;

    myset.insert (200);
    myset.insert (300);
    myset.insert (400);

    // Lower Bound: >=
    itr = myset.lower_bound(300);
    cout << "Lower Bound: " << *itr << endl;

    // Upper Bound: >
    itr = myset.upper_bound(300);
    cout << "Upper Bound: " << *itr << endl;

    // Equal Range: [Lower Bound, Upper Bound]
    std::pair <set <int>::iterator,          // Upper Bound Iterator
               set <int>::iterator> ret;     // Lower Bound Iterator
    ret = myset.equal_range(300);

    itr = ret.first;
    cout << "Lower Bound: " << *itr << endl;

    itr = ret.second;
    cout << "Upper Bound: " << *itr << endl;

    // Print Set Values
    // for each works with all containers supporting begin() & end()
    // Note: elem is not an iterator but the constituent element itself
    for (auto elem: myset)
    {
        cout << elem << endl;
    }

    return 0;
}

