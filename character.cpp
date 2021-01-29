#include <iostream>
#include <string>

/* 
point de vie, besace : objets + argent, force, (état de santé : si les objets sont toxiques)
*/

class Character 
{
    public :
        void gagne_vie () { pdv += 1; }
        void perd_vie () { pdv -= 1 }

    private :
        int pdv = 10;

};