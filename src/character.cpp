#include "Character.h"


Character::Character ( int x, int y, int etage ) : 
    position( { x, y, etage } ), pdv(100), strength(5), defense(1), gold(0) {}

int* Character::get_position () { return position; }
void Character::move ( int axis, int direction ) { position[axis] += direction; }

void Character::incr_life () { pdv += 1; }
void Character::decr_life () { pdv -= 10 - defense; }
int Character::get_life () { return pdv; }

void Character::incr_gold ( int value ) { gold += value; }
void Character::decr_gold ( int value ) { gold -= value; }
int Character::get_gold () { return gold; }

void Character::incr_strength ( int value ) { strength += value; }
void Character::decr_strength ( int value ) { strength -= value; }
int Character::get_strength () { return strength; }

void Character::incr_defense ( int value ) { defense += value; }
void Character::decr_defense ( int value ) { defense -= value; }
int Character::get_defense () { return defense; }

void Character::get_object ( Object* object )
{
    g
}