# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("ATest2")

enable_testing()
# Include sub-projects.
add_subdirectory ("ATest2")
add_subdirectory (tests)