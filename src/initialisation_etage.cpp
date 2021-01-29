#include <ncurses.h>


void initialisation_etage(int* l,WINDOW * win){
    wmove(win, 0, 0);
    for(int i=0;i<30*60;i++){
        if(l[i]==0){
            waddch(win, '|');
        }
        if(l[i]==0){
            waddch(win, '|');
        }
        if(l[i]==0){
            waddch(win, '|');
        }
        if(l[i]==0){
            waddch(win, '|');
        }
        if(l[i]==0){
            waddch(win, '|');
        }
    }

}