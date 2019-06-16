# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/baptistemayaud/Annee2019/Indi/Indi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/baptistemayaud/Annee2019/Indi/Indi

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/baptistemayaud/Annee2019/Indi/Indi/CMakeFiles /home/baptistemayaud/Annee2019/Indi/Indi/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/baptistemayaud/Annee2019/Indi/Indi/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named bomberman

# Build rule for target.
bomberman: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 bomberman
.PHONY : bomberman

# fast build rule for target.
bomberman/fast:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/build
.PHONY : bomberman/fast

src/Clock/clock.o: src/Clock/clock.cpp.o

.PHONY : src/Clock/clock.o

# target to build an object file
src/Clock/clock.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Clock/clock.cpp.o
.PHONY : src/Clock/clock.cpp.o

src/Clock/clock.i: src/Clock/clock.cpp.i

.PHONY : src/Clock/clock.i

# target to preprocess a source file
src/Clock/clock.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Clock/clock.cpp.i
.PHONY : src/Clock/clock.cpp.i

src/Clock/clock.s: src/Clock/clock.cpp.s

.PHONY : src/Clock/clock.s

# target to generate assembly for a file
src/Clock/clock.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Clock/clock.cpp.s
.PHONY : src/Clock/clock.cpp.s

src/Game/game.o: src/Game/game.cpp.o

.PHONY : src/Game/game.o

# target to build an object file
src/Game/game.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Game/game.cpp.o
.PHONY : src/Game/game.cpp.o

src/Game/game.i: src/Game/game.cpp.i

.PHONY : src/Game/game.i

# target to preprocess a source file
src/Game/game.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Game/game.cpp.i
.PHONY : src/Game/game.cpp.i

src/Game/game.s: src/Game/game.cpp.s

.PHONY : src/Game/game.s

# target to generate assembly for a file
src/Game/game.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Game/game.cpp.s
.PHONY : src/Game/game.cpp.s

src/GameObject/Bomberman/Bomberman.o: src/GameObject/Bomberman/Bomberman.cpp.o

.PHONY : src/GameObject/Bomberman/Bomberman.o

# target to build an object file
src/GameObject/Bomberman/Bomberman.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bomberman/Bomberman.cpp.o
.PHONY : src/GameObject/Bomberman/Bomberman.cpp.o

src/GameObject/Bomberman/Bomberman.i: src/GameObject/Bomberman/Bomberman.cpp.i

.PHONY : src/GameObject/Bomberman/Bomberman.i

# target to preprocess a source file
src/GameObject/Bomberman/Bomberman.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bomberman/Bomberman.cpp.i
.PHONY : src/GameObject/Bomberman/Bomberman.cpp.i

src/GameObject/Bomberman/Bomberman.s: src/GameObject/Bomberman/Bomberman.cpp.s

.PHONY : src/GameObject/Bomberman/Bomberman.s

# target to generate assembly for a file
src/GameObject/Bomberman/Bomberman.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bomberman/Bomberman.cpp.s
.PHONY : src/GameObject/Bomberman/Bomberman.cpp.s

src/GameObject/Bombes/Explosion/Explosion.o: src/GameObject/Bombes/Explosion/Explosion.cpp.o

.PHONY : src/GameObject/Bombes/Explosion/Explosion.o

# target to build an object file
src/GameObject/Bombes/Explosion/Explosion.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/Explosion/Explosion.cpp.o
.PHONY : src/GameObject/Bombes/Explosion/Explosion.cpp.o

src/GameObject/Bombes/Explosion/Explosion.i: src/GameObject/Bombes/Explosion/Explosion.cpp.i

.PHONY : src/GameObject/Bombes/Explosion/Explosion.i

# target to preprocess a source file
src/GameObject/Bombes/Explosion/Explosion.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/Explosion/Explosion.cpp.i
.PHONY : src/GameObject/Bombes/Explosion/Explosion.cpp.i

