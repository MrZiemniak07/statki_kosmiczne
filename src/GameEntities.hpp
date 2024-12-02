#pragma once

#include <ncurses.h>
#include <chrono>
#include <vector>
#include "GameBoard.hpp"

class GameEntities
{
public:
    enum class Direction
    {
        IMMOBILE,
        UP,
        DONWN,
        LEFT,
        RIGHT
    };

    enum class Type
    {
        EMPTINESS,
        OBJECT,
        PLAYER,
        ENEMY

    };

    GameEntities() = default;
    ~GameEntities() = default;

    std::vector<BoardElement> getConnectedElements();
    Direction getDirection();
    Type getType();
    int getSpeed();

    void move();


protected:

    std::vector<BoardElement> connectedElements_;
    Direction direction_;
    Type type_;
    int speed_;
    
};
