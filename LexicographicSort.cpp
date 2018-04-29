/* Author: Sandeep Singh
 * Date: April 29, 2018
 * Description:
 * Lexicographically Sorts the Input Strings
 * Sample Input:
 * 3 [No. of Strings]
 * abc
 * bc
 * ab
 * Sample Output:
 * Strings Sorted In Lexicographical order:
 * ab
 * abc
 * bc
 * Lexicographically Concatenated String:
 * ababcbc
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void lexicographical_sort (vector<string>& myvector)
{
    // Selection Sort: Find the Right String for each Position
    for (int i=0; i<myvector.size(); i++)
    {
        for (int j=i+1; j<myvector.size(); j++)
        {
          if(myvector[i] > myvector[j])
          {
            swap(myvector[i],myvector[j]);
          }
        }
    }

    cout << "Strings Sorted In Lexicographical order: " << endl;

    for(auto elem: myvector)
    {
       cout << elem << endl;
    }

    cout << "Lexicographically Concatenated String: " << endl;

    for(auto elem: myvector)
    {
       cout << elem;
    }
}

int main()
{
    vector<string> myvector;

    int count;

    cin >> count;
    cin.ignore();

    string buffer;

    for(int i = 0; i < count; ++i)
    {
      getline(cin, buffer);
      cout << "Buffer: " << buffer << endl;
      myvector.push_back(buffer);
    }

    lexicographical_sort (myvector);

    return 0;
}
