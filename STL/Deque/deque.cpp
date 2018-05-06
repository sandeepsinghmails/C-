// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::deque Utilities

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define PRINT print(mydeque);

void print (deque <int> mydeque)
{
    for (auto elem: mydeque)
        cout << elem << endl;
    cout << "====" << endl;
}


int main()
{
    // Create a Deque
    deque <int> mydeque;
    deque <int>::iterator itr;

    // Add element at the end
    mydeque.push_back(100);

    // Find Match with Key=100
    itr = std::find(mydeque.begin(),
                    mydeque.end(),
                    100);

    if (itr != mydeque.end())
        cout << "Match Found: 100" << endl;

    mydeque.push_back (200);

    // Delete element with Key=200
    itr = std::find(mydeque.begin(),
                    mydeque.end(),
                    200);
    if (itr != mydeque.end())
        mydeque.erase (itr);

    // Find Number of Vector Entries
    cout << "Size = " << mydeque.size() << endl;

    mydeque.push_back (200);
    mydeque.push_back (300);
    mydeque.push_front (400);

    // Print Vector Values
    // for each works with all containers supporting begin() & end()
    // Note: elem is not an iterator but the constituent element itself
    for (auto elem: mydeque)
    {
        cout << elem << endl;
    }
    cout << "====" << endl;

    // Remove Front Element
    mydeque.pop_front();

    PRINT

    // Remove Last Element
    mydeque.pop_back();

    PRINT

    // Sort the Deque
    std::sort (mydeque.begin(),mydeque.end());

    PRINT

    // Access Front Element
    mydeque.front() += 1;

    // Access Last Element
    mydeque.back() += 2;

    PRINT

    return 0;
}
