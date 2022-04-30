# CMakeList.txt : CMake project for ATest2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (demotest "demotest.c")

target_link_libraries(demotest PUBLIC atest2)

# TODO: Add tests and install targets if needed.
add_test(NAME demotest COMMAND demotest)