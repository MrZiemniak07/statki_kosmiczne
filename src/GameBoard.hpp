#pragma once

#include <ncurses.h>
#include <vector>
#include "GameEntities.hpp"
#include "CONSTANTS.hpp"


class GameBoard
{
public:

    struct BoardElement;

    GameBoard();
    GameBoard(int height, int width);
    ~GameBoard() = default;

    std::vector<BoardElement> getConnectedElementsAt(std::pair<int, int> location);
    chtype getSignAt(std::pair<int, int> location);
    PairColors getPairColorAt(std::pair<int, int> location);
    GameEntities::Direction getDirectionAt(std::pair<int, int> location);
    GameEntities::Type GetTypeAt(std::pair<int, int> location);

    int getheight();
    int getWidth();

    void setBoardBorder();
    void setPlaer(std::pair<int, int> location);

    void addEnemy(std::pair<int, int> location);
    void refresh();

private:

    std::vector<std::vector<GameEntities*>> allEntitiesPositions_;
    std::vector<std::vector<BoardElement> allBoardElementsPositions_;
    WINDOW *window_;
    int height_, width_;

    void clear();
};
