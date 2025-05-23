cmake_minimum_required(VERSION 3.30)
project(snake)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 3.0 REQUIRED COMPONENTS System Graphics Window)

add_executable(snake main.cpp
        Snake.cpp
        Snake.h
        Game.cpp
        Game.h
        Apple.cpp
        Apple.h
        State.h
        StateMan.cpp
        StateMan.h
        AssetMan.cpp
        AssetMan.h)

target_link_libraries(snake PRIVATE SFML::Window SFML::Graphics SFML::Window)