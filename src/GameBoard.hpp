#pragma once

#include <ncurses.h>
#include <vector>
#include "GameEntities.hpp"

class GameBoard
{
public:
    GameBoard();
    GameBoard(int height, int width);
    ~GameBoard() = default;

    GameEntities getEntitieAtPosition(int height, int width);
    chtype getSignAtPosition(int height, int width);
    int getheight();
    int getWidth();

    void setEntitieAtPosition(GameEntities newEntiie, int height, int width);
    void setSignAtPositon(chtype newSign, int height, int width);
    void setHeight(int newHeight);
    void setWidth(int newWidth);

    void refresh();
    void clear();

private:

    std::vector<std::vector<GameEntities>> allEntitiesPositions_;
    std::vector<std::vector<chtype>> allSignsPositions_;
    WINDOW *window_;
    int height_, width_;
};
