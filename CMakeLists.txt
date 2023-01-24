cmake_minimum_required(VERSION 3.10.2)

project(2ombies)

add_executable(${PROJECT_NAME}
main.cpp
src/sprite.cpp
src/player.cpp
)

target_link_libraries (${PROJECT_NAME}
	sfml-graphics
	sfml-window
	sfml-system
)
