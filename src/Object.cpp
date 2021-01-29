#include "Object.h"

std::string Object::getType() const {
    return type;
}

std::string Object::printObject() const {
    std::string msg("");
    msg += type + " : " + description + " (" + action + ")";
    return msg;
}

/*--------------------------------------------------------*/
/*-------------------- Classe : Arme ---------------------*/
/*--------------------------------------------------------*/

Arme::Arme() : used(false), might(rand()%50+1) {
    type = "Arme";
    description = "Epée des fées, héritée de Morgane";
    action = "Force +" + std::to_string(might);
}

int Arme::getMight() const {
    return might;
}

void Arme::use(Hero* perso) {
    if(!used) {
        used = true;
        perso->incr_strength(might);
    }
}

void Arme::equip(Hero* perso) {
    this->use(perso);
}

void Arme::unuse(Hero* perso) {
    if(used) {
        used = false;
        perso->decr_strength(might);
    }
}

void Arme::ditch(Hero* perso) {
    this->unuse(perso);
}

/*--------------------------------------------------------*/
/*------------------- Classe : Armure --------------------*/
/*--------------------------------------------------------*/

Armure::Armure() : used(false), might(rand()%50+1) {
    type = "Armure";
    description = "Cotte de maille rustique";
    action = "Defense +" + std::to_string(might);
}

void Armure::use(Hero* perso) {
    if(!used) {
        used = true;
        perso->incr_defense(might);
    }
}

void Armure::equip(Hero* perso) {
    this->use(perso);
}

void Armure::unuse(Hero* perso) {
    if(used) {
        used = false;
        perso->decr_defense(might);
    }
}

void Armure::ditch(Hero* perso) {
    this->unuse(perso);
}

/*--------------------------------------------------------*/
/*-------------------- Classe : Food ---------------------*/
/*--------------------------------------------------------*/

Food::Food() : energy(rand()%50+1) {
    type = "Aliment";
    description = "Pomme d'Adam"; 
    action = "Vie +" + std::to_string(energy);
}

void Food::use(Hero* perso) {
    perso->incr_life(energy);
}

void Food::equip(Hero* perso) {}

void Food::unuse(Hero* perso) {}

void Food::ditch(Hero* perso) {}


/*--------------------------------------------------------*/
/*------------------- Classe : Potion --------------------*/
/*--------------------------------------------------------*/

Potion::Potion() : effect(rand()%25+1) {
    type = "Potion";
    description = "Mystérieux breuvage";
    action = "???";
}

void Potion::use(Hero* perso) {
    int i(rand()%7);
    switch(i) {
        case 0: perso->incr_life(effect);
            break;
        case 1: perso->decr_life(effect);
            break;
        case 2: perso->change_status();
            break;
        case 3: perso->incr_strength(effect);
            break;
        case 4 : perso->decr_strength(effect);
            break;
        case 5 : perso->incr_defense(effect);
            break;
        default : perso->decr_defense(effect);
            break;
    }
}

void Potion::equip(Hero* perso) {}
void Potion::unuse(Hero* perso) {}
void Potion::ditch(Hero* perso) {}