# This tells CMake to to create an executable using the specified source code files
add_executable(${BEE_TRANSPORT_GAME_TARGET_NAME} 
			${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
			${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Application.hpp
			${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp
)

include(FetchContent)
set(SFML_LIB_NAME SFML)

# Which content we want to fetch and where we fetch it
# This is going to be from git repository
# We don't want to have a shallow copy of the repository
FetchContent_Declare(${SFML_LIB_NAME}
			GIT_REPOSITORY https://github.com/SFML/SFML
			GIT_TAG 3.0.0
			GIT_SHALLOW FALSE
)
# Make SFML available to our project
FetchContent_MakeAvailable(${SFML_LIB_NAME})

target_include_directories(${BEE_TRANSPORT_GAME_TARGET_NAME} 
			PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${BEE_TRANSPORT_GAME_TARGET_NAME} PUBLIC SFML::Graphics)
target_link_libraries(${BEE_TRANSPORT_GAME_TARGET_NAME} PUBLIC SFML::Window)
target_link_libraries(${BEE_TRANSPORT_GAME_TARGET_NAME} PUBLIC SFML::System)
target_link_libraries(${BEE_TRANSPORT_GAME_TARGET_NAME} PUBLIC SFML::Audio)