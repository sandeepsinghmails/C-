// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::queue Utilities

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    // Create a Queue
    queue <int> myqueue;

    if (myqueue.empty())
        cout << "Empty Queue" << endl;

    // Add element at the top
    myqueue.push(100);

    myqueue.push (200);

    // Access Top Element without Deleting
    myqueue.front() += 1;
    cout << myqueue.front() << endl;

    // Find Number of Vector Entries
    cout << "Size = " << myqueue.size() << endl;

    myqueue.push (300);
    myqueue.push (400);

    // Remove Front Element
    myqueue.pop();
    cout << myqueue.front() << endl;

    return 0;
}
