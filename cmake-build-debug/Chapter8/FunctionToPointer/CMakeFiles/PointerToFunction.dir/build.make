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
include Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/depend.make

# Include the progress variables for this target.
include Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/flags.make

Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/flags.make
Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/includes_C.rsp
Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj: ../Chapter8/FunctionToPointer/FunctionToPointer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\PointerToFunction.dir\FunctionToPointer.c.obj   -c D:\University\C_Language\code\Chapter8\FunctionToPointer\FunctionToPointer.c

Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.i"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\University\C_Language\code\Chapter8\FunctionToPointer\FunctionToPointer.c > CMakeFiles\PointerToFunction.dir\FunctionToPointer.c.i

Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.s"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer && D:\Environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\University\C_Language\code\Chapter8\FunctionToPointer\FunctionToPointer.c -o CMakeFiles\PointerToFunction.dir\FunctionToPointer.c.s

# Object files for target PointerToFunction
PointerToFunction_OBJECTS = \
"CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj"

# External object files for target PointerToFunction
PointerToFunction_EXTERNAL_OBJECTS =

Chapter8/FunctionToPointer/PointerToFunction.exe: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/FunctionToPointer.c.obj
Chapter8/FunctionToPointer/PointerToFunction.exe: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/build.make
Chapter8/FunctionToPointer/PointerToFunction.exe: Public/libpublic_lib.a
Chapter8/FunctionToPointer/PointerToFunction.exe: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/linklibs.rsp
Chapter8/FunctionToPointer/PointerToFunction.exe: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/objects1.rsp
Chapter8/FunctionToPointer/PointerToFunction.exe: Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\University\C_Language\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PointerToFunction.exe"
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PointerToFunction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/build: Chapter8/FunctionToPointer/PointerToFunction.exe

.PHONY : Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/build

Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/clean:
	cd /d D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer && $(CMAKE_COMMAND) -P CMakeFiles\PointerToFunction.dir\cmake_clean.cmake
.PHONY : Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/clean

Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\University\C_Language\code D:\University\C_Language\code\Chapter8\FunctionToPointer D:\University\C_Language\code\cmake-build-debug D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer D:\University\C_Language\code\cmake-build-debug\Chapter8\FunctionToPointer\CMakeFiles\PointerToFunction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter8/FunctionToPointer/CMakeFiles/PointerToFunction.dir/depend

