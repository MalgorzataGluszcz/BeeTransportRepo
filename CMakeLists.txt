cmake_minimum_required(VERSION 3.29.0)
project(BeeTransport VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# creates a variable
set(BEE_TRANSPORT_GAME_TARGET_NAME BeeTransportGame)

add_subdirectory(BeeTransport)
