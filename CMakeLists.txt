#
# Project details
#
cmake_minimum_required(VERSION 3.27)

project(action_work)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#
# Building and including path
#
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/static) # STATIC
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/shared) # SHARED
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) # EXE

include_directories(${PROJECT_SOURCE_DIR}/include)

#
# Subdirectories
#
add_subdirectory(src)
add_subdirectory(test)
