// Author: Sandeep Singh
// Date: April 29, 2018
// Basic std::map Utilities
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Create a Map with: key = string & value = int
    map <string,int> mymap;
    map <string,int>::iterator itr;

    // Insert the pair with key="String1" & value = 100
    // Return Value: pair <map_iterator, bool>
    auto retVal = mymap.insert ( make_pair("String1", 100));
    if (retVal.second)
        cout << "INSERT OK" << endl;

    itr=retVal.first;
    cout << "Key: "   << itr->first  << endl;
    cout << "Value: " << itr->second << endl;
    cout << "Value: " << mymap["String1"] << endl;

    // Count elements with a specific key
    if (mymap.count("String1") > 0)
        cout << "Match Found: String1" << endl;

    // Updates value for Key="String2"
    mymap["String2"] = 200;

    // Find Match with Key="String2"
    itr = mymap.find("String2");
    if (itr != mymap.end())
        cout << "Match Found: String2" << endl;

    // Delete element with Key="String2"
    mymap.erase ("String2");

    // Find Number of Map Entries
    cout << "Size = " << mymap.size() << endl;

    mymap["String2"] = 200;
    mymap["String3"] = 300;
    mymap["String4"] = 400;

    // Lower Bound: >=
    itr = mymap.lower_bound("String3");
    cout << "Lower Bound: " << itr->first << ":" << itr->second << endl;

    // Upper Bound: >
    itr = mymap.upper_bound("String3");
    cout << "Upper Bound: " << itr->first << ":" << itr->second << endl;

    // Equal Range: [Lower Bound, Upper Bound]
    std::pair <map <string,int>::iterator,          // Upper Bound Iterator
               map <string,int>::iterator> ret;     // Lower Bound Iterator
    ret = mymap.equal_range("String3");

    itr = ret.first;
    cout << "Lower Bound: " << itr->first << ":" << itr->second << endl;

    itr = ret.second;
    cout << "Upper Bound: " << itr->first << ":" << itr->second << endl;

    // Print Map Values
    // for each works with all containers supporting begin() & end()
    // Each Map Element is a pair<key, value>
    // Note: elem is not an iterator but the constituent element (pair) itself
    for (auto elem: mymap)
    {
        cout << elem.first << ":" << elem.second << endl;
    }

    return 0;
}
