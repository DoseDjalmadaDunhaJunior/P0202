# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Volumes/HD_EXTERNO/computador/web/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Volumes/HD_EXTERNO/computador/web/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P0202.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P0202.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P0202.dir/flags.make

CMakeFiles/P0202.dir/main.cpp.o: CMakeFiles/P0202.dir/flags.make
CMakeFiles/P0202.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P0202.dir/main.cpp.o"
	/Volumes/HD_EXTERNO/computador/web/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P0202.dir/main.cpp.o -c "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/main.cpp"

CMakeFiles/P0202.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P0202.dir/main.cpp.i"
	/Volumes/HD_EXTERNO/computador/web/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/main.cpp" > CMakeFiles/P0202.dir/main.cpp.i

CMakeFiles/P0202.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P0202.dir/main.cpp.s"
	/Volumes/HD_EXTERNO/computador/web/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/main.cpp" -o CMakeFiles/P0202.dir/main.cpp.s

# Object files for target P0202
P0202_OBJECTS = \
"CMakeFiles/P0202.dir/main.cpp.o"

# External object files for target P0202
P0202_EXTERNAL_OBJECTS =

P0202: CMakeFiles/P0202.dir/main.cpp.o
P0202: CMakeFiles/P0202.dir/build.make
P0202: CMakeFiles/P0202.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P0202"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P0202.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P0202.dir/build: P0202

.PHONY : CMakeFiles/P0202.dir/build

CMakeFiles/P0202.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P0202.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P0202.dir/clean

CMakeFiles/P0202.dir/depend:
	cd "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202" "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202" "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug" "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug" "/Volumes/HD_EXTERNO/paradas_de_algoritmo/Sexto _semestre/compiladores/P0202/cmake-build-debug/CMakeFiles/P0202.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P0202.dir/depend

