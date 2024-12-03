#pragma once

#include <ncurses.h>
#include <chrono>
#include <vector>
#include "GameBoard.hpp"
#include "CONSTANTS.hpp"

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

    virtual bool isCreatable();
    std::vector<GameBoard::BoardElement> getConnectedElements();
    Direction getDirection();
    Type getType();
    int getSpeed();


    void move();
    virtual void create();

protected:

    std::vector<GameBoard::BoardElement> connectedElements_;
    Direction direction_;
    Type type_;
    int speed_;
    
};
