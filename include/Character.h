#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <string>
#include <vector>


class Object;
class Hero;
class Monster;

class Character 
{
    public :
        // mouvement du personnage
        int* get_position () const;
        
        // gagner, perdre et afficher la vie
        void incr_life ( int value );
        void decr_life ( int value );
        int get_life () const;

        // gagner, perdre et afficher la force
        void incr_strength ( int value );
        void decr_strength ( int value );
        int get_strength () const;

        // gagner, perdre et afficher la défense
        void incr_defense ( int value );
        void decr_defense ( int value );
        int get_defense () const;

        // combat
        void attaque ( Character autre );

    protected :
        int* position;
        
        int pdv;
        int strength;
        int defense;
};

#endif

class Hero : public Character
{
    public :
        static const unsigned int size_max = 20;
        
        Hero ( int x, int y, int etage );
        ~Hero ();

        void move ( int axis, int direction ); 
            // axis : 0 pour x, 1 pour y, 2 pour étage
            //direction : +1 si en avant (droite ou haut), -1 si en arrière (gauche ou bas)
        
        // gagner, perdre et afficher l'argent
        void incr_gold ( int value );
        void decr_gold ( int value );
        int get_gold () const;

        // traitement des objets dans la besace
        std::string add_object ( Object* object );
        void remove_object ( int index );
        std::string print_besace () const;
        void use_object ( int index );

        bool is_confused () const;
        void change_status ();

    private :
        int gold;
        std::vector <Object*> besace;
        bool confused = false;
};

class Monster : public Character
{
    public :
        Monster ( int x, int y, int etage );
        ~Monster ();
};