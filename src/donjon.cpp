

#include "donjon.h"
#include<vector>


Etage::Etage(const int& num, const int& x, const int& y) :
    numero(num),  x_size(x), y_size(y)  {
        int* a[x*y];
        grid = a;
    }

void Etage::add_room(const int& rpos_x, const int& rpos_y, const int& rsize_x, const int& rsize_y){
    std::vector<int> temp_room = {rpos_x, rpos_y};
    rooms.push_back(temp_room);
    
    if( (rpos_x + rsize_x >= x_size) || (rpos_y + rsize_y >= y_size)){
        //erreur
    }
    else{
    //mur du haut
    for(int x = rpos_x ; x < rsize_x; x++){
        grid[x][rpos_y] = 1;
    }
    //mur du bas
    for(int x = rpos_x ; x < rsize_x; x++){
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
    for(int x = rpos_x + 1; x < rsize_x - 1; x++){
        for(int y = rpos_y + 1; y < rsize_y - 1; y++){
            grid[x][y] = 3;
        }
    }    
    }
}

void Etage::add_objet(int object_type, int pos_x, int pos_y){
    std::vector<int> object = {object_type, pos_x , pos_y};
    objects.push_back(object);
}

void Etage::add_character(int pos_x, int pos_y){
    if ( grid[pos_x][pos_y] == 3 ) {
        grid[pos_x][pos_y] = 4;
    }
    else{
        //error
    }
}

void Etage::add_corridor(int* start, int* finish){
    
    
    if(grid[start[0]][start[1]]!= 1 || grid[finish[0]][finish[1]]!= 1){
        //error le couloir ne relie pas 2 pièces
    }
    else{
        //c'est un couloir vertical
        if(start[0]==finish[0]){
            if(start[1]>finish[1]){
                int* temp = start;
                start = finish;
                finish = temp;                
            }
            for(int y = start[1]; y <= finish[1]; y++ ){
                grid[start[0]][y] = 2;
            }
        }
        //horizontal
        else if(start[1]==finish[1]){
            if(start[0]>finish[0]){
                int* temp = start;
                start = finish;
                finish = temp;
            }
            for(int x = start[0];x <= finish[0]; x++){
                grid[x][start[1]] = 2;
            }
        }
        else{
            //error le couloir doit être coudé et c'est pas codé
        }
    }
}
