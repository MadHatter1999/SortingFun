# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Antho\OneDrive\Desktop\C++\SortingFun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\SortingFun.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\SortingFun.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SortingFun.dir\flags.make

CMakeFiles\SortingFun.dir\main.cpp.obj: CMakeFiles\SortingFun.dir\flags.make
CMakeFiles\SortingFun.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SortingFun.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SortingFun.dir\main.cpp.obj /FdCMakeFiles\SortingFun.dir\ /FS -c C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\main.cpp
<<

CMakeFiles\SortingFun.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SortingFun.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\SortingFun.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\main.cpp
<<

CMakeFiles\SortingFun.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SortingFun.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SortingFun.dir\main.cpp.s /c C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\main.cpp
<<

# Object files for target SortingFun
SortingFun_OBJECTS = \
"CMakeFiles\SortingFun.dir\main.cpp.obj"

# External object files for target SortingFun
SortingFun_EXTERNAL_OBJECTS =

SortingFun.exe: CMakeFiles\SortingFun.dir\main.cpp.obj
SortingFun.exe: CMakeFiles\SortingFun.dir\build.make
SortingFun.exe: CMakeFiles\SortingFun.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SortingFun.exe"
	"C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\SortingFun.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\SortingFun.dir\objects1.rsp @<<
 /out:SortingFun.exe /implib:SortingFun.lib /pdb:C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug\SortingFun.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\SortingFun.dir\build: SortingFun.exe

.PHONY : CMakeFiles\SortingFun.dir\build

CMakeFiles\SortingFun.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SortingFun.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SortingFun.dir\clean

CMakeFiles\SortingFun.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Antho\OneDrive\Desktop\C++\SortingFun C:\Users\Antho\OneDrive\Desktop\C++\SortingFun C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug C:\Users\Antho\OneDrive\Desktop\C++\SortingFun\cmake-build-debug\CMakeFiles\SortingFun.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\SortingFun.dir\depend

