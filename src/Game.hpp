#pragma once

#include "GameBoard.hpp"

class Game
{
public:
    Game(int height, int width);
    ~Game() = default;

    static int getScore();
    bool IsGamever();
    chtype getInput();

    static void setScore(int newScore);
    void setIsGameover(bool newIsGameover);
    void setInput(chtype newInput);

    void processInput();
    void updateState();
    void redraw();

private:
    static int score_;
    GameBoard gameBoard_;
    bool IsGameover_;
};