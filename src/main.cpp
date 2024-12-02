#include <ncurses.h>
#include "Game.hpp"
#include "CONSTANTS.hpp"

int main()
{
    // "   ^   "
    // "   |   "
    // "|--X--|"

    // "|   |"
    // "|-O-|"
    // "|   |"
    initscr();
    refresh();
    noecho();
    curs_set(0);
    start_color();
    

    Game game(BOARD_ROWS, BOARD_COLS);

    while (!game.IsGamever())
    {
        game.caclulateDeltaTime();

        game.processInput();

        game.updateState();

        game.redraw();
    }
        

    getch();
    endwin();
    

    return 0;
}
