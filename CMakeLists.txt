cmake_minimum_required(VERSION 3.10)
project(6)

set(CMAKE_CXX_STANDARD 11)

add_executable(6 main.cpp Board.cpp Board.h IllegalCoordinateException.cpp IllegalCoordinateException.h Coordinate.cpp Coordinate.hpp IllegalCharException.cpp IllegalCharException.h Player.h DummyPlayers.cpp DummyPlayers.h Champion.h Champion.cpp TicTacToe.h TicTacToe.cpp)