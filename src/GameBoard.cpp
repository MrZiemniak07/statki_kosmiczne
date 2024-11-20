#include "GameBoard.hpp"
#include <ncurses.h>

GameBoard::GameBoard()
{
    height_ = 0;
    width_ = 0;
    window_ = newwin(height_, width_, 0, 0);
}

GameBoard::GameBoard(int height, int width)
{
    height_ = height;
    width_ = width;
    window_ = newwin(height_, width_, 0, 0);
    
}

void GameBoard::refresh()
{
    wrefresh(window_);
}

chtype GameBoard::getIinput()
{
    return wgetch(window_);
}

void GameBoard::clear()
{
    wclear(window_);
}