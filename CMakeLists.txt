# It has to be in the beginning of CMakeLists.txt
cmake_minimum_required(VERSION 3.31.4)
# Set the project name
# This call is required with every project we want to add.
project(BeeTransport VERSION 1.0.0 DESCRIPTION "I want to learn more advanced C++ using SFML2 and CMakeLists." LANGUAGES C CXX)
# Set a variable to CMAKE_CXX_STANDARD to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# creates a variable named BEE_TRANSPORT_GAME_TARGET_NAME and it's value BeeTransportGame
set(BEE_TRANSPORT_GAME_TARGET_NAME BeeTransportGame)

add_subdirectory(BeeTransport)
