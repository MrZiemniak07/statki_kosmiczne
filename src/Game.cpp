#include "Game.hpp"


Game::Game(int height, int width)
{
    gameBoard_ = GameBoard(height, width);
    IsGameover_ = false;
    previousTime = std::chrono::high_resolution_clock::now();
}

int Game::getScore()
{
    return score_;
}

bool Game::IsGamever()
{
    return IsGameover_;
}

chtype Game::getInput()
{
    return input_;
}



void Game::setScore(int newScore)
{
    score_ = newScore;
}

void Game::setIsGameover(bool newIsGameover)
{
    IsGameover_ = newIsGameover;
}

void Game::setInput(chtype newInput)
{
    input_ = newInput;
}



void Game::caclulateDeltaTime()
{
    currentTime = std::chrono::high_resolution_clock::now();
    deltaTime = previousTime - currentTime;
    previousTime = currentTime;
}

void Game::processInput()
{
    // NA POTEM
}

void Game::updateState()
{
    // NA POTEM
}

void Game::redraw()
{
    gameBoard_.refresh();
    // NA POTEM
}

