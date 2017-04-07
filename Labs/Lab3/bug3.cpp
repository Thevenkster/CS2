// Copyright (c) 2016 Andrew Sutton
// Student: Karthik Venkat E-mail: kv39@zips.uakron.edu
// All rights reserved

#include <iostream>

// Read a number from the input stream.
int get_number(std::istream &is)
{
  int result;
  is >> result;
  return result; //Return result as value of function
}


int main()
{
  // Read a sequence of numbers and print the total.
  int tot = 0; //Initialize tot to 0.
  while (true) 
  {
    int n = get_number(std::cin);
    if (!std::cin) 
      break;
    tot += n;
  }
  std::cout << "total: " << tot << '\n';
 // std::cout << "total: " << tot << '\n';
}
//} -> remove redundant brace