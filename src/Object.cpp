#include "Object.h"

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Arme::Arme(int might) : used(false), might(might) {}

int Arme::getMight() const {
    return might;
}

void Arme::use(Character* perso) {
    used = true;
    perso->incr_strength(might);
}

void Arme::equip(Character* perso) {
    this->use(perso);
}

void Arme::ditch(Character* perso) {
    perso->decr_strength(might);
}

/*--------------------------------------------------------*/
/*------------------- Classe : Armure --------------------*/
/*--------------------------------------------------------*/

Armure::Armure(int might) : used(false), might(might) {}

void Armure::use(Character* perso) {
    used = true;
    perso->incr_defense(might);
}

void Armure::ditch(Character* perso) {
    perso->decr_defense(might);
}