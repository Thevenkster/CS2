// Karthik Venkat <kv39@zips.uakron.edu>
//Stack implementation done with the assistance of Adam J Browne

#ifndef STACK_HPP
#define STACK_HPP

#include "test.hpp"
#include "vector.hpp"

template<typename T> struct Stack
{
  Vector<T> member;
  Stack(); //default constructor
  Stack(Stack<T> const&); //copy constructor
  int top() const;
  int& top();
  bool empty() const;
  std::size_t size() const;
  void push(T const&); //push to top
  void pop(); //pop off top
  Stack<T>& operator=(Stack<T> const&); //copy assign
};

template<typename T> Stack<T>::Stack() //default construction
  :member() {}

template<typename T> Stack<T>::Stack(Stack<T> const& v) //copy construction
  :member(v.member) {}

template<typename T> int Stack<T>::top() const //return top element
{
  return member.back();
}

template<typename T> int& Stack<T>::top() //return top of stack
{
   return member.back();
}

template<typename T> bool Stack<T>::empty() const //check for empty stack
{
  return member.empty();
}

template<typename T> size_t Stack<T>::size() const //Return size of stack
{
  return member.size();
}

template<typename T> void Stack<T>::push(T const& n) //push to top
{
  member.push_back(n);
}

template<typename T> void Stack<T>::pop() //pop off top
{
  member.pop_back();
}

template<typename T> Stack<T>& Stack<T>::operator=(Stack<T> const& v) //assign
{
  member = v.member;
  return *this;
}

#endif
