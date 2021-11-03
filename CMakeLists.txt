cmake_minimum_required(VERSION 3.0)
project(C_Study C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")
#add_executable(C_Study main.c scan.c)
add_executable(C_Study scan.c)
