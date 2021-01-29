#include <iostream>
#include <string>
#include <ncurses.h>

void play(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW * win = newwin(30, 60, 0, 0);
    char c;


    int**l=
    while (c != 'q') {
        // On récupère le caractère tapé.
        c = getch();
        x=character;
        if(c='KEY_UP'){
            move(0,-1,x,l)
        }
        if(c='KEY_DOWN'){
            move(0,1,x,l)
        }
        if(c='KEY_RIGHT'){
            move(1,0,x,l)
        }
        if(c='KEY_LEFT'){
            move(-1,0,x,l)
        }

        endwin();
    }
}

void move(int x, int y, Character x, int** l){
    
}






void print_char_error_message(char c) {
  std::string msg = "the character '";
  msg += c;
  msg += "' is not an action !";


}


int main(){
    play();
    return 0;
}