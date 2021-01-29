#include "Object.h"

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Arme::Arme(int might) : used(false), might(might) {}

int Arme::getMight() const {
    return might;
}

void Arme::use(Character* perso) {
    if(!used) {
        used = true;
        perso->incr_strength(might);
    }
}

void Arme::equip(Character* perso) {
    this->use(perso);
}

void Arme::unuse(Character* perso) {
    if(used) {
        used = false;
        perso->decr_strength(might);
    }
}

void Arme::ditch(Character* perso) {
    this->unuse(perso);
}

/*--------------------------------------------------------*/
/*------------------- Classe : Armure --------------------*/
/*--------------------------------------------------------*/

Armure::Armure(int might) : used(false), might(might) {}

void Armure::use(Character* perso) {
    if(!used) {
        used = true;
        perso->incr_defense(might);
    }
}

void Armure::equip(Character* perso) {
    this->use(perso);
}

void Armure::unuse(Character* perso) {
    if(used) {
        used = false;
        perso->decr_defense(might);
    }
}

void Armure::ditch(Character* perso) {
    this->unuse(perso);
}

/*--------------------------------------------------------*/
/*-------------------- Classe : Food ---------------------*/
/*--------------------------------------------------------*/

Food::Food(int energy) : energy(energy) {}

void Food::use(Character* perso) {
    perso->incr_life(energy);
    perso->remove_object(this);
}

void equip(Character* perso) {}

void unuse(Character* perso) {}

void ditch(Character* perso) {}