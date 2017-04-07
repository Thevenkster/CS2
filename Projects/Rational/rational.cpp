// Karthik Venkat <kv39@zips.uakron.edu>
//
// rational.hpp: Definition of rational class and its interace.
#include "rational.hpp"
#include <iostream>
// -------------------------------------------------------------------------- //
// Helper functions
// Compute the GCD of two integer values using Euclid's algorithm.
int gcd(int a, int b)
{
while (b != 0)
{
  int t = b;
  b = a % b;
  a = t;
}
  return a;
}
// Compute the LCM of two integer values.
int lcm(int a, int b)
{
  return (std::abs(a) / gcd(a, b)) * std::abs(b);
}
//this function allows us to get the sign of the rational.
//int sign(int a) { return a < 0? -1: 1; }
// -------------------------------------------------------------------------- //
void Rational::Normalize()
{
   //Declaring variables
	assert(d != 0); //Asserting that denominator cannot be 0.
  int GCD = gcd(n, d);
  n = n / GCD;
  d = d / GCD;
	if (n == 0) d = 1; //checks if denominator is 1
  if (d < 0) //Normalizes when denominator is negative
  {
    n = n * -1;
    d = d * -1;
  }
}
//Checks for equality
bool operator == (Rational a, Rational b)
{
  return (a.num() * b.den() == a.den() * b.num());
}
bool operator == (int x, Rational r)
{
  return (r == Rational(x));
}
bool operator == (Rational r, int x)
{
  return (Rational(x) == r);
}

//Checks for inequality
bool operator != (Rational a, Rational b)
{
  return !(a.num() == b.num() && a.den() == b.den());
}
bool operator != (int x, Rational r)
{
  return !(r == Rational(x));
}
bool operator != (Rational r, int x)
{
  return !(Rational(x) == r);
}
//Checks for less than
bool operator < (Rational a, Rational b)
{
  return ((a.num() * b.den()) < (a.den() * b.num()));
}
bool operator < (int x, Rational r)
{
  return (r < Rational(x));
}
bool operator<(Rational r, int x)
{
  return (Rational(x) < r);
}
//Checks for less than or equal to
bool operator <= (Rational a, Rational b)
{
  return ((a.num() * b.den()) <= (a.den() * b.num()));
}
bool operator <= (int x, Rational r)
{
  return (r <= Rational(x));
}
bool operator <= (Rational r, int x)
{
   return (Rational(x) <= r);
}
//Chekcs for greater than or equal to
bool operator >= (Rational a, Rational b)
{
  return ((a.num() * b.den()) >= (a.den() * b.num()));
}
bool operator >= (int x, Rational r)
{
 return (r >= Rational(x));
}
bool operator >= (Rational r, int x)
{
  return (Rational(x) >= r);
}
//Checks for greater than
bool operator > (Rational a, Rational b)
{
  return ((a.num() * b.den()) > (a.den() * b.num()));
}
bool operator > (int x, Rational r)
{
  return (r > Rational(x));
}
bool operator > (Rational r, int x)
{
  return (Rational(x) > r);
}
//For the addition operation on rational numbers
Rational operator + (Rational a, Rational b)
{
  return Rational ((a.num() * b.den()) + (b.num() *
                    a.den()), (a.den() * b.den())); //Split line for neatness
}
Rational operator + (int x, Rational r)
{
  return (r + Rational(x));
}
Rational operator + (Rational r, int x)
{
  return (Rational(x) + r);
}
//For subtraction operation on rational numbers
Rational operator - (Rational a, Rational b)
{
  return Rational ((a.num() * b.den()) - (b.num() *
                    a.den()), (a.den() * b.den())); //Split line for neatness
}

Rational operator - (int x, Rational r)
{
  return (r - Rational(x));
}

Rational operator - (Rational r, int x)
{
  return (Rational(x) - r);
}

//for multiplication operations on rational numbers
Rational operator * (Rational a, Rational b)
{
  return Rational((a.num() * b.num()), (a.den() * b.den()));
}

Rational operator * (int x, Rational r)
{
  return (r * Rational(x));
}

Rational operator * (Rational r, int x)
{
  return (Rational(x) * r);
}
//For division operations on rational numbers
Rational operator / (Rational a, Rational b)
{
  return Rational((a.num() * b.den()), (a.den() * b.num()));
}

Rational operator / (int x, Rational r)
{
  return (r / Rational(x));
}

Rational operator / (Rational r, int x)
{
  return (Rational(x) / r);
}

std::ostream& operator << (std::ostream& os, Rational r)
{
  if (r.den() == 1 || r.num() == 0) //prints only relevant value
    return os << r.num();
  else
    return os << r.num() << '/' << r.den();
}

std::istream& operator >> (std::istream& in, Rational& r)
{
  int p, q;
  char c;
  q = 1;
  in >> p;
  if (in) //when input is entered, peek for operator
  {
    if (isspace(in.peek()))
    {
      //checks for white space.
      r = Rational(p, q);
      return in; //set denominator to 1
  }
  in >> c >> q;
  if (c == '/' && in && q != 0)
  {
    r = Rational(p, q);
    return in;
  }
 }
 in.setstate(std::ios::failbit);
 return in;
}
