#ifndef DEF_OBJECT
#define DEF_OBJECT

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Character.h"

class Object {
    protected :
        std::string type;
        std::string description;
        std::string action;
    public :
        std::string getType() const ;
        virtual void equip(Hero* perso) = 0;
        virtual void use(Hero* perso) = 0;
        virtual void unuse(Hero* perso) = 0;
        virtual void ditch(Hero* perso) = 0;
        std::string printObject() const;
};

class Arme : public Object {
    private :
        bool used;
        int might;
    public :
        Arme(int might);
        int getMight() const;
        void use(Hero* perso);
        void equip(Hero* perso);
        void unuse(Hero* perso);
        void ditch(Hero* perso);
};


class Armure : public Object {
    private :
        bool used;
        int might;
    public :
        Armure(int might);
        void use(Hero* perso);
        void equip(Hero* perso);
        void unuse(Hero* perso);
        void ditch(Hero* perso);
};

class Food : public Object {
    private :
        int energy;
    public :
        Food(int energy);
        void use(Hero* perso);
        void equip(Hero* perso);
        void unuse(Hero* perso);
        void ditch(Hero* perso);
};

class Potion : public Object {
    private :
        int effect;
    public :
        Potion(int effect);
        void use(Hero* perso);
        void equip(Hero* perso);
        void unuse(Hero* perso);
        void ditch(Hero* perso);
};

#endif