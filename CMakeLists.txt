cmake_minimum_required(VERSION 3.21)
project(RetributionIV)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake to use vcpkg toolchain
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  message(FATAL_ERROR "You must specify -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg.cmake")
endif()

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

file(GLOB SRC_FILES src/*.cpp)

add_executable(RetributionIV ${SRC_FILES})

target_link_libraries(RetributionIV PRIVATE SFML::Graphics SFML::Window SFML::System)



