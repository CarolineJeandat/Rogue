#include <ncurses.h>
#
constexpr int murcote=1;
constexpr int murbas=2;
constexpr int sol=3;
constexpr int hero=4;
constexpr int armure=5;
constexpr int arme=6;
constexpr int potion;

void initialisation_etage(int* l,WINDOW * win){
    wmove(win, 0, 0);
    for(int i=0;i<30*60;i++){
        if(l[i]==murcote){
            waddch(win, '|');
        }
        if(l[i]==murbas){
            waddch(win, '-');
        }
        if(l[i]==sol){
            waddch(win, '.');
        }
        if(l[i]==hero){
            waddch(win, '@');
        }
        if(l[i]==0){
            waddch(win, '|');
        }
    }

}