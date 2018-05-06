// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::list Utilities

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

#define PRINT print(mylist);

void print (list <int> mylist)
{
    for (auto elem: mylist)
        cout << elem << endl;
    cout << "====" << endl;
}


int main()
{
    // Create a List
    list <int> mylist;
    list <int>::iterator itr;

    // Add element at the end
    mylist.push_back(100);

    // Find Match with Key=100
    itr = std::find(mylist.begin(),
                    mylist.end(),
                    100);

    if (itr != mylist.end())
        cout << "Match Found: 100" << endl;

    mylist.push_back (200);

    // Delete element with Key=200
    mylist.remove (200);

    // Find Number of List Entries
    cout << "Size = " << mylist.size() << endl;

    mylist.push_back (200);
    mylist.push_back (300);
    mylist.push_back (400);

    // Print List Values
    // for each works with all containers supporting begin() & end()
    // Note: elem is not an iterator but the constituent element itself
    for (auto elem: mylist)
    {
        cout << elem << endl;
    }
    cout << "====" << endl;

    // Remove Last Element
    mylist.pop_back();

    PRINT

    // Remove Front Element
    mylist.pop_front();

    PRINT

    // Add Front Element
    mylist.push_front(500);

    PRINT

    // Sort the List
    mylist.sort();

    PRINT

    // Reverse the List
    mylist.reverse();

    PRINT


    return 0;
}
