#pragma once

#include <ncurses.h>
#include <vector>
#include "GameEntiies.hpp"

class GameBoard
{
public:
    GameBoard();
    GameBoard(int height, int width);
    ~GameBoard() = default;

    static GameEntities getEntitieAtPosition(int height, int width);
    static chtype getSignAtPosition(int height, int width);
    chtype getInput();
    int getheight();
    int getWidth();

    static void setEntitieAtPosition(GameEntities newEntiie, int height, int width);
    static void setSignAtPositon(chtype newSign, int height, int width);
    void setHeight(int newHeight);
    void setWidth(int newWidth);

    void refresh();
    void clear();

private:

    static std::vector<std::vector<GameEntities>> allEntitiesPositions_;
    static std::vector<std::vector<chtype>> allSignsPositions_;
    WINDOW *window_;
    int height_, width_;
};
