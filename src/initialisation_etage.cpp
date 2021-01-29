#include <ncurses.h>
#include <vector>

constexpr int murcote=1;
constexpr int murbas=2;
constexpr int sol=3;
constexpr int hero=4;
constexpr int armure=5;
constexpr int arme=6;
constexpr int potion=7;
constexpr int nourriture=8;
constexpr int couloir=9;

void initialisation_etage(std::vector<int>l,WINDOW * win){
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
        if(l[i]==armure){
            waddch(win, 'A');
        }
        if(l[i]==arme){
            waddch(win, '!');
        }
        if(l[i]==potion){
            waddch(win, 'P');
        }
        if(l[i]==nourriture){
            waddch(win, 'o');
        }
        if(l[i]==couloir){
            waddch(win, '=');
        }

    }

}