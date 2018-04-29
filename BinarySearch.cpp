// Author: Sandeep Singh
// Date: April 29, 2018
// Binary Search returning an iterator to matched element (on success)

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int>::iterator myBinarySearch (std::vector<int>::iterator begin,
                                           std::vector<int>::iterator end,
                                           const int& key)
{
    auto itr = std::lower_bound(begin,end,key);

    if (itr!=end && (*itr <= key))
        return itr;                     // Match
    else
        return end;                     // No Match
}

int main()
{
    std::vector<int> myvector = {2,4,5};
    int index = -1;
    int key = 4;

    std::vector<int>::iterator itr;

    itr = myBinarySearch (myvector.begin(), myvector.end(), key);

    if (itr != myvector.end())
    {
        std::cout << "Match Found for: " << *itr << std::endl;

        index = itr - myvector.begin();
        std::cout << "Index: " << index << std::endl;
    }
    else
    {
        std::cout << "No Match" << std::endl;
    }
    return 0;
}
