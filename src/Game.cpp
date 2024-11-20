#include "Game.hpp"

int Game::score_ = 0;

Game::Game(int height, int width)
{
    gameBoard_ = GameBoard(height, width);
    gameBoard_.initialize();
    IsGameover_ = false;
}

static int Game::getScore()
{
    return score_;
}

bool Game::IsGamever()
{
    return IsGameover_;
}

static void Game::setScore(int newScore)
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
    board_.refresh();
    // NA POTEM
}

