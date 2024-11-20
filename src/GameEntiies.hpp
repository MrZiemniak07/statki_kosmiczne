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

    virtual GameEntities();
    virtual ~GameEntities() = default;

    int getPositionY();
    int getPositionX();
    int getColor();
    int getHealthPoints();
    std::chrono::duration getTimePerTile();
    chtype getSign();
    Direction getDiretion();
    Type getType();

    void setPositionY(int newPositionY);
    void setPositionX(int newPositionX);
    void setColor(int newColor);
    void setHealthPoints(int newHealthPoints);
    void setTimePerTile(auto newTimePerTile);
    void setSign(chtype newsign);
    void setDiretion(Direction newDirection);
    void setType(Type newType);


protected:
    int positionY_, positionX_, color_, healthPoints_;
    std::chrono::duration timePerTile_;
    chtype sign_;
    Direction direction_;
    Type type_;

};
