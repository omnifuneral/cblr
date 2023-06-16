#include <ncurses.h>

int main() {
    // Initialize ncurses
    initscr();
    cbreak();
    noecho();

    // Print a message
    printw("Welcome to Tumblr Client!");
    refresh();
    getch();

    // Clean up ncurses
    endwin();

    return 0;
}