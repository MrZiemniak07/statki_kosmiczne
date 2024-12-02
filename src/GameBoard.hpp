#pragma once

#include <ncurses.h>
#include <vector>
#include "GameEntities.hpp"

struct BoardElement
{
    std::pair<int, int> location_;
    chtype sign_;
    int color_;
};

class GameBoard
{
public:


    GameBoard();
    GameBoard(int height, int width);
    ~GameBoard() = default;

    std::vector<BoardElement> getConnectedElements;
    chtype getSignAt(std::pair<int, int> location);
    int getColorAt(std::pair<int, int> location);
    int getheight();
    int getWidth();

    void setBoardBorder();
    void setPlaer(std::pair<int, int> location);

    void addEnemy(std::pair<int, int> location);
    void refresh();

private:

    std::vector<std::vector<GameEntities*>> allEntitiesPositions_;
    WINDOW *window_;
    int height_, width_;

    void clear();
};
