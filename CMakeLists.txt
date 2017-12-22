cmake_minimum_required (VERSION 2.6)
project (Hello-cplusplus)

#Bring the headers, such as Student.h into the project
include_directories(/usr/local/Cellar/boost/1.65.1/include/)

#For the shared library:
link_directories(/usr/local/Cellar/boost/1.65.1/lib)

add_executable(hello src/hello.cpp)

