// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::stack Utilities

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    // Create a Stack
    stack <int> mystack;

    if (mystack.empty())
        cout << "Empty Stack" << endl;

    // Add element at the top
    mystack.push(100);

    mystack.push (200);

    // Access Top Element without Deleting
    mystack.top() += 1;
    cout << mystack.top() << endl;

    // Find Number of Vector Entries
    cout << "Size = " << mystack.size() << endl;

    mystack.push (300);
    mystack.push (400);

    // Remove Last Element
    mystack.pop();
    cout << mystack.top() << endl;

    return 0;
}
