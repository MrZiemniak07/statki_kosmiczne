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

GameEntities* GameBoard::getEntitieAtPosition(std::pair<int, int> location)
{
    return allEntitiesPositions_.at(location.first).at(location.second);
}

chtype GameBoard::getSignAtPosition(std::pair<int, int> location)
{
    return allSignsPositions_.at(location.first).at(location.second);
}

int GameBoard::getheight()
{
    return height_;
}

int GameBoard::getWidth()
{
    return width_;
}



void GameBoard::setEntitieAtPosition(GameEntities newEntiie, std::pair<int, int> location)
{
    allEntitiesPositions_.at(location.first).at(location.second) = &newEntiie;
}

void GameBoard::setSignAtPositon(chtype newSign, std::pair<int, int> location)
{
    allSignsPositions_.at(location.first).at(location.second) = newSign;
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