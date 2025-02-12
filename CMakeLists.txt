cmake_minimum_required(VERSION 3.11...3.29)

project(SDL_program VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SDL3_LIB_DIR "${PROJECT_SOURCE_DIR}/dependencies/SDL3/lib")

include_directories(headers)

file(GLOB_RECURSE HEADERS
	Headers/*.h
)

include_directories(dependencies)
add_subdirectory(src)