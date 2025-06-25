cmake_minimum_required(VERSION 3.31)

project(uebungsprojekt)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ASM_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(uebungsprojekt main.cpp
        src/Game.cpp
        include/Game.h
        include/GameStatus.h
        include/Player.h
        src/HumanPlayer.cpp
        include/HumanPlayer.h
        src/HoriBot.cpp
        include/HoriBot.h
        src/RandBot.cpp
        include/RandBot.h
        src/VertBot.cpp
        include/VertBot.h
        src/SmartBot.cpp
        include/SmartBot.h
        src/Pos.cpp
        include/Pos.h
        src/Turn.cpp
        include/Turn.h
        src/Menu.cpp
        include/Menu.h)
