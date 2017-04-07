// (c) 2016 Andrew Sutton
// Student: Karthik Venkat E-mail: kv39@zips.uakron.edu
// All rights reserved

#include <iostream>
#include <vector>


int main()
{
 	// Print the numbers in v in reverse order.
 	std::vector<int> v { 1, 2, 3, 4, 5 };
	 for (std::size_t i = v.size(); i > 0u; --i) //Changed >= to > as
							 //size_t can never be < 0
	 std::cout << v[i-1] << '\n'; //Modified to point to the correct
					//In array
	return 0;
}
