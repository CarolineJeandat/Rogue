#include <iostream>
#include <string>
#include <ncurses.h>

void play(){
    char c;
    while (c != 'q') {
        // On récupère le caractère tapé.
        c = getch();
        if(c='KEY UP'){
            
        }

        endwin();
    }
}







void print_char_error_message(char c) {
  std::string msg = "the character '";
  msg += c;
  msg += "' is not an action !";


}


int main(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW * win = newwin(30, 60, 0, 0);
    play();
    return 0;
}