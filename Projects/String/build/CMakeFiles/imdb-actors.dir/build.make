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
include CMakeFiles/imdb-actors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/imdb-actors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imdb-actors.dir/flags.make

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o: CMakeFiles/imdb-actors.dir/flags.make
CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o: ../imdb-actors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o -c /Users/karthikvenkat/kv39/Projects/String/imdb-actors.cpp

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imdb-actors.dir/imdb-actors.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/karthikvenkat/kv39/Projects/String/imdb-actors.cpp > CMakeFiles/imdb-actors.dir/imdb-actors.cpp.i

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imdb-actors.dir/imdb-actors.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/karthikvenkat/kv39/Projects/String/imdb-actors.cpp -o CMakeFiles/imdb-actors.dir/imdb-actors.cpp.s

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.requires:

.PHONY : CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.requires

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.provides: CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.requires
	$(MAKE) -f CMakeFiles/imdb-actors.dir/build.make CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.provides.build
.PHONY : CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.provides

CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.provides.build: CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o


# Object files for target imdb-actors
imdb__actors_OBJECTS = \
"CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o"

# External object files for target imdb-actors
imdb__actors_EXTERNAL_OBJECTS =

imdb-actors: CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o
imdb-actors: CMakeFiles/imdb-actors.dir/build.make
imdb-actors: libstring.a
imdb-actors: libuacs.a
imdb-actors: CMakeFiles/imdb-actors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imdb-actors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imdb-actors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imdb-actors.dir/build: imdb-actors

.PHONY : CMakeFiles/imdb-actors.dir/build

CMakeFiles/imdb-actors.dir/requires: CMakeFiles/imdb-actors.dir/imdb-actors.cpp.o.requires

.PHONY : CMakeFiles/imdb-actors.dir/requires

CMakeFiles/imdb-actors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imdb-actors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imdb-actors.dir/clean

CMakeFiles/imdb-actors.dir/depend:
	cd /Users/karthikvenkat/kv39/Projects/String/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/karthikvenkat/kv39/Projects/String /Users/karthikvenkat/kv39/Projects/String /Users/karthikvenkat/kv39/Projects/String/build /Users/karthikvenkat/kv39/Projects/String/build /Users/karthikvenkat/kv39/Projects/String/build/CMakeFiles/imdb-actors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imdb-actors.dir/depend

