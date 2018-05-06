// Author: Sandeep Singh
// Date: April 29, 2018
// Convert a std::string to uppercase or lowercase using STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // su is the string which is converted to uppercase
    string str = "Sample String";

    // using transform() function and ::toupper in STL
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    // sl is the string which is converted to lowercase
    string str2 = "Sample String";

    // using transform() function and ::tolower in STL
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << str2 << endl;

    return 0;
