#pragma once

#include <ncurses.h>
#include <chrono>

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

    GameEntities();
    virtual ~GameEntities() = default;

    int getPositionY();
    int getPositionX();
    int getColor();
    int getHealthPoints();
    std::chrono::seconds getTimePerTile();
    chtype getSign();
    Direction getDiretion();
    Type getType();

    void setPositionY(int newPositionY);
    void setPositionX(int newPositionX);
    void setColor(int newColor);
    void setHealthPoints(int newHealthPoints);
    void setTimePerTile(std::chrono::seconds newTimePerTile);
    void setSign(chtype newsign);
    void setDiretion(Direction newDirection);
    void setType(Type newType);


protected:
    int positionY_, positionX_, color_, healthPoints_;
    std::chrono::seconds timePerTile_;
    chtype sign_;
    Direction direction_;
    Type type_;

};
