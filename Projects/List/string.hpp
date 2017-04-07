// Karthik Venkat <kv39@zips.uakron.edu>
//
// string.hpp: Definition of the string class and its interace.

#ifndef STRING_HPP
#define STRING_HPP

#include "test.hpp"

#include <cstring>
#include <iosfwd>


struct String
{
  private:
  std::size_t len;
  char *str;

  public:

  static constexpr std::size_t npos = -1;
  String(); //Default constructor
  String(const char* s) ; //Constructor for string with value
  String(const String &s); //copy constructor
  String(char const *c, std::size_t); //Constructor for bounded strings
  String(std::nullptr_t)
  {
    assert(0);
  }///When nullptr is passed to the string
  //String(String &&s); //Move constructor

  ~String(); //Destructor

  char *data() const //Return the string contents
  {
    return str;
  }

  std::size_t size() const //Return length of the string
  {
    return len;
  }

  bool empty() const //Check for empty string
  {
    return (len == 0);
  }

  std::size_t find(int ch) const; //For find operation

  String substr(std::size_t, std::size_t) const; //To find substring in string

  char &operator [] (std::size_t a) //For character subscript access
  {
    assert (a < len && a >= 0);
    return str[a];
  }

  char operator [] (std::size_t a) const //For character subscript access
  {
    assert (a < len && a >= 0);
    return str[a];
  }

  /*String &operator = (String &&s) //Move assignment operator
  {
    if (this != &s)
    {
      delete []str;
      len = s.len;
      std::move(s.str);
      s.len = 0;
      s.str = nullptr;
    }
    return *this;
  }*/

  String &operator = (String const &s) //Assignment operator
  {
      if(this!= &s)
      {
        delete []str;
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
      }
      return *this;
  }

  String &operator += (String const &s) //Copy assign operator
  {
    char *p = new char [(len + s.len) +1];
    strcpy (p, str);
    strcpy (p + len, s.str);
    std::swap(str, p);
    len = len + s.len;
    delete [] p;
    return *this;
  }

};

//Overload for concatenation
String operator + (const String &s1, const String &s2);

//Overloads for equality and inequality
bool operator == (const String& s1, const String& s2);
bool operator == (const String s1, char const *c);
bool operator == (char const *c, const String s2);
bool operator != (const String s1, const String s2);
bool operator != (const String s1, char const *c);
bool operator != (char const *c, const String s2);
//Overloads for greater than, less than and/or equal to operators
bool operator <= (const String s1, const String s2);
bool operator <= (const String s1, char const *c);
bool operator <= (char const *c, const String s2);
bool operator >= (const String s1, const String s2);
bool operator >= (const String s1, char const *c);
bool operator >= (char const *c, const String s2);
bool operator < (const String s1, const String s2);
bool operator < (const String s1, char const *c);
bool operator < (char const *c, const String s2);
bool operator > (const String s1, const String s2);
bool operator > (const String s1, char const *c);
bool operator > (char const *c, const String s2);

// Output stream overload
std::ostream &operator << (std::ostream &os, String const &str);

#endif
