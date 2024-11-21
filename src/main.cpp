#include <ncurses.h>
#include "Game.hpp"

#define BOARD_DIM 20
#define BOARD_ROWS BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2

#define BULLET_SPEED 1s
#define RELOAD_SPEED 1s
#define ENEMY_RELOAD_SPEED 5s

#define BULLET_DAMABE 1
#define ENEMY_BULLET_DAMAGE 1

#define BACKGROUND_COLOR COLOR_BLACK 
#define PLAYER_COLOR COLOR_WHITE
#define ENEMY_COLOR COLOR_WHITE

#define BULLET_COLOR COLOR_YELLOW
#define EMEMY_BULLET_COLOR COLOR_RED

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
        game.processInput();

        game.updateState();

        game.redraw();
    }
        

    getch();
    endwin();
    

    return 0;
}
