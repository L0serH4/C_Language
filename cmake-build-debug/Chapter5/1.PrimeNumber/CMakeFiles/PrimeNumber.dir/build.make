# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\University\C_Language\code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\University\C_Language\code\cmake-build-debug

# Include any dependencies generated for this target.
include Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/depend.make

# Include the progress variables for this target.
include Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/flags.make

Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/flags.make
Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/includes_C.rsp
Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj: ../Chapter5/1.PrimeNumber/PrimeNumber.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\PrimeNumber.dir\PrimeNumber.c.obj   -c D:\University\C_Language\code\Chapter5\1.PrimeNumber\PrimeNumber.c

Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PrimeNumber.dir/PrimeNumber.c.i"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\University\C_Language\code\Chapter5\1.PrimeNumber\PrimeNumber.c > CMakeFiles\PrimeNumber.dir\PrimeNumber.c.i

Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PrimeNumber.dir/PrimeNumber.c.s"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\University\C_Language\code\Chapter5\1.PrimeNumber\PrimeNumber.c -o CMakeFiles\PrimeNumber.dir\PrimeNumber.c.s

# Object files for target PrimeNumber
PrimeNumber_OBJECTS = \
"CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj"

# External object files for target PrimeNumber
PrimeNumber_EXTERNAL_OBJECTS =

Chapter5/1.PrimeNumber/PrimeNumber.exe: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/PrimeNumber.c.obj
Chapter5/1.PrimeNumber/PrimeNumber.exe: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/build.make
Chapter5/1.PrimeNumber/PrimeNumber.exe: Public/libpublic_lib.a
Chapter5/1.PrimeNumber/PrimeNumber.exe: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/linklibs.rsp
Chapter5/1.PrimeNumber/PrimeNumber.exe: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/objects1.rsp
Chapter5/1.PrimeNumber/PrimeNumber.exe: Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PrimeNumber.exe"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PrimeNumber.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/build: Chapter5/1.PrimeNumber/PrimeNumber.exe

.PHONY : Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/build

Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/clean:
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber && $(CMAKE_COMMAND) -P CMakeFiles\PrimeNumber.dir\cmake_clean.cmake
.PHONY : Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/clean

Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\University\C_Language\code D:\University\C_Language\code\Chapter5\1.PrimeNumber D:\University\C_Language\code\cmake-build-debug D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber D:\University\C_Language\code\cmake-build-debug\Chapter5\1.PrimeNumber\CMakeFiles\PrimeNumber.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter5/1.PrimeNumber/CMakeFiles/PrimeNumber.dir/depend

