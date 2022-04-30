# CMakeList.txt : CMake project for ATest2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library (atest2 "ATest2.c" "ATest2.h")

target_include_directories(atest2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# TODO: Add tests and install targets if needed.
