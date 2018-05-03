// Author: Sandeep Singh
// Date: May 3, 2018
// Reference: 
// http://cs-fundamentals.com/tech-interview/c/c-program-to-check-little-and-big-endian-architecture.php

#include <iostream>

using namespace std;

void test_endianness ()
{
    int var = 1;
    char* ch;
    
    ch = (char*)&var;
    
    // Little Endian System will store High Order Byte at Lower Memory Address
    if ( 1 == ( (int)*ch ) )
        cout << "Little Endian" << endl;
    // Big Endian System will store High Order Byte at Higher Memory Address
    else
        cout << "Big Endian" << endl;
    
}

int main()
{
    test_endianness();

    return 0;
}
