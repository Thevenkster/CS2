// $Karthik Venkat <$kv39@zips.uakron.edu>

#include "string_vector.hpp"

//default constructor
String_vector::String_vector()
  :base(), last(), limit()
{}

//Constructor with initializer list
String_vector::String_vector(std::initializer_list<String> list)
  :base(), last(), limit()
{
  reserve(list.size());
  for (String const& s : list)
    push_back(s);
}

//Copy constructor
String_vector::String_vector(String_vector const& v)
  :base(allocate<String>(v.size())),
  last(uninitialized_copy(v.base, v.limit, base)),
  limit(base + v.size())
{}

//Destructor
String_vector::~String_vector()
{
  initialized_destroy(base, last);
  deallocate(base);
}

//Checks if string is empty
bool String_vector::empty() const
{
  if (base == last) return true;
  return false;
}

//Returns last-base for the vector
std::size_t String_vector::size() const
{
  return last - base;
}

//Returns limit-base for the vector
std::size_t String_vector::capacity() const
{
   return limit-base;
}

//Reserves uninitialized memory for a vector
void String_vector::reserve(std::size_t n)
{
  if(n > capacity())
  {
    if(!base)
    {
      base = allocate<String>(n);
      last = base;
      limit = base + n;
    }
    else
    {
      //allocate new memory of size n
      String *p = allocate<String>(n); //new base
      String *q = p; //new last
      limit = p + n; //new limit
      String *i = uninitialized_copy(base, last, q);
      destroy(i);
      deallocate(base);
      base = p; //update base
      last = q; //update last
    }
  }
}

//resize the vector to a size greater than or less than current size
void String_vector::resize(size_t n)
{
  if(n > size()) while(size()!=n) push_back(String("")); //append "" to vector
    while(size()!=n) pop_back(); //pop out from back until new size is reached
  }

//Function to add to vector
void String_vector::push_back(String const& s)
{
  if(!base)
    reserve(20);
  else if(limit == last)
    reserve( 2 * capacity());
  construct(last++, s); //inplace construction
}

//Function to remove from vector
void String_vector::pop_back()
{
  assert(!empty());
  destroy(--last);
}

void String_vector::clear()
{
  initialized_destroy(base, last);
  last = base;
}

//Overload for assignment operator
String_vector& String_vector::operator = (String_vector const& s)
{
  if(this != &s) //Skips this bit if assigned to itself
  {
    clear(); //Clear out the contents
    deallocate(base);
    base = allocate<String>(s.size()); //allocate memory of size of the object
    last = uninitialized_move(s.begin(), s.limit, begin());
    limit = base + s.size();
  }
  return *this;
}

//Equality overload
bool operator == (String_vector const& a, String_vector const& b)
{
   if (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()))
    return true;
  return false;
 }

//Inequality overload
bool operator != (String_vector const &a, String_vector const &b)
{
  return !(a == b);
}

//Overload for less than
bool operator < (String_vector const &a, String_vector const &b)
{
  return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

//Overload for greater than
bool operator > (String_vector const &a, String_vector const &b)
{
   return !std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
 }

 //Overload for less than or equal to
bool operator <= (String_vector const &a, String_vector const &b)
{
   if (a == b || std::lexicographical_compare(a.begin(), a.end(),
  b.begin(), b.end())) //Split for neatness
    return true;
   return false;
}

//Overload for greater than or equal to
bool operator >= (String_vector const &a, String_vector const &b)
{
  if (a == b || !std::lexicographical_compare(a.begin(), a.end(),
  b.begin(), b.end())) //Split for neatness
    return true;
  return false;
}
