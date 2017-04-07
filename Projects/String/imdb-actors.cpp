// Karthik Venkat <kv39@zips.uakron.edu>
//
// string.hpp: Definition of the string class and its interace.

#include "string.hpp"

#include <iostream>
#include <string>


// Just reuse an existing implementation of getline.
std::istream& my_getline(std::istream& is, String& str)
{
  std::string buf;
  std::istream& ret = std::getline(is, buf);
  str = buf.c_str();
  return ret;
}


int main()
{
  String line;
  while (my_getline(std::cin, line)) {
    if (line.empty())
      continue;
    if (line[0] == '\t')
      continue;
    std::size_t x = line.find('\t');
    std::cout << line.substr(0, x) << '\n';
  }
}
