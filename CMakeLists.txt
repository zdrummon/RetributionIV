cmake_minimum_required(VERSION 3.21)
project(RetributionIV)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window)

file(GLOB SRC_FILES src/*.cpp)

add_executable(RetributionIV ${SRC_FILES})

target_link_libraries(RetributionIV PRIVATE SFML::Graphics SFML::Window)