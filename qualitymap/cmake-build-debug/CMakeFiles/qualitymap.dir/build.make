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
CMAKE_SOURCE_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/qualitymap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qualitymap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qualitymap.dir/flags.make

CMakeFiles/qualitymap.dir/main.cpp.obj: CMakeFiles/qualitymap.dir/flags.make
CMakeFiles/qualitymap.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qualitymap.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\qualitymap.dir\main.cpp.obj -c C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\main.cpp

CMakeFiles/qualitymap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qualitymap.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\main.cpp > CMakeFiles\qualitymap.dir\main.cpp.i

CMakeFiles/qualitymap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qualitymap.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\main.cpp -o CMakeFiles\qualitymap.dir\main.cpp.s

CMakeFiles/qualitymap.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/qualitymap.dir/main.cpp.obj.requires

CMakeFiles/qualitymap.dir/main.cpp.obj.provides: CMakeFiles/qualitymap.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\qualitymap.dir\build.make CMakeFiles/qualitymap.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/qualitymap.dir/main.cpp.obj.provides

CMakeFiles/qualitymap.dir/main.cpp.obj.provides.build: CMakeFiles/qualitymap.dir/main.cpp.obj


# Object files for target qualitymap
qualitymap_OBJECTS = \
"CMakeFiles/qualitymap.dir/main.cpp.obj"

# External object files for target qualitymap
qualitymap_EXTERNAL_OBJECTS =

qualitymap.exe: CMakeFiles/qualitymap.dir/main.cpp.obj
qualitymap.exe: CMakeFiles/qualitymap.dir/build.make
qualitymap.exe: CMakeFiles/qualitymap.dir/linklibs.rsp
qualitymap.exe: CMakeFiles/qualitymap.dir/objects1.rsp
qualitymap.exe: CMakeFiles/qualitymap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable qualitymap.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\qualitymap.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qualitymap.dir/build: qualitymap.exe

.PHONY : CMakeFiles/qualitymap.dir/build

CMakeFiles/qualitymap.dir/requires: CMakeFiles/qualitymap.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/qualitymap.dir/requires

CMakeFiles/qualitymap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qualitymap.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qualitymap.dir/clean

CMakeFiles/qualitymap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\qualitymap\cmake-build-debug\CMakeFiles\qualitymap.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qualitymap.dir/depend
