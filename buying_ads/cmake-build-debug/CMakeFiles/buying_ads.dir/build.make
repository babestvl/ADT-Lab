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
CMAKE_SOURCE_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/buying_ads.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/buying_ads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/buying_ads.dir/flags.make

CMakeFiles/buying_ads.dir/main.cpp.obj: CMakeFiles/buying_ads.dir/flags.make
CMakeFiles/buying_ads.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/buying_ads.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\buying_ads.dir\main.cpp.obj -c C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\main.cpp

CMakeFiles/buying_ads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/buying_ads.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\main.cpp > CMakeFiles\buying_ads.dir\main.cpp.i

CMakeFiles/buying_ads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/buying_ads.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\main.cpp -o CMakeFiles\buying_ads.dir\main.cpp.s

CMakeFiles/buying_ads.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/buying_ads.dir/main.cpp.obj.requires

CMakeFiles/buying_ads.dir/main.cpp.obj.provides: CMakeFiles/buying_ads.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\buying_ads.dir\build.make CMakeFiles/buying_ads.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/buying_ads.dir/main.cpp.obj.provides

CMakeFiles/buying_ads.dir/main.cpp.obj.provides.build: CMakeFiles/buying_ads.dir/main.cpp.obj


# Object files for target buying_ads
buying_ads_OBJECTS = \
"CMakeFiles/buying_ads.dir/main.cpp.obj"

# External object files for target buying_ads
buying_ads_EXTERNAL_OBJECTS =

buying_ads.exe: CMakeFiles/buying_ads.dir/main.cpp.obj
buying_ads.exe: CMakeFiles/buying_ads.dir/build.make
buying_ads.exe: CMakeFiles/buying_ads.dir/linklibs.rsp
buying_ads.exe: CMakeFiles/buying_ads.dir/objects1.rsp
buying_ads.exe: CMakeFiles/buying_ads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable buying_ads.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\buying_ads.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/buying_ads.dir/build: buying_ads.exe

.PHONY : CMakeFiles/buying_ads.dir/build

CMakeFiles/buying_ads.dir/requires: CMakeFiles/buying_ads.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/buying_ads.dir/requires

CMakeFiles/buying_ads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\buying_ads.dir\cmake_clean.cmake
.PHONY : CMakeFiles/buying_ads.dir/clean

CMakeFiles/buying_ads.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug C:\Users\Nutthapol\SKE\ADT-Lab\buying_ads\cmake-build-debug\CMakeFiles\buying_ads.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/buying_ads.dir/depend

