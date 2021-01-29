#include "Object.h"

std::string Object::getType() const {
    return type;
}

std::string Object::printObject() const {
    std::string msg("");
    msg += type + " : " + description + " (" + action + ")";
}

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Arme::Arme(int might) : used(false), might(might) {
    type = "Arme";
    description = "Epée des fées, héritée de Morgane";
    action = "Force +" + std::to_string(might);
}

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

Armure::Armure(int might) : used(false), might(might) {
    type = "Armure";
    description = "Cotte de maille rustique";
    action = "Defense +" + std::to_string(might);
}

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

Food::Food(int energy) : energy(energy) {
    type = "Aliment";
    description = "Pomme d'Adam"; 
    action = "Vie +" + std::to_string(energy);
}

void Food::use(Character* perso) {
    perso->incr_life(energy);
}

void equip(Character* perso) {}

void unuse(Character* perso) {}

void ditch(Character* perso) {}