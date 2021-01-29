class Monster 
{
    public :
        Character ( int x, int y, int etage );
        ~Character ();

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

    private :
        const int* position;
        int pdv;
        int strength;
        int defense;
};