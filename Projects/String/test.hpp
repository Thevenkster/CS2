// (c) Andrew Sutton 2016
// All rights reserved
//
// This module defines the utilities used for test suites.

#ifndef UACS_TEST_HPP
#define UACS_TEST_HPP

#include <stdexcept>


// Remove any previous definition of assert.
#ifdef assert
#undef assert
#endif


// The verify macro is intended as an alternative for assert. When
// the assertion fails, this macro causes an exception to be thrown.
// This can be used to observe (i.e., trap) errors in precoditions.
//
// Example:
//
//    try {
//    } catch (std::exception& err) {
//      std::cout << err.what();
//    }
#define assert(e) \
  if (!(e))      \
    uacs::assertion(__FILE__, __LINE__, "assertion failed: '" #e "' evaluated to false");


// The check_true macro is used in test files to guarantee that a
// logical property `e` evaluates to `true`. If it does not, then
// a diagnostic message is printed to the default error file
// (std::cerr, unless otherwise configured).
//
// Example:
//
//    int a = 0, b = 1;
//    check_true(a == b);
//
// Running this program will cause the program to print a diagnostic
// for the given error.
#define check_true(e) \
  if (!(e)) \
    uacs::error(__FILE__, __LINE__, "'" #e "' evaluated to false");


// As above but checks the opposite case.
#define check_false(e) \
  if (e) \
    uacs::error(__FILE__, __LINE__, "'" #e "' evaluated to true");


// The check_equal macro is used in test files to guarantee that one
// object has the same value as another.
//
// Example:
//
//    int a = 0, b = 1;
//    check_equal(a, b);
//
// Running this program will cause the program to print a diagnostic
// for the given error.
#define check_equal(e1, e2) \
  if ((e) != (e2)) \
    uacs::error(__FILE__, __LINE__, "'" #e1 "' and '" #e2, "' are not equal");


// As above, by checks for different values.
#define check_different(e1, e2) \
  if ((e) == (e2)) \
    uacs::error(__FILE__, __LINE__, "'" #e1 "' and '" #e2, "' are equal");


// Check that the given assertion will throw
#define check_assertion(e) \
  do { \
    bool caught_ = false; \
    try { (void)(e); }  \
    catch (uacs::Assertion&) { caught_ = true; } \
    if (!caught_) \
      uacs::error(__FILE__, __LINE__, "'" #e "' did not fail as expected"); \
  } while (false);


// -------------------------------------------------------------------------- //
// Error handling utilities

namespace uacs
{

// Represents a failure due to a logic error.
struct Assertion : std::logic_error
{
  using std::logic_error::logic_error;
};


// Prints an error to standard output.
void error(char const*, int, char const*);

// Throws an assertion, diagnosing the given error.
void assertion(char const*, int, char const*);

// Returns an error code determined by the number of errors actually
// observed. This must be the return value for `main` in test suites.
int exit_code();

} // namespace uacs




#endif
