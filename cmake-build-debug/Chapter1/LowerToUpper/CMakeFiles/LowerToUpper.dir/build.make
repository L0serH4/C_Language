# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "D:\Productivity\Clion\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Productivity\Clion\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\University\C_Language\code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\University\C_Language\code\cmake-build-debug

# Include any dependencies generated for this target.
include Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/depend.make

# Include the progress variables for this target.
include Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/flags.make

Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/flags.make
Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/includes_C.rsp
Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj: ../Chapter1/LowerToUpper/LowerToUpper.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LowerToUpper.dir\LowerToUpper.c.obj   -c D:\University\C_Language\code\Chapter1\LowerToUpper\LowerToUpper.c

Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LowerToUpper.dir/LowerToUpper.c.i"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\University\C_Language\code\Chapter1\LowerToUpper\LowerToUpper.c > CMakeFiles\LowerToUpper.dir\LowerToUpper.c.i

Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LowerToUpper.dir/LowerToUpper.c.s"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\University\C_Language\code\Chapter1\LowerToUpper\LowerToUpper.c -o CMakeFiles\LowerToUpper.dir\LowerToUpper.c.s

# Object files for target LowerToUpper
LowerToUpper_OBJECTS = \
"CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj"

# External object files for target LowerToUpper
LowerToUpper_EXTERNAL_OBJECTS =

Chapter1/LowerToUpper/LowerToUpper.exe: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/LowerToUpper.c.obj
Chapter1/LowerToUpper/LowerToUpper.exe: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/build.make
Chapter1/LowerToUpper/LowerToUpper.exe: Public/libpublic_lib.a
Chapter1/LowerToUpper/LowerToUpper.exe: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/linklibs.rsp
Chapter1/LowerToUpper/LowerToUpper.exe: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/objects1.rsp
Chapter1/LowerToUpper/LowerToUpper.exe: Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LowerToUpper.exe"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LowerToUpper.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/build: Chapter1/LowerToUpper/LowerToUpper.exe

.PHONY : Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/build

Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/clean:
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper && $(CMAKE_COMMAND) -P CMakeFiles\LowerToUpper.dir\cmake_clean.cmake
.PHONY : Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/clean

Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\University\C_Language\code D:\University\C_Language\code\Chapter1\LowerToUpper D:\University\C_Language\code\cmake-build-debug D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper D:\University\C_Language\code\cmake-build-debug\Chapter1\LowerToUpper\CMakeFiles\LowerToUpper.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter1/LowerToUpper/CMakeFiles/LowerToUpper.dir/depend
