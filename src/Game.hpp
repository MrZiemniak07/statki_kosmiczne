#pragma once

#include "GameBoard.hpp"

class Game
{
public:
    Game(int height, int width);
    ~Game() = default;

    int getScore();
    bool IsGamever();
    chtype getInput();

    void setScore(int newScore);
    void setIsGameover(bool newIsGameover);
    void setInput(chtype newInput);

    void caclulateDeltaTime();
    void processInput();
    void updateState();
    void redraw();

private:
    int score_;
    chtype input_;
    GameBoard gameBoard_;
    bool IsGameover_;
    std::chrono::_V2::system_clock::time_point currentTime, previousTime;
    std::chrono::duration<float> deltaTime;
};