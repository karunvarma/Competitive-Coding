# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/mohit/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/mohit/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mohit/Competitive-Coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mohit/Competitive-Coding/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CP.dir/flags.make

CMakeFiles/CP.dir/practice.cpp.o: CMakeFiles/CP.dir/flags.make
CMakeFiles/CP.dir/practice.cpp.o: ../practice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohit/Competitive-Coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CP.dir/practice.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CP.dir/practice.cpp.o -c /home/mohit/Competitive-Coding/practice.cpp

CMakeFiles/CP.dir/practice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CP.dir/practice.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohit/Competitive-Coding/practice.cpp > CMakeFiles/CP.dir/practice.cpp.i

CMakeFiles/CP.dir/practice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CP.dir/practice.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohit/Competitive-Coding/practice.cpp -o CMakeFiles/CP.dir/practice.cpp.s

CMakeFiles/CP.dir/practice.cpp.o.requires:

.PHONY : CMakeFiles/CP.dir/practice.cpp.o.requires

CMakeFiles/CP.dir/practice.cpp.o.provides: CMakeFiles/CP.dir/practice.cpp.o.requires
	$(MAKE) -f CMakeFiles/CP.dir/build.make CMakeFiles/CP.dir/practice.cpp.o.provides.build
.PHONY : CMakeFiles/CP.dir/practice.cpp.o.provides

CMakeFiles/CP.dir/practice.cpp.o.provides.build: CMakeFiles/CP.dir/practice.cpp.o


# Object files for target CP
CP_OBJECTS = \
"CMakeFiles/CP.dir/practice.cpp.o"

# External object files for target CP
CP_EXTERNAL_OBJECTS =

CP: CMakeFiles/CP.dir/practice.cpp.o
CP: CMakeFiles/CP.dir/build.make
CP: CMakeFiles/CP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohit/Competitive-Coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CP.dir/build: CP

.PHONY : CMakeFiles/CP.dir/build

CMakeFiles/CP.dir/requires: CMakeFiles/CP.dir/practice.cpp.o.requires

.PHONY : CMakeFiles/CP.dir/requires

CMakeFiles/CP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CP.dir/clean

CMakeFiles/CP.dir/depend:
	cd /home/mohit/Competitive-Coding/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohit/Competitive-Coding /home/mohit/Competitive-Coding /home/mohit/Competitive-Coding/cmake-build-debug /home/mohit/Competitive-Coding/cmake-build-debug /home/mohit/Competitive-Coding/cmake-build-debug/CMakeFiles/CP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CP.dir/depend
