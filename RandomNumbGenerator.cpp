// Author: Sandeep Singh
// Date: April 29, 2018
// Generates Random Numbers In a Given Range

#include <iostream>
#include <algorithm>

int main()
{
    const int range_min  = 1;
    const int range_max  = 10;

    std::random_device rd;                                        // Obtain a random number from hardware
    std::mt19937 gen(rd());                                       // Seed the generator
    std::uniform_int_distribution<> distr(range_min, range_max);  // Specify your range

    for(int n=0; n<40; ++n)
        std::cout << distr(gen) << ' ';                           // Print the Random No.s in [range_min, range_max]

    return 0;
}
