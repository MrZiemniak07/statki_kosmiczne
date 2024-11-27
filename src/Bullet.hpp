#pragma once

#include "GameEntities.hpp"

class Bullet : public GameEntities
{
public:
    Bullet(int positionY, int positionX, Direction direction);
    ~Bullet() = default;

    std::chrono::seconds getTimePerTile();


private:
    float speed;
};