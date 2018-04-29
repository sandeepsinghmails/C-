// Author: Sandeep Singh
// Date: April 29, 2018
// Basic array Utilities

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myarray [] = {9, 1, 7, 5};

    int length = sizeof(myarray)/sizeof(myarray[0]);

    std::sort(myarray, myarray+length);

    cout << "Sort: " << endl;
    for (auto elem: myarray)
        cout << elem << " ";

    std::sort(myarray, myarray+length, std::greater<int>());

    cout << "Reverse Sort: " << endl;
    for (auto elem: myarray)
        cout << elem << " ";

    return 0;
}
