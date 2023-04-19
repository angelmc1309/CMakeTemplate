project(dynamicList)

# Very important to set this variable to ON if working in windows, if not we will not be able to use the dll in other projects
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(dynamicLib SHARED dynamicLib.cpp dynamicLib.hpp)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})