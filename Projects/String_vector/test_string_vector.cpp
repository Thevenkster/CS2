// $Karthik Venkat <$kv39@zips.uakron.edu>
//
// main.cpp: rational number test suite

#include "string_vector.hpp"
#include "test.hpp"

#include <string>
#include <algorithm>

#include <iostream>


namespace
{

template<typename I1, typename I2>
inline bool
my_equal(I1 first1, I1 limit1, I2 first2, I2 limit2)
{
  while (first1 != limit1 && first2 != limit2) {
    if (*first1 != *first2)
      return false;
    ++first1;
    ++first2;
  }
  return first1 == limit1 && first2 == limit2;
}

}


// Encapsulate all of the Rational tests.
struct Test_string_vector
{
  void default_ctor()
  {
    String_vector v;
    check_true(v.empty());
  }

  void copy_ctor()
  {
    String_vector v1 {"a", "b", "c"};
    String_vector v2 = v1;
    check_true(v1 == v2);
  }

  void copy_assign()
  {
    String_vector v1 {"a", "b", "c"};
    String_vector v2;
    v2 = v1;
    check_true(v1 == v2);
  }

  void self_assign()
  {
    String_vector v {"a", "b", "c"};
    v = v;
  }

  void empty()
  {
    String_vector const v1;
    String_vector const v2 {"a"};
    check_true(v1.empty());
    check_true(!v2.empty());
  }

  void size()
  {
    String_vector const v1;
    String_vector const v2 {"a"};
    check_true(v1.size() == 0);
    check_true(v2.size() == 1);
  }

  void reserve()
  {
    String_vector v;
    String_vector const& cv = v;
    check_true(cv.capacity() == 0);
    v.reserve(20);
    check_true(cv.capacity() >= 20);
    v.reserve(5);
    check_true(cv.capacity() >= 20);
  }

  void resize()
  {
    String_vector v1 {"", "", ""};
    String_vector v2;

    v2.resize(3);
    check_true(v1.size() == 3);
    check_true(v1 == v2);
  }

  void clear()
  {
    String_vector v {"a", "b", "c"};
    v.clear();
    check_true(v.empty());
    check_true(v.capacity() != 0);
  }

  void push_back()
  {
    String_vector v;
    v.push_back("a");
    check_true(v.size() == 1);
    check_true(v[0] == "a");
  }

  void pop_back()
  {
    String_vector v1 {"a", "b", "c"};
    v1.pop_back();
    check_true(v1.size() == 2);

    String_vector v2;
    check_assertion(v2.pop_back());
  }

  void access()
  {
    String_vector v {"a", "b", "c"};
    String_vector const& cv = v;

    check_true(v[0] == "a");
    check_true(cv[0] == "a");

    v[0] = "q";
    check_true(v[0] == "q");

    check_assertion(v[-1]);
    check_assertion(cv[-1]);
  }

  void iterators()
  {
    String_vector v {"a", "b", "c"};
    String_vector const& cv = v;
    using I = String_vector::iterator;
    using C = String_vector::const_iterator;
    I first1 = v.begin(), limit1 = v.end();
    C first2 = cv.begin(), limit2 = cv.end();
    check_true(my_equal(first1, limit1, first2, limit2));
  }

  void ordering()
  {
    String_vector const v1 {"a", "b", "c"};
    String_vector const v2 {"d", "e", "f"};

    check_true(v1 < v2);
    check_true(v2 > v1);
    check_true(v1 <= v1);
    check_true(v2 >= v1);
  }

  // The test runner for this test class.
  void run()
  {
    default_ctor();
    copy_assign();
    self_assign();
    empty();
    size();
    reserve();
    resize();
    clear();
    push_back();
    pop_back();
    access();
    iterators();
    ordering();
  }
};


int
main()
{
  Test_string_vector test;
  test.run();
  return uacs::exit_code();
}
