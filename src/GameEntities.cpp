#include "GameEntities.hpp"

#include <vector>

std::vector<GameBoard::Element> GameEntities::getConnentedElements()
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
    for (size_t i = 0; i < connectedElements_.size; i++)
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