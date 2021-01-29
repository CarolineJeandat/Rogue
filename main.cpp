#include <iostream>
#include <string>
#include <ncurses.h>

int main(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW * win = newwin(30, 60, 0, 0);
    
}