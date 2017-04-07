// Karthik Venkat <kv39@zips.uakron.edu>
// main.cpp: rational number test suite

#include "string.hpp"
#include "test.hpp"

#include <string>

#include <iostream>


// Encapsulate all of the Rational tests.
struct Test_string
{
  void default_ctor()
  {
    // Check the default contructor.
    String s;
    check_true(s.empty());
  }

  void string_ctor()
  {
    char const* str = "hello";
    String s = str;
    check_true(s.data() != str);
    check_true(strcmp(s.data(), str) == 0);
  }

  void copy_ctor()
  {
    String s1 = "hello";
    String s2 = s1;
    check_true(strcmp(s1.data(), s2.data()) == 0);
  }

  void copy_assign()
  {
    String s1 = "hello";
    String s2;
    s2 = s1;
    check_true(strcmp(s1.data(), s2.data()) == 0);
  }

  void string_assign()
  {
    String s;
    s = "hello";
    check_true(!strcmp(s.data(), "hello"));
  }

  void self_assign()
  {
    String s1 = "hello";
    s1 = s1;
  }

  void empty()
  {
    String const s1;
    check_true(s1.empty());
    String const s2 = "";
    check_true(s2.empty());
  }

  void access()
  {
    String s1 = "hello";
    s1[0] = 'a';
    check_true(s1[0] == 'a');

    String const s2 = "test";
    check_true(s2[0] == 't');

    check_assertion(s1[-1]);
    check_assertion(s2[-1]);
  }

  void find()
  {
    String const s1 = "abcdef";
    check_true(s1.find('c') == 2);
    check_true(s1.find('z') == s1.npos);
  }

  void substr()
  {
    String const s1 = "abcdef";
    String s2 = s1.substr(0, 3);
    String s3 = s1.substr(3, 3);
    check_true (s2 == "abc");
    check_true (s3 == "def");
  }

  void equality()
  {
    String const s1 = "hello";
    String const s2 = "goodbye";
    check_true(s1 == s1);
    check_true(s1 != s2);
  }

  void ordering()
  {
    String s1 = "abc";
    String s2 = "def";
    check_true(s1 < s2);
    check_true(s2 > s1);
    check_true(s1 <= s1);
    check_true(s1 >= s1);
  }

  void concatenation()
  {
    String s1 = "abc";
    String s2 = "def";
    String s3 = s1 + s2;
    String s4 = "abcdef";
    check_true(s3 == s4);
  }

  void self_concatenation()
  {
    String s1 = "abc";
    s1 += s1;
    String s2 = "abcabc";
    check_true(s1 == s2);
  }

  // The test runner for this test class.
  void run()
  {
    default_ctor();
    string_ctor();
    copy_assign();
    string_assign();
    self_assign();
    empty();
    access();
    find();
    substr();
    equality();
    ordering();
    concatenation();
    self_concatenation();
  }
};


int
main()
{
  Test_string test;
  test.run();
  return uacs::exit_code();
}
