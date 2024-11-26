#include "GameEntities.hpp"

#include <chrono>

GameEntities::GameEntities()
{
    
}



int GameEntities::getPositionY()
{
    return positionY_;
}

int GameEntities::getPositionX()
{
    return positionX_;
}

int GameEntities::getColor()
{
    return color_;
}

int GameEntities::getHealthPoints()
{
    return healthPoints_;
}

std::chrono::seconds GameEntities::getTimePerTile()
{
    return timePerTile_;
}

chtype GameEntities::getSign()
{
    return sign_;
}

GameEntities::Direction GameEntities::getDiretion()
{
    return direction_;
}
GameEntities::Type GameEntities::getType()
{
    return type_;
}



void GameEntities::setPositionY(int newPositionY)
{
    positionY_ = newPositionY;
}

void GameEntities::setPositionX(int newPositionX)
{
    positionX_ = newPositionX;
}

void GameEntities::setColor(int newColor)
{
    color_ = newColor;
}

void GameEntities::setHealthPoints(int newHealthPoints)
{
    healthPoints_ = newHealthPoints;
}

void GameEntities::setTimePerTile(std::chrono::seconds newTimePerTile)
{
    timePerTile_ = newTimePerTile;
}

void GameEntities::setSign(chtype newsign)
{
    sign_ = newsign;
}

void GameEntities::setDiretion(Direction newDirection)
{
    direction_ = newDirection;
}

void GameEntities::setType(Type newType)
{
    type_ = newType;
}