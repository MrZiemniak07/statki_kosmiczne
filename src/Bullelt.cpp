#include "Bullet.hpp"
#include "CONSTANTS.hpp"

Bullet::Bullet(int positionY, int positionX, Direction direction)
{
    positionY_ = positionY;
    positionX_ = positionX;
    color_ = BULLET_COLOR;
    speed = BULLET_SPEED;
    sign_ = ' ';
    direction_ = direction;
    type_ = Type::OBJECT;
}