#include <iostream>
#include <string>
#include <ncurses.h>
#include "donjon.h"
#include "Character.h"
#include "Object.h"

void ramasser(Hero H,int** l){
    int* temp = H.get_position();
    int a(temp[0]), b(temp[1]);
    if(l[a][b]==5){
        Armure* m = new Armure(8);
        H.add_object(m);
    if(l[a][b]==6){
        Arme* m = new Arme(8);
        H.add_object(m);
    if(l[a][b]==7){
        Potion* m = new Potion(8);
        H.add_object(m);
    if(l[a][b]==8){
        Food* m = new Food(8);
        H.add_object(m);
    }
}

void move(int x, int y, Hero H, int** l){
    int* temp = H.get_position();
    int a(temp[0]), b(temp[1]);
    if(l[a+x][b+y]==5 || l[a+x][b+y]==6 || l[a+x][b+y]==7 || l[a+x][b+y]==8){
        H.move(0,x);
        H.move(1,y);
        ramasser(H,l);
    }
}


void monter (Hero H,int** l){

}




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




void print_char_error_message(char c) {
  std::string msg = "the character '";
  msg += c;
  msg += "' is not an action !";


}


int main(){
    play();
    return 0;
}