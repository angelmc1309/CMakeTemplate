# This project shows how to use the CMake build system


# Minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name
project(HelloWorld)

# Set subdirectories (a subdirectory is a folder containing a CMakeLists.txt file, which will also be built when we execute this CMakeLists.txt file)
add_subdirectory(staticLib)

# Set the directory where binaries will be stored
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/../bin)

# Set the directory where the executable will be stored
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Set the output executable name, and the source files to be compiled
add_executable(HelloWorld main.cpp)

# Link the executable to the libraries we want to use (SO name of the library, without the "lib" prefix and the ".so" suffix)
target_link_libraries(${PROJECT_NAME} PUBLIC staticLib dynamicLib SDL2 SDL2main SDL2_image)

# Set the directory where the libraries are stored
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/staticLib ${CMAKE_SOURCE_DIR}/dynamicLib/bin/Debug/ ${CMAKE_SOURCE_DIR}/libraries/SDL2_image-2.6.3/lib/x64/  ${CMAKE_SOURCE_DIR}/libraries/SDL2-2.26.5/lib/x64)

# Set the directory where the header files are stored
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/staticLib ${CMAKE_SOURCE_DIR}/dynamicLib ${CMAKE_SOURCE_DIR}/libraries/SDL2_image-2.6.3/include/ ${CMAKE_SOURCE_DIR}/libraries/SDL2-2.26.5/include/) 




