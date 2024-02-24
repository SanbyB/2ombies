cmake_minimum_required(VERSION 3.10.2)

# set(CMAKE_BUILD_TYPE Debug)

project(2ombies)

add_executable(${PROJECT_NAME}
test/Message.cpp
include/Message.h
include/Messages.h
)

target_link_libraries (${PROJECT_NAME}
	sfml-graphics
	sfml-window
	sfml-system
)
