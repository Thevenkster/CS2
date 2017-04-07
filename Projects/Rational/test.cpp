// (c) Andrew Sutton 2016
// All rights reserved

#include "test.hpp"

#include <iostream>
#include <sstream>
#include <string>

#include <unistd.h>


namespace uacs
{

static bool init = false;
static bool colors = false;
static int errors = 0;


static void
initialize()
{
  if (!init) {
    // If cerr is linked to a terminal, then assume that colors
    // can be printed.
    //
    // FIXME: It would be better check a list of known terminals
    // and their color support. But that's a bit harder.
    colors = isatty(2);
    init = true;
  }
}


static std::string
shorten_file_name(std::string const& file)
{
  std::size_t n = file.find_last_of('/');
  if (n == file.npos)
    return file;
  else
    return file.substr(n + 1);
}


static std::string
make_fancy_diagnostic(char const* path, int line, char const* expr, char const* msg)
{
  std::stringstream ss;
  std::string file = shorten_file_name(path);
  ss << "\x1b[1;31merror:\x1b[0m"
     << "\x1b[1;37m" << file << ':' << line << ':' << "\x1b[0m"
     << " '" << expr << "' " << msg;
  return ss.str();
}


static std::string
make_plain_diagnostic(char const* path, int line, char const* expr, char const* msg)
{
  std::stringstream ss;
  std::string file = shorten_file_name(path);
  ss << "error:" << file << ':' << line << ':'
     << " '" << expr << "' " << msg;
  return ss.str();
}


static std::string
make_diagnostic(char const* file, int line, char const* expr, char const* msg)
{
  initialize();
  if (colors)
    return make_fancy_diagnostic(file, line, expr, msg);
  else
    return make_plain_diagnostic(file, line, expr, msg);
}


// Emit an error message and increment the error count.
void
error(char const* file, int line, char const* expr, char const* msg)
{
  std::cerr << make_diagnostic(file, line, expr, msg) << '\n';
  ++errors;
}


// Throw an assertion.
void
assertion(char const* file, int line, char const* expr, char const* msg)
{
  throw Assertion(make_diagnostic(file, line, expr, msg));
}


// Just return the number of errors. A return of 0 implies success.
int
exit_code()
{
  return errors;
}


} // namespace uacs
