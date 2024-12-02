#pragma once

#include "GameEntities.hpp"

class Bullet : public GameEntities
{
public:
    Bullet(std::pair<int, int> location, Direction direction);
    ~Bullet() = default;

    std::chrono::seconds getTimePerTile();


private:
    
};