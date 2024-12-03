
#include "GameEntities.hpp"

#include "GameBoard.hpp"
#include <vector>
#include "CONSTANTS.hpp"

bool GameEntities::isCreatable()
{
    return false;
}

std::vector<GameBoard::BoardElement> GameEntities::getConnectedElements()
{
    return connectedElements_;
}

GameEntities::Direction GameEntities::getDirection()
{
    return direction_;
}

GameEntities::Type GameEntities::getType()
{
    return type_;
}

int GameEntities::getSpeed()
{
    return speed_;
}

void GameEntities::move()
{
    for (int i = 0; i < connectedElements_.size(); i++)
    {
        switch (direction_)
        {
        case Direction::LEFT:
            connectedElements_.at(i).location_.second--;
            break;
        case Direction::RIGHT:
            connectedElements_.at(i).location_.second++;
            break;
        case Direction::UP:
            connectedElements_.at(i).location_.first--;
            break;
        case Direction::DONWN:
            connectedElements_.at(i).location_.first++;
            break;                                
        default:
            break;
        }
    }
    
}

void GameEntities::create()
{

}
