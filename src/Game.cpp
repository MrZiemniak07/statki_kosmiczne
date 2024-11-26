#include "Game.hpp"



Game::Game(int height, int width)
{
    gameBoard_ = GameBoard(height, width);
    IsGameover_ = false;
}

int Game::getScore()
{
    return score_;
}

bool Game::IsGamever()
{
    return IsGameover_;
}

void Game::setScore(int newScore)
{
    score_ = newScore;
}

void Game::setIsGameover(bool newIsGameover)
{
    IsGameover_ = newIsGameover;
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

