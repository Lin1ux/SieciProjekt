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
CMAKE_SOURCE_DIR = "/home/liniux/Pulpit/Sieci projekt/SieciProjekt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build"

# Include any dependencies generated for this target.
include CMakeFiles/Gra.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Gra.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Gra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gra.dir/flags.make

CMakeFiles/Gra.dir/src/game.cpp.o: CMakeFiles/Gra.dir/flags.make
CMakeFiles/Gra.dir/src/game.cpp.o: /home/liniux/Pulpit/Sieci\ projekt/SieciProjekt/src/game.cpp
CMakeFiles/Gra.dir/src/game.cpp.o: CMakeFiles/Gra.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gra.dir/src/game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gra.dir/src/game.cpp.o -MF CMakeFiles/Gra.dir/src/game.cpp.o.d -o CMakeFiles/Gra.dir/src/game.cpp.o -c "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/game.cpp"

CMakeFiles/Gra.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gra.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/game.cpp" > CMakeFiles/Gra.dir/src/game.cpp.i

CMakeFiles/Gra.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gra.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/game.cpp" -o CMakeFiles/Gra.dir/src/game.cpp.s

CMakeFiles/Gra.dir/src/main.cpp.o: CMakeFiles/Gra.dir/flags.make
CMakeFiles/Gra.dir/src/main.cpp.o: /home/liniux/Pulpit/Sieci\ projekt/SieciProjekt/src/main.cpp
CMakeFiles/Gra.dir/src/main.cpp.o: CMakeFiles/Gra.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Gra.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gra.dir/src/main.cpp.o -MF CMakeFiles/Gra.dir/src/main.cpp.o.d -o CMakeFiles/Gra.dir/src/main.cpp.o -c "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/main.cpp"

CMakeFiles/Gra.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gra.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/main.cpp" > CMakeFiles/Gra.dir/src/main.cpp.i

CMakeFiles/Gra.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gra.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/main.cpp" -o CMakeFiles/Gra.dir/src/main.cpp.s

CMakeFiles/Gra.dir/src/window.cpp.o: CMakeFiles/Gra.dir/flags.make
CMakeFiles/Gra.dir/src/window.cpp.o: /home/liniux/Pulpit/Sieci\ projekt/SieciProjekt/src/window.cpp
CMakeFiles/Gra.dir/src/window.cpp.o: CMakeFiles/Gra.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Gra.dir/src/window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gra.dir/src/window.cpp.o -MF CMakeFiles/Gra.dir/src/window.cpp.o.d -o CMakeFiles/Gra.dir/src/window.cpp.o -c "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/window.cpp"

CMakeFiles/Gra.dir/src/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gra.dir/src/window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/window.cpp" > CMakeFiles/Gra.dir/src/window.cpp.i

CMakeFiles/Gra.dir/src/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gra.dir/src/window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/src/window.cpp" -o CMakeFiles/Gra.dir/src/window.cpp.s

# Object files for target Gra
Gra_OBJECTS = \
"CMakeFiles/Gra.dir/src/game.cpp.o" \
"CMakeFiles/Gra.dir/src/main.cpp.o" \
"CMakeFiles/Gra.dir/src/window.cpp.o"

# External object files for target Gra
Gra_EXTERNAL_OBJECTS =

Gra: CMakeFiles/Gra.dir/src/game.cpp.o
Gra: CMakeFiles/Gra.dir/src/main.cpp.o
Gra: CMakeFiles/Gra.dir/src/window.cpp.o
Gra: CMakeFiles/Gra.dir/build.make
Gra: /usr/lib64/libsfml-graphics.so.2.5.1
Gra: /usr/lib64/libsfml-network.so.2.5.1
Gra: /usr/lib64/libsfml-window.so.2.5.1
Gra: /usr/lib64/libsfml-system.so.2.5.1
Gra: CMakeFiles/Gra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Gra"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Gra.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gra.dir/build: Gra
.PHONY : CMakeFiles/Gra.dir/build

CMakeFiles/Gra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Gra.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Gra.dir/clean

CMakeFiles/Gra.dir/depend:
	cd "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/liniux/Pulpit/Sieci projekt/SieciProjekt" "/home/liniux/Pulpit/Sieci projekt/SieciProjekt" "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build" "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build" "/home/liniux/Pulpit/Sieci projekt/SieciProjekt/build/CMakeFiles/Gra.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Gra.dir/depend
