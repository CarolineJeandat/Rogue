#include "Object.h"

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Arme::Arme(int might) :
    might(might) {}

int Arme::getMight() {
    return might;
}

void Arme::equip(Character perso) {
    perso.incr_strength(might);
}

void Arme::ditch(Character perso) {
    perso.decr_strength(might);
}

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Armure::Armure(int might) {
    might(might);
}

void Armure::equip(Character perso) {
    perso.incr_defense(might);
}

void Armure::ditch(Character perso) {
    perso.decr_defense(might);
}