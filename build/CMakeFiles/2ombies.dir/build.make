# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ben/Desktop/codingProjects/2ombies1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ben/Desktop/codingProjects/2ombies1/build

# Include any dependencies generated for this target.
include CMakeFiles/2ombies.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/2ombies.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/2ombies.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2ombies.dir/flags.make

CMakeFiles/2ombies.dir/main.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/main.cpp.o: ../main.cpp
CMakeFiles/2ombies.dir/main.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2ombies.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/main.cpp.o -MF CMakeFiles/2ombies.dir/main.cpp.o.d -o CMakeFiles/2ombies.dir/main.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/main.cpp

CMakeFiles/2ombies.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/main.cpp > CMakeFiles/2ombies.dir/main.cpp.i

CMakeFiles/2ombies.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/main.cpp -o CMakeFiles/2ombies.dir/main.cpp.s

CMakeFiles/2ombies.dir/src/sprite.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/sprite.cpp.o: ../src/sprite.cpp
CMakeFiles/2ombies.dir/src/sprite.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/2ombies.dir/src/sprite.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/sprite.cpp.o -MF CMakeFiles/2ombies.dir/src/sprite.cpp.o.d -o CMakeFiles/2ombies.dir/src/sprite.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/sprite.cpp

CMakeFiles/2ombies.dir/src/sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/sprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/sprite.cpp > CMakeFiles/2ombies.dir/src/sprite.cpp.i

CMakeFiles/2ombies.dir/src/sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/sprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/sprite.cpp -o CMakeFiles/2ombies.dir/src/sprite.cpp.s

CMakeFiles/2ombies.dir/src/entities/player.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/entities/player.cpp.o: ../src/entities/player.cpp
CMakeFiles/2ombies.dir/src/entities/player.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/2ombies.dir/src/entities/player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/entities/player.cpp.o -MF CMakeFiles/2ombies.dir/src/entities/player.cpp.o.d -o CMakeFiles/2ombies.dir/src/entities/player.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/entities/player.cpp

CMakeFiles/2ombies.dir/src/entities/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/entities/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/entities/player.cpp > CMakeFiles/2ombies.dir/src/entities/player.cpp.i

CMakeFiles/2ombies.dir/src/entities/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/entities/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/entities/player.cpp -o CMakeFiles/2ombies.dir/src/entities/player.cpp.s

CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o: ../src/entities/zombie.cpp
CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o -MF CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o.d -o CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/entities/zombie.cpp

CMakeFiles/2ombies.dir/src/entities/zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/entities/zombie.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/entities/zombie.cpp > CMakeFiles/2ombies.dir/src/entities/zombie.cpp.i

CMakeFiles/2ombies.dir/src/entities/zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/entities/zombie.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/entities/zombie.cpp -o CMakeFiles/2ombies.dir/src/entities/zombie.cpp.s

CMakeFiles/2ombies.dir/src/entities/entity.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/entities/entity.cpp.o: ../src/entities/entity.cpp
CMakeFiles/2ombies.dir/src/entities/entity.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/2ombies.dir/src/entities/entity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/entities/entity.cpp.o -MF CMakeFiles/2ombies.dir/src/entities/entity.cpp.o.d -o CMakeFiles/2ombies.dir/src/entities/entity.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/entities/entity.cpp

CMakeFiles/2ombies.dir/src/entities/entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/entities/entity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/entities/entity.cpp > CMakeFiles/2ombies.dir/src/entities/entity.cpp.i

CMakeFiles/2ombies.dir/src/entities/entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/entities/entity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/entities/entity.cpp -o CMakeFiles/2ombies.dir/src/entities/entity.cpp.s

CMakeFiles/2ombies.dir/src/wall.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/wall.cpp.o: ../src/wall.cpp
CMakeFiles/2ombies.dir/src/wall.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/2ombies.dir/src/wall.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/wall.cpp.o -MF CMakeFiles/2ombies.dir/src/wall.cpp.o.d -o CMakeFiles/2ombies.dir/src/wall.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/wall.cpp

CMakeFiles/2ombies.dir/src/wall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/wall.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/wall.cpp > CMakeFiles/2ombies.dir/src/wall.cpp.i

CMakeFiles/2ombies.dir/src/wall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/wall.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/wall.cpp -o CMakeFiles/2ombies.dir/src/wall.cpp.s

