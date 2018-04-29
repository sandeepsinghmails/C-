// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::forward_list Utilities

#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

#define PRINT print(mylist);

void print (forward_list <int> mylist)
{
    for (auto elem: mylist)
        cout << elem << endl;
    cout << "====" << endl;
}

int main()
{
    // Create a List
    forward_list <int> mylist;
    forward_list <int>::iterator itr;

    // Add element at the front
    mylist.push_front(100);

    // Find Match with Key=100
    itr = std::find(mylist.begin(),
                    mylist.end(),
                    100);

    if (itr != mylist.end())
        cout << "Match Found: 100" << endl;

    mylist.push_front (200);

    // Delete element with Key=200
    mylist.remove (200);

    mylist.push_front (200);
    mylist.push_front (300);
    mylist.push_front (400);

    // Print List Values
    // for each works with all containers supporting begin() & end()
    // Note: elem is not an iterator but the constituent element itself
    for (auto elem: mylist)
    {
        cout << elem << endl;
    }
    cout << "====" << endl;

    // Remove Front Element
    mylist.pop_front();

    PRINT

    // Sort the List
    mylist.sort();

    PRINT

    // Reverse the List
    mylist.reverse();

    PRINT

    return 0;
}
