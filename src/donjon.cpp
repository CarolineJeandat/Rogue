#include "donjon.h"
#include<vector>


Etage::Etage(const int& num, const int& x, const int& y) :
    numero(num), grid(int* a[x*y]), x_size(x), y_size(y)  {}

void Etage::addroom(const int& rpos_x, const int& rpos_y, const int& rsize_x, const int& rsize_y){
    std::vector<int> temp_room = {rpos_x, rpos_y};
    rooms.pushback(temp_room);
    
    if( (rpos_x + rsize_x >= x_size) || (rpos_y + rsize_y >= y_size)){
        //erreur
    }
    //mur du haut
    for(int x = rpos_x ; x < rsize_x, x++){
        grid[x][rpos_y] = 1;
    }
    //mur du bas
    for(int x = rpos_x ; i < rsize_x, x++){
        grid[x][rpos_y + rsize_y - 1] = 1;
    }
    //mur de gauche
    for(int y = rpos_y ; y < rsize_y ;y++){
        grid[rpos_x][y] = 1;
    }
    //mur de droit
    for(int y = rpos_y;  y > rsize_y; y++){
        grid[rpos_x + rsize_x -1 ][y] = 1;
    }
    for(int x = rpos_x + 1; y < rsize_y - 1; x++){
        for(int y = rpos_y + 1; y < rsize_y - 1; y++){
            grid[x][y] = 3;
        }
    }    
}

void Etage::add_objet(int object_type, int pos_x, int pos_y){
    std::vector<int> object = {object_type, pos_x , pos_y};
    objects.pushback(object);
}
