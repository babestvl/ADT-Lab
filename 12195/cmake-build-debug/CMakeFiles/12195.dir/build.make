# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\12195

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/12195.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/12195.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12195.dir/flags.make

CMakeFiles/12195.dir/main.cpp.obj: CMakeFiles/12195.dir/flags.make
CMakeFiles/12195.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/12195.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\12195.dir\main.cpp.obj -c C:\Users\Nutthapol\SKE\ADT-Lab\12195\main.cpp

CMakeFiles/12195.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12195.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nutthapol\SKE\ADT-Lab\12195\main.cpp > CMakeFiles\12195.dir\main.cpp.i

CMakeFiles/12195.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12195.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nutthapol\SKE\ADT-Lab\12195\main.cpp -o CMakeFiles\12195.dir\main.cpp.s

CMakeFiles/12195.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/12195.dir/main.cpp.obj.requires

CMakeFiles/12195.dir/main.cpp.obj.provides: CMakeFiles/12195.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\12195.dir\build.make CMakeFiles/12195.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/12195.dir/main.cpp.obj.provides

CMakeFiles/12195.dir/main.cpp.obj.provides.build: CMakeFiles/12195.dir/main.cpp.obj


# Object files for target 12195
12195_OBJECTS = \
"CMakeFiles/12195.dir/main.cpp.obj"

# External object files for target 12195
12195_EXTERNAL_OBJECTS =

12195.exe: CMakeFiles/12195.dir/main.cpp.obj
12195.exe: CMakeFiles/12195.dir/build.make
12195.exe: CMakeFiles/12195.dir/linklibs.rsp
12195.exe: CMakeFiles/12195.dir/objects1.rsp
12195.exe: CMakeFiles/12195.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 12195.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\12195.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12195.dir/build: 12195.exe

.PHONY : CMakeFiles/12195.dir/build

CMakeFiles/12195.dir/requires: CMakeFiles/12195.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/12195.dir/requires

CMakeFiles/12195.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\12195.dir\cmake_clean.cmake
.PHONY : CMakeFiles/12195.dir/clean

CMakeFiles/12195.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nutthapol\SKE\ADT-Lab\12195 C:\Users\Nutthapol\SKE\ADT-Lab\12195 C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\12195\cmake-build-debug\CMakeFiles\12195.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/12195.dir/depend
