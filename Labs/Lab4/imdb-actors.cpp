// Karthik Venkat <kv39@zips.uakron.edu>
// University of Akron

#include <iostream>

int main()
{
  std::string s;
  while (std::getline(std::cin, s))
  {
    if (!isspace(s[0]))
    {
      std::size_t n = s[0];
      std::size_t m = s.find('\t');
      std:: string first = s.substr(0, m);
      std::cout << first << std::endl;
    }
  }
  return 0;
}