src/GameObject/Bombes/Explosion/Explosion.s: src/GameObject/Bombes/Explosion/Explosion.cpp.s

.PHONY : src/GameObject/Bombes/Explosion/Explosion.s

# target to generate assembly for a file
src/GameObject/Bombes/Explosion/Explosion.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/Explosion/Explosion.cpp.s
.PHONY : src/GameObject/Bombes/Explosion/Explosion.cpp.s

src/GameObject/Bombes/bombes.o: src/GameObject/Bombes/bombes.cpp.o

.PHONY : src/GameObject/Bombes/bombes.o

# target to build an object file
src/GameObject/Bombes/bombes.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/bombes.cpp.o
.PHONY : src/GameObject/Bombes/bombes.cpp.o

src/GameObject/Bombes/bombes.i: src/GameObject/Bombes/bombes.cpp.i

.PHONY : src/GameObject/Bombes/bombes.i

# target to preprocess a source file
src/GameObject/Bombes/bombes.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/bombes.cpp.i
.PHONY : src/GameObject/Bombes/bombes.cpp.i

src/GameObject/Bombes/bombes.s: src/GameObject/Bombes/bombes.cpp.s

.PHONY : src/GameObject/Bombes/bombes.s

# target to generate assembly for a file
src/GameObject/Bombes/bombes.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Bombes/bombes.cpp.s
.PHONY : src/GameObject/Bombes/bombes.cpp.s

src/GameObject/Scene.o: src/GameObject/Scene.cpp.o

.PHONY : src/GameObject/Scene.o

# target to build an object file
src/GameObject/Scene.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Scene.cpp.o
.PHONY : src/GameObject/Scene.cpp.o

src/GameObject/Scene.i: src/GameObject/Scene.cpp.i

.PHONY : src/GameObject/Scene.i

# target to preprocess a source file
src/GameObject/Scene.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Scene.cpp.i
.PHONY : src/GameObject/Scene.cpp.i

src/GameObject/Scene.s: src/GameObject/Scene.cpp.s

.PHONY : src/GameObject/Scene.s

# target to generate assembly for a file
src/GameObject/Scene.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/GameObject/Scene.cpp.s
.PHONY : src/GameObject/Scene.cpp.s

src/IndiReceiver/IndiReceiver.o: src/IndiReceiver/IndiReceiver.cpp.o

.PHONY : src/IndiReceiver/IndiReceiver.o

# target to build an object file
src/IndiReceiver/IndiReceiver.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IndiReceiver/IndiReceiver.cpp.o
.PHONY : src/IndiReceiver/IndiReceiver.cpp.o

src/IndiReceiver/IndiReceiver.i: src/IndiReceiver/IndiReceiver.cpp.i

.PHONY : src/IndiReceiver/IndiReceiver.i

# target to preprocess a source file
src/IndiReceiver/IndiReceiver.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IndiReceiver/IndiReceiver.cpp.i
.PHONY : src/IndiReceiver/IndiReceiver.cpp.i

src/IndiReceiver/IndiReceiver.s: src/IndiReceiver/IndiReceiver.cpp.s

.PHONY : src/IndiReceiver/IndiReceiver.s

# target to generate assembly for a file
src/IndiReceiver/IndiReceiver.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IndiReceiver/IndiReceiver.cpp.s
.PHONY : src/IndiReceiver/IndiReceiver.cpp.s

src/IrrManager/IrrManager.o: src/IrrManager/IrrManager.cpp.o

.PHONY : src/IrrManager/IrrManager.o

# target to build an object file
src/IrrManager/IrrManager.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IrrManager/IrrManager.cpp.o
.PHONY : src/IrrManager/IrrManager.cpp.o

src/IrrManager/IrrManager.i: src/IrrManager/IrrManager.cpp.i

.PHONY : src/IrrManager/IrrManager.i

# target to preprocess a source file
src/IrrManager/IrrManager.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IrrManager/IrrManager.cpp.i
.PHONY : src/IrrManager/IrrManager.cpp.i

