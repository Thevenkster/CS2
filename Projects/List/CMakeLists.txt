
# Requires the `cmake` command to be at least version 2.8.
cmake_minimum_required(VERSION 2.8)


# Declares the project name and its implementation language. "CXX"
# means "C++".
project(list CXX)


# Determine a usable set of sanitizer flags based on the compiler
# and version. If sanitizers aren't supported, or we don't know if
# they are supported, then set those flags to empty.
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER "5")
    set(SAN_FLAGS "-fsanitize=address -fsanitize=undefined")
    message(STATUS "Enable sanitizers: address, undefined")
  endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER "7")
    set(SAN_FLAGS "-fsanitize=address")
    message(STATUS "Enable sanitizers: address")
  endif()
else()
  set(SAN_FLAGS "")
  message(STATUS "Enable sanitizers: none")
endif()


# Turn on the generation of test suites. When this command is present
# in the CMakeListst.txt file, it will create a `test` target that
# you can run as:
#
#   make test
#
# from within the build directory.
enable_testing()


# Update the C++ compiler flags so that we use C++11, not the older
# version of the language, C++03. GCC-4.9, the default compiler in
# our labs works with this setting. So does the default compiler on
# an up-to-date Mac OS X system.
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall ${SAN_FLAGS}")


# Create a library (a reusable package of classes and functions) that
# will be used by your program and the test suite. This is a static
# library, which means that functions will be copied into the final
# executable rather than resolved dynamically (when you run the program).
#
# Note that the name of the library (on Linux systems) is libcs2.a.
# The ".a" stands for "archive".
add_library(cs2 STATIC string.cpp list.cpp)


# Add a second library for the testing framework. This one is called
# libuacs.a.
add_library(uacs STATIC test.cpp)


# DO NOT REMOVE OR MODIFY THIS MACRO.
macro(add_unit_test target)
  add_executable(${target} ${ARGN})
  target_link_libraries(${target} cs2 uacs)
  add_test(${target} ${target})
endmacro()


# Declare a set of unit tests.
#
#   make test
#
add_unit_test(test_string test_string.cpp)
add_unit_test(test_list   test_list.cpp)


# DO NOT REMOVE OR MODIFY THIS MACRO.
#
# This creates a new target for the make program. After
# including this, you can write:
#
#     make printout
#
# And the build system will assemble a PDF containing the
# formatted text in the files listed above. The PDF will
# be created in the build directory and is named "printout.pdf".
#
# To use this, add the following to this file:
#
#     add_printout(f1.hpp f1.cpp f2.hpp f2.cpp ...)
#
# Where f1 and f2 are the files that you want to include
# in the printout. Note that header files should always
# precede their source files.
macro(add_printout)
  add_custom_target(printout
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND a2ps -Afill -o- ${ARGN} | ps2pdf - ${CMAKE_BINARY_DIR}/printout.pdf)
endmacro()


# Add files to the output.
add_printout(list.hpp list.cpp)
