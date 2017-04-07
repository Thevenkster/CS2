// $Karthik Venkat <$kv39@zips.uakron.edu>

#ifndef STRING_VECTOR_HPP
#define STRING_VECTOR_HPP

#include "string.hpp"
#include "memory.hpp"
#include "test.hpp"
#include <algorithm>
#include <initializer_list>
using namespace std;

struct String_vector
{
  private:
  String *base; //pointer to starting point of vector
  String *last; //pointer to last object in vector
  String *limit; //pointer to end of vector

  public:
  using iterator = String*;
  using const_iterator = String const*;

  iterator begin()
  {
     return base;
   }
  iterator end()
  {
    return last;
  }
  const_iterator begin() const
  {
    return base;
  }
  const_iterator end() const
  {
    return last;
  }

  //default constructor
  String_vector();
  //initializer_list constructor.
  String_vector(std::initializer_list<String>);
  //Copy constructor
  String_vector(String_vector const&);
  //destructor, release memory.
  ~String_vector();

  //Overloads for subscript operator
  String& operator[](std::size_t n)
  {
    assert(n < size()); return base[n];
  }

  String operator[](std::size_t n) const
  {
    assert(n < size()); return base[n];
  }

  String* data() const
  {
     return base;
  }
  void reserve(std::size_t n);
  bool empty() const; //Checks if vector is empty
  std::size_t size() const; //Returns last-base
  std::size_t capacity() const; //Returns limit-base
  void push_back(String const&);
  void pop_back();
  void resize(size_t n); //Resizes to size n
  void clear(); //Empties vector

  String_vector& operator = (String_vector const&);

};


//Equivalency and relational operators
bool operator == (String_vector const&, String_vector const&);
bool operator != (String_vector const&, String_vector const&);
bool operator < (String_vector const&, String_vector const&);
bool operator > (String_vector const&, String_vector const&);
bool operator <= (String_vector const&, String_vector const&);
bool operator >= (String_vector const&, String_vector const&);

#endif