src/IrrManager/IrrManager.s: src/IrrManager/IrrManager.cpp.s

.PHONY : src/IrrManager/IrrManager.s

# target to generate assembly for a file
src/IrrManager/IrrManager.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/IrrManager/IrrManager.cpp.s
.PHONY : src/IrrManager/IrrManager.cpp.s

src/Keyboard/Keyboard.o: src/Keyboard/Keyboard.cpp.o

.PHONY : src/Keyboard/Keyboard.o

# target to build an object file
src/Keyboard/Keyboard.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Keyboard/Keyboard.cpp.o
.PHONY : src/Keyboard/Keyboard.cpp.o

src/Keyboard/Keyboard.i: src/Keyboard/Keyboard.cpp.i

.PHONY : src/Keyboard/Keyboard.i

# target to preprocess a source file
src/Keyboard/Keyboard.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Keyboard/Keyboard.cpp.i
.PHONY : src/Keyboard/Keyboard.cpp.i

src/Keyboard/Keyboard.s: src/Keyboard/Keyboard.cpp.s

.PHONY : src/Keyboard/Keyboard.s

# target to generate assembly for a file
src/Keyboard/Keyboard.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Keyboard/Keyboard.cpp.s
.PHONY : src/Keyboard/Keyboard.cpp.s

src/Menu/menu.o: src/Menu/menu.cpp.o

.PHONY : src/Menu/menu.o

# target to build an object file
src/Menu/menu.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Menu/menu.cpp.o
.PHONY : src/Menu/menu.cpp.o

src/Menu/menu.i: src/Menu/menu.cpp.i

.PHONY : src/Menu/menu.i

# target to preprocess a source file
src/Menu/menu.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Menu/menu.cpp.i
.PHONY : src/Menu/menu.cpp.i

src/Menu/menu.s: src/Menu/menu.cpp.s

.PHONY : src/Menu/menu.s

# target to generate assembly for a file
src/Menu/menu.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/Menu/menu.cpp.s
.PHONY : src/Menu/menu.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/bomberman.dir/build.make CMakeFiles/bomberman.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... bomberman"
	@echo "... edit_cache"
	@echo "... src/Clock/clock.o"
	@echo "... src/Clock/clock.i"
	@echo "... src/Clock/clock.s"
	@echo "... src/Game/game.o"
	@echo "... src/Game/game.i"
	@echo "... src/Game/game.s"
	@echo "... src/GameObject/Bomberman/Bomberman.o"
	@echo "... src/GameObject/Bomberman/Bomberman.i"
	@echo "... src/GameObject/Bomberman/Bomberman.s"
	@echo "... src/GameObject/Bombes/Explosion/Explosion.o"
	@echo "... src/GameObject/Bombes/Explosion/Explosion.i"
	@echo "... src/GameObject/Bombes/Explosion/Explosion.s"
	@echo "... src/GameObject/Bombes/bombes.o"
	@echo "... src/GameObject/Bombes/bombes.i"
	@echo "... src/GameObject/Bombes/bombes.s"
	@echo "... src/GameObject/Scene.o"
	@echo "... src/GameObject/Scene.i"
	@echo "... src/GameObject/Scene.s"
	@echo "... src/IndiReceiver/IndiReceiver.o"
	@echo "... src/IndiReceiver/IndiReceiver.i"
	@echo "... src/IndiReceiver/IndiReceiver.s"
	@echo "... src/IrrManager/IrrManager.o"
	@echo "... src/IrrManager/IrrManager.i"
	@echo "... src/IrrManager/IrrManager.s"
	@echo "... src/Keyboard/Keyboard.o"
	@echo "... src/Keyboard/Keyboard.i"
	@echo "... src/Keyboard/Keyboard.s"
	@echo "... src/Menu/menu.o"
	@echo "... src/Menu/menu.i"
	@echo "... src/Menu/menu.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

