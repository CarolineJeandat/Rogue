#include<vector>
using namespace std;

class Etage {
    private:

        //la grille de l'étage
        int** grid;
        int x_size;
        int y_size;
    

        //vector de rooms. rooms : sont des vectors d'int {position x, position y, taille x, taille y}
        std::vector<std::vector<int>> rooms;
        std::vector<std::vector<int>> objets;
        std::vector<std::vector<int>> stairs;
    public:

        Etage(const int& num, const int& x_size, const int& y_size);
        int numero;
        void add_room(const int& pos_x, const int& pos_y, const int& size_x, const int& size_y);
        void add_objet(int object_type, int pos_x, int pos_y);
               
};






