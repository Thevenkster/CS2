# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/karthikvenkat/kv39/Projects/List

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/karthikvenkat/kv39/Projects/List/build

# Include any dependencies generated for this target.
include CMakeFiles/test_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_string.dir/flags.make

CMakeFiles/test_string.dir/test_string.cpp.o: CMakeFiles/test_string.dir/flags.make
CMakeFiles/test_string.dir/test_string.cpp.o: ../test_string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/Projects/List/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_string.dir/test_string.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_string.dir/test_string.cpp.o -c /Users/karthikvenkat/kv39/Projects/List/test_string.cpp

CMakeFiles/test_string.dir/test_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_string.dir/test_string.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/Projects/List/test_string.cpp > CMakeFiles/test_string.dir/test_string.cpp.i

CMakeFiles/test_string.dir/test_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_string.dir/test_string.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/Projects/List/test_string.cpp -o CMakeFiles/test_string.dir/test_string.cpp.s

CMakeFiles/test_string.dir/test_string.cpp.o.requires:

.PHONY : CMakeFiles/test_string.dir/test_string.cpp.o.requires

CMakeFiles/test_string.dir/test_string.cpp.o.provides: CMakeFiles/test_string.dir/test_string.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_string.dir/build.make CMakeFiles/test_string.dir/test_string.cpp.o.provides.build
.PHONY : CMakeFiles/test_string.dir/test_string.cpp.o.provides

CMakeFiles/test_string.dir/test_string.cpp.o.provides.build: CMakeFiles/test_string.dir/test_string.cpp.o


# Object files for target test_string
test_string_OBJECTS = \
"CMakeFiles/test_string.dir/test_string.cpp.o"

# External object files for target test_string
test_string_EXTERNAL_OBJECTS =

test_string: CMakeFiles/test_string.dir/test_string.cpp.o
test_string: CMakeFiles/test_string.dir/build.make
test_string: libcs2.a
test_string: libuacs.a
test_string: CMakeFiles/test_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/karthikvenkat/kv39/Projects/List/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_string"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_string.dir/build: test_string

.PHONY : CMakeFiles/test_string.dir/build

CMakeFiles/test_string.dir/requires: CMakeFiles/test_string.dir/test_string.cpp.o.requires

.PHONY : CMakeFiles/test_string.dir/requires

CMakeFiles/test_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_string.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_string.dir/clean

CMakeFiles/test_string.dir/depend:
	cd /Users/karthikvenkat/kv39/Projects/List/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/karthikvenkat/kv39/Projects/List /Users/karthikvenkat/kv39/Projects/List /Users/karthikvenkat/kv39/Projects/List/build /Users/karthikvenkat/kv39/Projects/List/build /Users/karthikvenkat/kv39/Projects/List/build/CMakeFiles/test_string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_string.dir/depend