CMakeFiles/2ombies.dir/src/Actions.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/Actions.cpp.o: ../src/Actions.cpp
CMakeFiles/2ombies.dir/src/Actions.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/2ombies.dir/src/Actions.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/Actions.cpp.o -MF CMakeFiles/2ombies.dir/src/Actions.cpp.o.d -o CMakeFiles/2ombies.dir/src/Actions.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/Actions.cpp

CMakeFiles/2ombies.dir/src/Actions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/Actions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/Actions.cpp > CMakeFiles/2ombies.dir/src/Actions.cpp.i

CMakeFiles/2ombies.dir/src/Actions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/Actions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/Actions.cpp -o CMakeFiles/2ombies.dir/src/Actions.cpp.s

CMakeFiles/2ombies.dir/src/World.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/World.cpp.o: ../src/World.cpp
CMakeFiles/2ombies.dir/src/World.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/2ombies.dir/src/World.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/World.cpp.o -MF CMakeFiles/2ombies.dir/src/World.cpp.o.d -o CMakeFiles/2ombies.dir/src/World.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/World.cpp

CMakeFiles/2ombies.dir/src/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/World.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/World.cpp > CMakeFiles/2ombies.dir/src/World.cpp.i

CMakeFiles/2ombies.dir/src/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/World.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/World.cpp -o CMakeFiles/2ombies.dir/src/World.cpp.s

CMakeFiles/2ombies.dir/src/Utils.cpp.o: CMakeFiles/2ombies.dir/flags.make
CMakeFiles/2ombies.dir/src/Utils.cpp.o: ../src/Utils.cpp
CMakeFiles/2ombies.dir/src/Utils.cpp.o: CMakeFiles/2ombies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/2ombies.dir/src/Utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2ombies.dir/src/Utils.cpp.o -MF CMakeFiles/2ombies.dir/src/Utils.cpp.o.d -o CMakeFiles/2ombies.dir/src/Utils.cpp.o -c /home/ben/Desktop/codingProjects/2ombies1/src/Utils.cpp

CMakeFiles/2ombies.dir/src/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2ombies.dir/src/Utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/Desktop/codingProjects/2ombies1/src/Utils.cpp > CMakeFiles/2ombies.dir/src/Utils.cpp.i

CMakeFiles/2ombies.dir/src/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2ombies.dir/src/Utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/Desktop/codingProjects/2ombies1/src/Utils.cpp -o CMakeFiles/2ombies.dir/src/Utils.cpp.s

# Object files for target 2ombies
2ombies_OBJECTS = \
"CMakeFiles/2ombies.dir/main.cpp.o" \
"CMakeFiles/2ombies.dir/src/sprite.cpp.o" \
"CMakeFiles/2ombies.dir/src/entities/player.cpp.o" \
"CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o" \
"CMakeFiles/2ombies.dir/src/entities/entity.cpp.o" \
"CMakeFiles/2ombies.dir/src/wall.cpp.o" \
"CMakeFiles/2ombies.dir/src/Actions.cpp.o" \
"CMakeFiles/2ombies.dir/src/World.cpp.o" \
"CMakeFiles/2ombies.dir/src/Utils.cpp.o"

# External object files for target 2ombies
2ombies_EXTERNAL_OBJECTS =

2ombies: CMakeFiles/2ombies.dir/main.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/sprite.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/entities/player.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/entities/zombie.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/entities/entity.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/wall.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/Actions.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/World.cpp.o
2ombies: CMakeFiles/2ombies.dir/src/Utils.cpp.o
2ombies: CMakeFiles/2ombies.dir/build.make
2ombies: CMakeFiles/2ombies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable 2ombies"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2ombies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2ombies.dir/build: 2ombies
.PHONY : CMakeFiles/2ombies.dir/build

CMakeFiles/2ombies.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2ombies.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2ombies.dir/clean

CMakeFiles/2ombies.dir/depend:
	cd /home/ben/Desktop/codingProjects/2ombies1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ben/Desktop/codingProjects/2ombies1 /home/ben/Desktop/codingProjects/2ombies1 /home/ben/Desktop/codingProjects/2ombies1/build /home/ben/Desktop/codingProjects/2ombies1/build /home/ben/Desktop/codingProjects/2ombies1/build/CMakeFiles/2ombies.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2ombies.dir/depend

