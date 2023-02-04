cmake_minimum_required(VERSION 3.10.2)

project(2ombies)

add_executable(${PROJECT_NAME}
main.cpp
src/World.cpp
src/Clock.cpp
src/sprite.cpp
src/entities/player.cpp
src/entities/zombie.cpp
src/entities/entity.cpp
src/wall.cpp
src/Actions.cpp
src/Utils.cpp
)

target_link_libraries (${PROJECT_NAME}
	sfml-graphics
	sfml-window
	sfml-system
)
