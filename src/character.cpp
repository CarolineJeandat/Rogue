#include <iostream>
#include <string>
#include <>

/* 
point de vie, besace : objets + argent, force, (état de santé : si les objets sont toxiques)
*/

class Character 
{
    public :
        void gagne_vie () { pdv += 1; }
        void perd_vie () { pdv -= 1 }

        void print_vie () { std::cout << "il vous reste " << pdv << "points de vie !" << std::endl; }

    private :
        int pdv = 10;
        int force = 5;
        besace


};