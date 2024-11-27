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

GameEntities GameBoard::getEntitieAtPosition(int height, int width)
{
    return allEntitiesPositions_.at(height).at(width);
}

chtype GameBoard::getSignAtPosition(int height, int width)
{
    return allSignsPositions_.at(height).at(width);
}

int GameBoard::getheight()
{
    return height_;
}

int GameBoard::getWidth()
{
    return width_;
}



void GameBoard::setEntitieAtPosition(GameEntities newEntiie, int height, int width)
{
    allEntitiesPositions_.at(height).at(width) = newEntiie;
}

void GameBoard::setSignAtPositon(chtype newSign, int height, int width)
{
    allSignsPositions_.at(height).at(width) = newSign;
}

void GameBoard::setHeight(int newHeight)
{
    height_ = newHeight;
}

void GameBoard::setWidth(int newWidth)
{
    width_ = newWidth;
}



void GameBoard::refresh()
{
    wrefresh(window_);
}

void GameBoard::clear()
{
    wclear(window_);
}