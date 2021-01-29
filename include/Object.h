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
        std::string getType() const ;
        virtual void equip(Character* perso) = 0;
        virtual void use(Character* perso) = 0;
        virtual void unuse(Character* perso) = 0;
        virtual void ditch(Character* perso) const = 0;
        virtual std::string printObject() = 0;
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
        void use(Character* perso);
        void equip(Character* perso);
        void unuse(Character* perso);
        void ditch(Character* perso);
};

class Food : public Object {
    private :
        int energy;
    public :
        Food(int energy);
        void use(Character* perso);
        void equip(Character* perso);
        void unuse(Character* perso);
        void ditch(Character* perso);
};

class Potion : public Object {
    private :
        int effect;
    public :
        Potion(int effect);
        void use(Character* perso);
        void equip(Character* perso);
        void unuse(Character* perso);
        void ditch(Character* perso);
};

#endif