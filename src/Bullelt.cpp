#include "Bullet.hpp"
#include "CONSTANTS.hpp"

Bullet::Bullet(std::pair<int, int> location, Direction direction)
{
    
    color_ = BULLET_COLOR;
    speed_ = BULLET_SPEED;
    sign_ = ' ';
    direction_ = direction;
    type_ = Type::OBJECT;
}