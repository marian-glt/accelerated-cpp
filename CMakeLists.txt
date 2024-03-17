cmake_minimum_required(VERSION 3.24)

project(accelerated-cpp
	VERSION 0.0.1
	DESCRIPTION "Code for exercises from Accelerated C++"
	HOMEPAGE_URL "https://github.com/marian-glt/accelerated-cpp"
	LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(cpp-executable src/main.cpp "src/working-with-strings.h")

target_include_directories(cpp-executable PUBLIC src)