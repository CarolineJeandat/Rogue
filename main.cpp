#include <iostream>
#include <string>
#include <ncurses.h>
#include "donjon.h"
#include "Character.h"
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
    etage_1.add_character(30,10);
    int**l = etage_1.grid;
    while (c != 'q') {
        // On récupère le caractère tapé.
        c = getch();
        Hero H(4,4,1);
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
        if(c='m'){
            monter(H,l);
        endwin();
        }
    }
}

void move(int x, int y, Hero H, int** l){
    int a,b,c=get_position(H);
    if(l[a+x][b+y]==5 || l[a+x][b+y]==6 || l[a+x][b+y]==7 || l[a+x][b+y]==8){
        H.move(0,x);
        H.move(1,y);
        ramasser(Hero H,int**L)
}

void ramasser(Hero H,int** L){
    
}
void monter (Hero H,int** l){

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