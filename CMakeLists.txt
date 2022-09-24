cmake_minimum_required(VERSION 3.0)

# Enable debug symbols by default
# must be done before project() statement
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()
# (you can also set it on the command line: -D CMAKE_BUILD_TYPE=Release)



#Project name and version
project(jopen_king VERSION 1.0)


set(EXECUTABLE NAME "JOpen King")
