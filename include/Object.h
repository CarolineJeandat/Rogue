#ifndef DEF_OBJECT
#define DEF_OBJECT

#include <iostream>
#include <string>
#include "Character.h"

class Object {
    protected :
        std::string type;
        std::string description;
    public :
        virtual void equip(Character* perso) = 0;
        virtual void use(Character* perso) = 0;
        virtual void unuse(Character* perso) = 0;
        virtual void ditch(Character* perso) const = 0;
        virtual std::string print() = 0;
};

class Arme : public Object {
    private :
        bool used;
        int might;
    public :
        Arme(int might);
        int getMight() const;
        void use(Character* perso);
        void equip(Character* perso);
        void unuse(Character* perso);
        void ditch(Character* perso);
};


class Armure : public Object {
    private :
        bool used;
        int might;
    public :
        Armure(int might);
        void equip(Character* perso);
        void use(Character* perso);
        void unuse(Character* perso);
        void ditch(Character* perso);
};

class Food : public Object {
    private :
        int energy;
    public :
        
};

#endif