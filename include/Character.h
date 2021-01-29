#include <iostream>
#include <string>
#include <vector>

class Object;

class Character 
{
    
    public :
        Character( int x, int y, int etage );

        // mouvement du personnage
        int* get_position ();
        void move ( int axis, int direction ); 
            // axis : 0 pour x, 1 pour y, 2 pour étage
            //direction : +1 si en avant (droite ou haut), -1 si en arrière (gauche ou bas)
        
        // gagner, perdre et afficher la vie
        void incr_life ();
        void decr_life ();
        int get_life ();

        // gagner, perdre et afficher l'argent
        void incr_gold ( int value );
        void decr_gold ( int value );
        int get_gold ();

        // gagner, perdre et afficher la force
        void incr_strength ( int value );
        void decr_strength ( int value );
        int get_strength ();

        // gagner, perdre et afficher la défense
        void incr_defense ( int value );
        void decr_defense ( int value );
        int get_defense ();

        // traitement des objets dans la besace
        

    private :
        int position[3];
        
        int pdv;
        int strength;
        int defense;
        
        int gold;
        std::vector <Object*> besace;
};