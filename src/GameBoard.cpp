
#include "GameBoard.hpp"
#include <ncurses.h>

struct GameBoard::BoardElement
{
    std::pair<int, int> location_;;
    chtype sign_;
    PairColors pairColor_;
};

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

std::vector<GameBoard::BoardElement> GameBoard::getConnectedElementsAt(std::pair<int, int> location)
{
    return allEntitiesPositions_.at(location.first).at(location.second)->getConnectedElements();
}

chtype GameBoard::getSignAt(std::pair<int, int> location)
{
    return allBoardElementsPositions_.at(location.first).at(location.second).sign_;
}

PairColors GameBoard::getPairColorAt(std::pair<int, int> location)
{
    return allBoardElementsPositions_.at(location.first).at(location.second).pairColor_
}

GameEntities::Direction GameBoard::getDirectionAt(std::pair<int, int> location)
{
    return allEntitiesPositions_.at(location.first).at(location.second)->getDirection();
}

GameEntities::Type GameBoard::GetTypeAt(std::pair<int, int> location)
{
    return allEntitiesPositions_.at(location.first).at(location.second)->getType();
}

int GameBoard::getheight()
{
    return height_;
}

int GameBoard::getWidth()
{
    return width_;
}


void GameBoard::refresh()
{
    wrefresh(window_);
}

void GameBoard::clear()
{
    wclear(window_);
}