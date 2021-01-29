#include <iostream>
#include <string>
#include <ncurses.h>
#include "donjon.h"
#include "Character.h"
#include "Monster.h"
#include "object.h"

void play(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW * win = newwin(30, 60, 0, 0);
    char c;
    Etage etage_1(1,60,25);
    etage_1.add_room(0,0,60,25);
    etage_1.add_charracter(30,10);
    int**l = etage_1.grid;
    while (c != 'q') {
        // On récupère le caractère tapé.
        c = getch();
        Character H(4,4,1);
        if(c='KEY_UP'){
            move(0,-1,H,l);
        }
        if(c='KEY_DOWN'){
            move(0,1,H,l);
        }
        if(c='KEY_RIGHT'){
            move(1,0,H,l);
        }
        if(c='KEY_LEFT'){
            move(-1,0,H,l);
        }
        if(c='KEY_ENTER'){
            ramasser(H,l);
        endwin();
        }
    }
}

void move(int x, int y, Character H, int** l){

}

void ramasser(Character H,int** L){
    
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