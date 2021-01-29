#include <ncurses.h>
#include <vector>
#include "donjon.h"

constexpr int mur=1;
constexpr int couloir=2;
constexpr int sol=3;
constexpr int hero=4;
constexpr int armure=5;
constexpr int arme=6;
constexpr int potion=7;
constexpr int nourriture=8;


void initialisation_etage(Etage etage,WINDOW * win){
    wmove(win, 0, 0);
    int** l = etage.grid;
    for(int i=0;i<etage.x_size;i++){
        for(int j=0;j<etage.y_size;j++){
            if(l[i][j]==mur){
                waddch(win, 'ACS_BLOCK');
            }
            if(l[i][j]==sol){
                waddch(win, '.');
            }
            if(l[i][j]==hero){
                waddch(win, '@');
            }
            if(l[i][j]==armure){
                waddch(win, 'A');
            }
            if(l[i][j]==arme){
                waddch(win, '!');
            }
            if(l[i][j]==potion){
                waddch(win, 'P');
            }
            if(l[i][j]==nourriture){
                waddch(win, 'o');
            }
            if(l[i][j]==couloir){
                waddch(win, '=');
            }
        }
    }

}