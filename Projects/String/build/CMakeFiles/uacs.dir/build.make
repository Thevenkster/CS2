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
CMAKE_SOURCE_DIR = /Users/karthikvenkat/kv39/Projects/String

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/karthikvenkat/kv39/Projects/String/build

# Include any dependencies generated for this target.
include CMakeFiles/uacs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uacs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uacs.dir/flags.make

CMakeFiles/uacs.dir/test.cpp.o: CMakeFiles/uacs.dir/flags.make
CMakeFiles/uacs.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uacs.dir/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uacs.dir/test.cpp.o -c /Users/karthikvenkat/kv39/Projects/String/test.cpp

CMakeFiles/uacs.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uacs.dir/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/Projects/String/test.cpp > CMakeFiles/uacs.dir/test.cpp.i

CMakeFiles/uacs.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uacs.dir/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/Projects/String/test.cpp -o CMakeFiles/uacs.dir/test.cpp.s

CMakeFiles/uacs.dir/test.cpp.o.requires:

.PHONY : CMakeFiles/uacs.dir/test.cpp.o.requires

CMakeFiles/uacs.dir/test.cpp.o.provides: CMakeFiles/uacs.dir/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/uacs.dir/build.make CMakeFiles/uacs.dir/test.cpp.o.provides.build
.PHONY : CMakeFiles/uacs.dir/test.cpp.o.provides

CMakeFiles/uacs.dir/test.cpp.o.provides.build: CMakeFiles/uacs.dir/test.cpp.o


# Object files for target uacs
uacs_OBJECTS = \
"CMakeFiles/uacs.dir/test.cpp.o"

# External object files for target uacs
uacs_EXTERNAL_OBJECTS =

libuacs.a: CMakeFiles/uacs.dir/test.cpp.o
libuacs.a: CMakeFiles/uacs.dir/build.make
libuacs.a: CMakeFiles/uacs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libuacs.a"
	$(CMAKE_COMMAND) -P CMakeFiles/uacs.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uacs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uacs.dir/build: libuacs.a

.PHONY : CMakeFiles/uacs.dir/build

CMakeFiles/uacs.dir/requires: CMakeFiles/uacs.dir/test.cpp.o.requires

.PHONY : CMakeFiles/uacs.dir/requires

CMakeFiles/uacs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uacs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uacs.dir/clean

CMakeFiles/uacs.dir/depend:
	cd /Users/karthikvenkat/kv39/Projects/String/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/karthikvenkat/kv39/Projects/String /Users/karthikvenkat/kv39/Projects/String /Users/karthikvenkat/kv39/Projects/String/build /Users/karthikvenkat/kv39/Projects/String/build /Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles/uacs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uacs.dir/depend
