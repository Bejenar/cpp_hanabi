cmake_minimum_required(VERSION 3.29)
project(hanabi)

set(CMAKE_CXX_STANDARD 20)

add_executable(hanabi main.cpp
        Core/Model/CardColor.hpp
        Core/Model/Card.hpp
        Core/Model/Player.hpp
        Core/Model/HanabiEngine.hpp)
