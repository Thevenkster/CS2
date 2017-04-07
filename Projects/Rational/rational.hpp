// Karthik Venkat <kv39@zips.uakron.edu>
//
// Rational.hpp: Definition of Rational class and its interace.

#ifndef RATIONAL_HPP
#define RATIONAL_HPP
#include "test.hpp"
#include <cstdlib>
#include <iosfwd>
#include <iostream>
#include <cctype> //required for isspace
// Mathematical helper functions.
//
// NOTE: These are defined in rational.cpp.
int gcd(int, int);
int lcm(int, int);
// Represents a rational number. The rational numbers are the set of
// numbers that can be represented as the quotient of two integers.
struct Rational
{
	//Function to simplify and Normalize the rational number
	void Normalize();

	private:
	int n, d; //Numerator and denominator
	public:
 	Rational ()//Default constructor
	: n(0), d(1)
	{ }
	
 	Rational (int x)//Constructor with numerator parameter
	: n(x), d(1)
	{ }

	 //Constructor with numerator & denominator parameter
 	Rational (int p, int q)
	: n(p), d(q)
	{
		assert(d != 0); //Asserts that denominator cannot be equal to 0.
 		Normalize();	//Normalizes the values to lowest form
	}

	int num() const //Returns numerator value
	{
		return n;
	}
	int den() const //Returns denominator value
 	{
	 return d;
 	}
};
// TODO: Implement support for
// 1. Comparing two rational numbers for equality:
// For equals operaton
bool operator == (Rational, Rational);
bool operator == (int, Rational);
bool operator == (Rational, int);
// For not equal operator
bool operator != (Rational, Rational);
bool operator != (int, Rational);
bool operator != (Rational, int);
// For less than
bool operator < (Rational, Rational);
bool operator < (int, Rational);
bool operator < (Rational, int);
//For greater than
bool operator > (Rational, Rational);
bool operator > (int, Rational);
bool operator > (Rational, int);
//For less than or equal to
bool operator <= (Rational, Rational);
bool operator <= (int, Rational);
bool operator <= (Rational, int);
//For greater than or equal to
bool operator >= (Rational, Rational);
bool operator >= (int, Rational);
bool operator >= (Rational, int);
//For addition
Rational operator + (Rational, Rational);
Rational operator + (int, Rational);
Rational operator + (Rational, int);
//For subtraction
Rational operator - (Rational, Rational);
Rational operator - (int, Rational);
Rational operator - (Rational, int);
//For Multiplication
Rational operator * (Rational, Rational);
Rational operator * (int, Rational);
Rational operator * (Rational, int);
// For division
Rational operator / (Rational, Rational);
Rational operator / (int, Rational);
Rational operator / (Rational, int);
// These are provided for you.
// NOTE: They are defined in rational.cpp.
std::ostream& operator << (std::ostream&, Rational);
std::istream& operator >> (std::istream&, Rational&);
#endif
