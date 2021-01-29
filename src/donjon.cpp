#include "donjon.h"
#include<vector>


Etage::Etage(const int& num, const int& x, const int& y) :
    numero(num), grid(int* a[x*y]), x_size(x), y_size(y)  {}

Etage::addroom(const int& rpos_x, const int& rpos_y, const int& rsize_x, const int& rsize_y){
    std::vector<int> temp_room = {rpos_x, rpos_y};
    rooms.pushback(temp_room);
    //mur du haut
    for(int x = rpos_x + , i < rsize_x,i++){
        grid[x][rpos_y]==
    }
    
    
}