#pragma once

#include "GameBoard.hpp"

class Game
{
public:
    Game(int height, int width);
    ~Game() = default;

    static int getScore();
    bool IsGamever();

    static void setScore(int newScore);
    void setIsGameover(bool newIsGameover);
    
    void processInput();
    void updateState();
    void redraw();

private:
    static int score_;
    const GameBoard gameBoard_;
    bool IsGameover_;
};