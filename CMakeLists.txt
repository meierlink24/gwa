# Minimum CMake version
cmake_minimum_required(VERSION 3.16)

# Project name and version
project(GWA VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set directories
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(EXTERNAL_DIR ${CMAKE_SOURCE_DIR}/external)

# Include GLM (header-only library)
include_directories(${EXTERNAL_DIR}/glm)

# Add GLFW
add_subdirectory(${EXTERNAL_DIR}/glfw)

# Add source files
file(GLOB_RECURSE SOURCES 
    ${SRC_DIR}/core/*.cpp
    ${SRC_DIR}/renderer/*.cpp
)

# Add include directories
include_directories(${INCLUDE_DIR})

# Add executable target
add_executable(gwa ${SOURCES})

# Link libraries (GLFW requires linking with OpenGL)
find_package(OpenGL REQUIRED)
target_link_libraries(gwa PRIVATE glfw OpenGL::GL)
