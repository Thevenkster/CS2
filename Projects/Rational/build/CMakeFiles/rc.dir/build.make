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
CMAKE_SOURCE_DIR = /Users/karthikvenkat/kv39/projects/Rational

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/karthikvenkat/kv39/projects/Rational/build

# Include any dependencies generated for this target.
include CMakeFiles/rc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rc.dir/flags.make

CMakeFiles/rc.dir/rc.cpp.o: CMakeFiles/rc.dir/flags.make
CMakeFiles/rc.dir/rc.cpp.o: ../rc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/projects/Rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rc.dir/rc.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rc.dir/rc.cpp.o -c /Users/karthikvenkat/kv39/projects/Rational/rc.cpp

CMakeFiles/rc.dir/rc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rc.dir/rc.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/projects/Rational/rc.cpp > CMakeFiles/rc.dir/rc.cpp.i

CMakeFiles/rc.dir/rc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rc.dir/rc.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/projects/Rational/rc.cpp -o CMakeFiles/rc.dir/rc.cpp.s

CMakeFiles/rc.dir/rc.cpp.o.requires:

.PHONY : CMakeFiles/rc.dir/rc.cpp.o.requires

CMakeFiles/rc.dir/rc.cpp.o.provides: CMakeFiles/rc.dir/rc.cpp.o.requires
	$(MAKE) -f CMakeFiles/rc.dir/build.make CMakeFiles/rc.dir/rc.cpp.o.provides.build
.PHONY : CMakeFiles/rc.dir/rc.cpp.o.provides

CMakeFiles/rc.dir/rc.cpp.o.provides.build: CMakeFiles/rc.dir/rc.cpp.o


CMakeFiles/rc.dir/rational.cpp.o: CMakeFiles/rc.dir/flags.make
CMakeFiles/rc.dir/rational.cpp.o: ../rational.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/projects/Rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rc.dir/rational.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rc.dir/rational.cpp.o -c /Users/karthikvenkat/kv39/projects/Rational/rational.cpp

CMakeFiles/rc.dir/rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rc.dir/rational.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/projects/Rational/rational.cpp > CMakeFiles/rc.dir/rational.cpp.i

CMakeFiles/rc.dir/rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rc.dir/rational.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/projects/Rational/rational.cpp -o CMakeFiles/rc.dir/rational.cpp.s

CMakeFiles/rc.dir/rational.cpp.o.requires:

.PHONY : CMakeFiles/rc.dir/rational.cpp.o.requires

CMakeFiles/rc.dir/rational.cpp.o.provides: CMakeFiles/rc.dir/rational.cpp.o.requires
	$(MAKE) -f CMakeFiles/rc.dir/build.make CMakeFiles/rc.dir/rational.cpp.o.provides.build
.PHONY : CMakeFiles/rc.dir/rational.cpp.o.provides

CMakeFiles/rc.dir/rational.cpp.o.provides.build: CMakeFiles/rc.dir/rational.cpp.o


CMakeFiles/rc.dir/test.cpp.o: CMakeFiles/rc.dir/flags.make
CMakeFiles/rc.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/projects/Rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rc.dir/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rc.dir/test.cpp.o -c /Users/karthikvenkat/kv39/projects/Rational/test.cpp

CMakeFiles/rc.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rc.dir/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/projects/Rational/test.cpp > CMakeFiles/rc.dir/test.cpp.i

CMakeFiles/rc.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rc.dir/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/projects/Rational/test.cpp -o CMakeFiles/rc.dir/test.cpp.s

CMakeFiles/rc.dir/test.cpp.o.requires:

.PHONY : CMakeFiles/rc.dir/test.cpp.o.requires

CMakeFiles/rc.dir/test.cpp.o.provides: CMakeFiles/rc.dir/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/rc.dir/build.make CMakeFiles/rc.dir/test.cpp.o.provides.build
.PHONY : CMakeFiles/rc.dir/test.cpp.o.provides

CMakeFiles/rc.dir/test.cpp.o.provides.build: CMakeFiles/rc.dir/test.cpp.o


# Object files for target rc
rc_OBJECTS = \
"CMakeFiles/rc.dir/rc.cpp.o" \
"CMakeFiles/rc.dir/rational.cpp.o" \
"CMakeFiles/rc.dir/test.cpp.o"

# External object files for target rc
rc_EXTERNAL_OBJECTS =

rc: CMakeFiles/rc.dir/rc.cpp.o
rc: CMakeFiles/rc.dir/rational.cpp.o
rc: CMakeFiles/rc.dir/test.cpp.o
rc: CMakeFiles/rc.dir/build.make
rc: CMakeFiles/rc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/karthikvenkat/kv39/projects/Rational/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable rc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rc.dir/build: rc

.PHONY : CMakeFiles/rc.dir/build

CMakeFiles/rc.dir/requires: CMakeFiles/rc.dir/rc.cpp.o.requires
CMakeFiles/rc.dir/requires: CMakeFiles/rc.dir/rational.cpp.o.requires
CMakeFiles/rc.dir/requires: CMakeFiles/rc.dir/test.cpp.o.requires

.PHONY : CMakeFiles/rc.dir/requires

CMakeFiles/rc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rc.dir/clean

CMakeFiles/rc.dir/depend:
	cd /Users/karthikvenkat/kv39/projects/Rational/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/karthikvenkat/kv39/projects/Rational /Users/karthikvenkat/kv39/projects/Rational /Users/karthikvenkat/kv39/projects/Rational/build /Users/karthikvenkat/kv39/projects/Rational/build /Users/karthikvenkat/kv39/projects/Rational/build/CMakeFiles/rc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rc.dir/depend

