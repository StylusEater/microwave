cmake_minimum_required (VERSION 2.6)
project (Microwave)

# The version number.
set (Microwave_VERSION_MAJOR 1)
set (Microwave_VERSION_MINOR 0)

# Add ncurses
add_library(ncurses SHARED IMPORTED GLOBAL)

# Point to ncurses
set_target_properties(ncurses PROPERTIES IMPORTED_LOCATION "/usr/lib/x86_64-linux-gnu/libncurses.so")

set(EXEC_SOURCE_FILES microwave.c)
add_executable(Microwave ${EXEC_SOURCE_FILES})

target_link_libraries(Microwave ncurses)
