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
    gameBoard_.clear();

    for (int height = 0; height < gameBoard_.getheight(); height   ++)
    {
        for (int width = 0; width < gameBoard_.getWidth; width++)
        {
            attron(gameBoard_.getColorAt({height, width}));
            mvprintw(height, width, gameBoard_.getSignAt({height   ,width});
            attroff(COLOR_RED);
        }
        
    }
    
    gameBoard_.refresh();
    
}

