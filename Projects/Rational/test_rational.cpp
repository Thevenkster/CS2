// Karthik Venkat <kv39@zips.uakron.edu>
//
// main.cpp: rational number test suite

#include "rational.hpp"
#include "test.hpp"

#include <iostream>


// Encapsulate all of the Rational tests.
struct Test_rational
{
  void default_ctor()
  {
    // Check the default contructor.
    Rational r;
    check_true(r == Rational(0, 1));
    check_true(r == Rational(0, 2));
  }


  void integer_ctor()
  {
    Rational r(3);
    check_true(r == Rational(3, 1));
  }


  void rational_ctor()
  {
    // This must fail.
    check_assertion(Rational(1, 0));

    // Check that copies work as expectded.
    Rational r(3, 4);
    check_true(r == Rational(3, 4));
  }

  void equality()
  {
    Rational r1(1, 2);
    Rational r2(2, 4);
    Rational r3(1, 4);
    check_true(r1 == r2);
    check_true(r1 != r3);
  }

  void ordering()
  {
    Rational r1(1, 4);
    Rational r2(1, 2);
    check_true(r1 < r2);
    check_true(r2 > r1);
    check_true(r1 <= r1);
    check_true(r1 >= r1);
  }

  void arithmetic()
  {
    Rational r1(1, 2);
    Rational r2(1, 4);
    check_true(r1 + r2 == Rational(3, 4));
    check_true(r1 - r2 == Rational(1, 4));
    check_true(r1 * r2 == Rational(1, 8));
    check_true(r1 / r2 == Rational(2, 1));
  }

  // The test runner for this test class.
  void run()
  {
    default_ctor();
    integer_ctor();
    rational_ctor();
    equality();
    ordering();
    arithmetic();
  }
};


int
main()
{
  Test_rational test;
  test.run();
  return uacs::exit_code();
}
