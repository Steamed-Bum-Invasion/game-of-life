# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dhruv/code/my_repos/game_of_life

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dhruv/code/my_repos/game_of_life/build

# Include any dependencies generated for this target.
include lib_files/CMakeFiles/lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib_files/CMakeFiles/lib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib_files/CMakeFiles/lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib_files/CMakeFiles/lib.dir/flags.make

lib_files/CMakeFiles/lib.dir/Simulation.cpp.o: lib_files/CMakeFiles/lib.dir/flags.make
lib_files/CMakeFiles/lib.dir/Simulation.cpp.o: /home/dhruv/code/my_repos/game_of_life/lib_files/Simulation.cpp
lib_files/CMakeFiles/lib.dir/Simulation.cpp.o: lib_files/CMakeFiles/lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dhruv/code/my_repos/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib_files/CMakeFiles/lib.dir/Simulation.cpp.o"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib_files/CMakeFiles/lib.dir/Simulation.cpp.o -MF CMakeFiles/lib.dir/Simulation.cpp.o.d -o CMakeFiles/lib.dir/Simulation.cpp.o -c /home/dhruv/code/my_repos/game_of_life/lib_files/Simulation.cpp

lib_files/CMakeFiles/lib.dir/Simulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lib.dir/Simulation.cpp.i"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dhruv/code/my_repos/game_of_life/lib_files/Simulation.cpp > CMakeFiles/lib.dir/Simulation.cpp.i

lib_files/CMakeFiles/lib.dir/Simulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Simulation.cpp.s"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dhruv/code/my_repos/game_of_life/lib_files/Simulation.cpp -o CMakeFiles/lib.dir/Simulation.cpp.s

lib_files/CMakeFiles/lib.dir/grid.cpp.o: lib_files/CMakeFiles/lib.dir/flags.make
lib_files/CMakeFiles/lib.dir/grid.cpp.o: /home/dhruv/code/my_repos/game_of_life/lib_files/grid.cpp
lib_files/CMakeFiles/lib.dir/grid.cpp.o: lib_files/CMakeFiles/lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dhruv/code/my_repos/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib_files/CMakeFiles/lib.dir/grid.cpp.o"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib_files/CMakeFiles/lib.dir/grid.cpp.o -MF CMakeFiles/lib.dir/grid.cpp.o.d -o CMakeFiles/lib.dir/grid.cpp.o -c /home/dhruv/code/my_repos/game_of_life/lib_files/grid.cpp

lib_files/CMakeFiles/lib.dir/grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lib.dir/grid.cpp.i"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dhruv/code/my_repos/game_of_life/lib_files/grid.cpp > CMakeFiles/lib.dir/grid.cpp.i

lib_files/CMakeFiles/lib.dir/grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lib.dir/grid.cpp.s"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dhruv/code/my_repos/game_of_life/lib_files/grid.cpp -o CMakeFiles/lib.dir/grid.cpp.s

# Object files for target lib
lib_OBJECTS = \
"CMakeFiles/lib.dir/Simulation.cpp.o" \
"CMakeFiles/lib.dir/grid.cpp.o"

# External object files for target lib
lib_EXTERNAL_OBJECTS =

lib_files/liblib.so: lib_files/CMakeFiles/lib.dir/Simulation.cpp.o
lib_files/liblib.so: lib_files/CMakeFiles/lib.dir/grid.cpp.o
lib_files/liblib.so: lib_files/CMakeFiles/lib.dir/build.make
lib_files/liblib.so: lib_files/CMakeFiles/lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dhruv/code/my_repos/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library liblib.so"
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib_files/CMakeFiles/lib.dir/build: lib_files/liblib.so
.PHONY : lib_files/CMakeFiles/lib.dir/build

lib_files/CMakeFiles/lib.dir/clean:
	cd /home/dhruv/code/my_repos/game_of_life/build/lib_files && $(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean.cmake
.PHONY : lib_files/CMakeFiles/lib.dir/clean

lib_files/CMakeFiles/lib.dir/depend:
	cd /home/dhruv/code/my_repos/game_of_life/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dhruv/code/my_repos/game_of_life /home/dhruv/code/my_repos/game_of_life/lib_files /home/dhruv/code/my_repos/game_of_life/build /home/dhruv/code/my_repos/game_of_life/build/lib_files /home/dhruv/code/my_repos/game_of_life/build/lib_files/CMakeFiles/lib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : lib_files/CMakeFiles/lib.dir/depend

