cmake_minimum_required(VERSION 3.10.2)

# set(CMAKE_BUILD_TYPE Debug)

project(2ombies)

add_executable(${PROJECT_NAME}
main.cpp
src/Message.cpp
src/Actions.cpp
src/Sprite.cpp
include/Utils.h
# src/Vector.cpp
src/Entities/Entity.cpp
src/Entities/Player.cpp
include/Messages.h
)

target_link_libraries (${PROJECT_NAME}
	sfml-graphics
	sfml-window
	sfml-system
	-lX11
)
