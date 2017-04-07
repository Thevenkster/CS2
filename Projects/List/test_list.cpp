// Karthik Venkat <kv39@zips.uakron.edu>
// main.cpp: rational number test suite

#include "list.hpp"
#include "string.hpp"
#include "test.hpp"

#include <iostream>


using String_list = List<String>;


// Encapsulate all of the Rational tests.
struct Test_string_list
{
  void default_ctor()
  {
    String_list v;
    check_true(v.empty());
  }

  void copy_ctor()
  {
    String_list v1 {"a", "b", "c"};
    String_list v2 = v1;
    check_true(v1 == v2);
  }

  void copy_assign()
  {
    String_list v1 {"a", "b", "c"};
    String_list v2;
    v2 = v1;
    check_true(v1 == v2);
  }

  void self_assign()
  {
    String_list v {"a", "b", "c"};
    v = v;
  }

  void empty()
  {
    String_list const v1;
    String_list const v2 {"a"};
    check_true(v1.empty());
    check_true(!v2.empty());
  }

  void size()
  {
    String_list const v1;
    String_list const v2 {"a"};
    check_true(v1.size() == 0);
    check_true(v2.size() == 1);
  }

  void clear()
  {
    String_list v {"a", "b", "c"};
    v.clear();
    check_true(v.empty());
  }

  void push_front()
  {
    String_list v;
    v.push_front("a");
    check_true(v.size() == 1);
    check_true(v.front() == "a");
    v.push_front("b");
    check_true(v.size() == 2);
    check_true(v.front() == "b");
  }

  void pop_front()
  {
    String_list v1 {"a", "b", "c"};
    v1.pop_front();
    check_true(v1.size() == 2);

    String_list v2;
    check_assertion(v2.pop_front());
  }

  void push_back()
  {
    String_list v;
    v.push_back("a");
    check_true(v.size() == 1);
    check_true(v.back() == "a");
    v.push_back("b");
    check_true(v.size() == 2);
    check_true(v.back() == "b");
  }

  void pop_back()
  {
    String_list v1 {"a", "b", "c"};
    v1.pop_back();
    check_true(v1.size() == 2);

    String_list v2;
    check_assertion(v2.pop_back());
  }

  void ordering()
  {
    String_list const v1 {"a", "b", "c"};
    String_list const v2 {"d", "e", "f"};

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
    clear();
    push_front();
    pop_front();
    push_back();
    pop_back();
    ordering();
  }
};


int
main()
{
  Test_string_list test;
  test.run();
  return uacs::exit_code();
}
