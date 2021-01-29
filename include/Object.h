#ifndef DEF_OBJECT
#define DEF_OBJECT

#include <iostream>
#include "character.h"

class Object {
    public:
        void equip(Character perso) = 0;
        void ditch(Character perso) = 0;
};

class Arme : public Object {
    private:
        int might;
    public:
        Arme(int might);
        int getMight();
        void equip(Character perso);
        void ditch(Character perso);
};


class Armure : public Object {
    private :
        int might;
    public :
        Armure(int might);
        void equip(Character perso);
        void ditch(Character perso);
};

#endif