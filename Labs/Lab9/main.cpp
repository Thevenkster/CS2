// Karthik Venkat <kv39@zips.uakron.edu>
// University of Akron

#include <iostream>
#include <string>
#include <stdexcept> // Needed for std exceptions
#include <cstdlib>   // Needed for strtod
#include <cerrno>    // Needed for errno


// TODO: Modify this to throw exceptions.
double read_value()
{

  std::string s;
  std::cin >> s;

  // Convert to double.
  char* p;

  double ret = std::strtod(s.data(), &p);

  // No conversion could be performed.
  if (p == s.data())throw std::runtime_error("No conversion could be preformed");

  // The input value is out of range.
  if (errno == ERANGE) throw std::runtime_error("Input value is out of range");

  return ret;
}


// TODO: Modify this to throw exceptions on invalid arguments.
double divide(double a, double b)
{
  if(b == 0)
  throw std::runtime_error("cannot divide by zero");

  return a / b;
}


int main()
{
  try
  {
  // TODO: Catch exceptions, diagnose errors, and exit gracefully.
    double first = read_value();
    double second = read_value();
    double ret = divide(first, second);
    std::cout << ret << '\n';
  }
  catch(std::runtime_error& err)
  {
    std::cerr<<"error: "<<err.what()<<std::endl;
  }
  catch (...)
  {
    std::cerr<<"unexpected error"<<std::endl;
    throw;
  }
}
