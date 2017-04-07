// Karthik Venkat <kv39@zips.uakron.edu>

// main.cpp: rational number test suite
#include "rational.hpp"
#include <iostream>
#include <iomanip>
#include <unistd.h>
int main()
{
  // Determine if input is coming from a terminal.
  bool term = isatty(0);
  // This will continue reading until it reaches the end-of-input.
  // If you are using this interactivly, type crtl-d to send the
  // end of input character to the terminal.
  while (std::cin)
  {
    Rational r1;
    Rational r2;
    std::string op;
    if (term)
    std::cout << "> ";
    std::cin >> r1 >> op >> r2;
    if (!std::cin)
    break;

    //Check for operators that may be used
    if (op == "==")
    std::cout << std::boolalpha << (r1 == r2) << '\n';
    else if (op == "!=")
    std::cout << std::boolalpha << (r1 != r2) << '\n';
    else if (op == "<")
    std::cout << std::boolalpha << (r1 < r2) << '\n';
    else if (op == ">")
    std::cout << std::boolalpha << (r1 > r2) << '\n';
    else if (op == "+")
    std::cout << std::boolalpha << (r1 + r2) << '\n';
    else if (op == "-")
    std::cout << std::boolalpha << (r1 - r2) << '\n';
    else if (op == "*")
    std::cout << std::boolalpha << (r1 * r2) << '\n';
    else if (op == "/")
    std::cout << std::boolalpha << (r1 / r2) << '\n';
    else if (op == "<=")
    std::cout << std::boolalpha << (r1 <= r2) << '\n';
    else if (op == ">=")
    std::cout << std::boolalpha << (r1 >= r2) << '\n';
    else
    std::cerr << "invalid operator: " << op << '\n';
  }
  // If we got to the end of the file without fatal errors,
  // return success.
  if (std::cin.eof())
  return 0;
  // Otherwise, diagnose errors in input and exit with an error
  // code.
  if (std::cin.fail())
  {
    std::cerr << "input error\n";
    return 1;
  }
  return 0;
}
