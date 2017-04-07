// Karthik Venkat <kv39@zips.uakron.edu>
//this stack, and those are (c) Andrew Sutton 2016

#ifndef Vector_HPP
#define Vector_HPP

#include "memory.hpp"
#include "test.hpp"
#include <algorithm>
#include <initializer_list>
template <typename T>
struct Vector
{
  T *base, *last, *limit;

  using iterator = T*;
  using const_iterator = T const*;

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
  Vector();
  //initializer_list constructor.
  Vector(std::initializer_list<T>);
  //Copy constructor
  Vector(Vector const&);
  //destructor, release memory.
  ~Vector();

  T& operator[](std::size_t n)
  {
    assert(n < size()); return base[n];
  }

  T operator[](std::size_t n) const
  {
     assert(n < size()); return base[n];
  }

  T* data() const
  {
     return base;
  }

  void reserve(std::size_t n);
  bool empty() const; //empty if last == base
  std::size_t size() const; //size = last-base
  std::size_t capacity() const; //capacity = limit-base
  void push_back(T const&);
  void pop_back();
  void resize(size_t n); //resize the vector to a size of size n.
  void clear(); //makes vector empty but does not release spare capacity.
  T back() const;
  T& back();
  Vector& operator=(Vector const&);
};

template<typename T>
Vector<T>::Vector() //default construction
  :base(), last(), limit()
{ }

//    T s {"a", "b", "c"};
template<typename T>
Vector<T>::Vector(std::initializer_list<T> list)
  :base(), last(), limit()
{
  reserve(list.size());
  for (T const& s : list)
    push_back(s);
}

template<typename T>
Vector<T>::Vector(Vector<T> const& v)
  :base(allocate<T>(v.size())),
  last(uninitialized_copy(v.base, v.limit, base)),
  limit(base + v.size())
{ }

template<typename T>
Vector<T>::~Vector()
{
  //destructor
  initialized_destroy(base, last);
  deallocate(base);
}

template<typename T>
bool Vector<T>::empty() const
{
   if (last == base) return true;
   return false;
 }

template<typename T>
std::size_t Vector<T>::size() const
{
   return last-base;
}
template<typename T>
std::size_t Vector<T>::capacity() const
 {
    return limit-base;
}

template<typename T>
T Vector<T>::back() const
{
   return *(last-1);
}

template<typename T>
T& Vector<T>::back()
{
   return *(last-1);
 }

template<typename T>
void Vector<T>::reserve(std::size_t n)
{
  if(n > capacity())
  {
    if(!base)
     {
      base = allocate<T>(n);
      last = base;
      limit = base + n;
    }
    else
    {
      //allocate new memory of type T for size n
      T *p = allocate<T>(n); //new base
      T *q = p; //new last
      T *i = uninitialized_copy(base, last, q); //copy new storage
      destroy(i);
      deallocate(base);
      limit = p + n; //update
      base = p;
      last = q;
    }
  }
}

template<typename T>
void Vector<T>::resize(size_t n) //resize the vector.
{
  if(n > size())
    while(size()!=n) push_back(T()); //pushback until specified size.
  else
    while(size()!=n) pop_back(); //popback until vector is specified size.
}

template<typename T>
void Vector<T>::push_back(T const& s)
{
  if(!base)
    reserve(8); //not too big, not too small.
  else if(limit==last)
    reserve(2*capacity());
  construct(last++, s); //inplace construction
}

template<typename T>
void Vector<T>::pop_back()
{
  assert(!empty());
  destroy(--last);
}

template<typename T>
void Vector<T>::clear()
{
  initialized_destroy(base, last);
  last = base;
}

template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T> const& s)
{
  if(this == &s) //self-assignment guard.
    return *this;
  clear(); //cleanup
  deallocate(base);
  base = allocate<T>(s.size()); //allocate memory of size of the object
  last = uninitialized_copy(s.begin(), s.limit, begin());
  limit = base + s.size();
  return *this;
}

template<typename T>
bool operator==(Vector<T> const& a, Vector<T> const& b)
{
   return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}
template<typename T>
bool operator!=(Vector<T> const& a, Vector<T> const& b)
{
   return !(a == b);
}
template<typename T>
bool operator<(Vector<T> const& a, Vector<T> const& b)
{
   return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}
template<typename T>
bool operator>(Vector<T> const& a, Vector<T> const& b)
{
   return !(a < b);
}
template<typename T>
bool operator<=(Vector<T> const& a, Vector<T> const& b)
{
  if (a == b || std::lexicographical_compare(a.begin(), a.end(),
 b.begin(), b.end())) //Split for neatness
   return true;
  return false;
 }

template<typename T>
bool operator>=(Vector<T> const& a, Vector<T> const& b)
{
  if (a == b || !std::lexicographical_compare(a.begin(), a.end(),
 b.begin(), b.end())) //Split for neatness
   return true;
 return false;
}

#endif
