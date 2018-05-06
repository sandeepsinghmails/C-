// Author: Sandeep Singh
// Date: April 29, 2018
// Basic Input/Output Utilities

#include <iostream>
#include <string>

int main ()
{
  std::string str;

  std::cout << "Enter the String: ";
  std::getline (std::cin, str);
  std::cout << str << std::endl;

  return 0;
}
