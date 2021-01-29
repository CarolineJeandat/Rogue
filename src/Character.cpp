#include "Character.h"


Character::Character ( int x, int y, int etage ) : 
    position( { x, y, etage } ), pdv(100), strength(5), defense(1), gold(0) {}


int* Character::get_position () const { return position; }
void Character::move ( int axis, int direction ) { position[axis] += direction; }


void Character::incr_life () { pdv += 1; }
void Character::decr_life () { pdv -= 10 - defense; }
int Character::get_life () const { return pdv; }


void Character::incr_gold ( int value ) { gold += value; }
void Character::decr_gold ( int value ) { gold -= value; }
int Character::get_gold () const { return gold; }


void Character::incr_strength ( int value ) { strength += value; }
void Character::decr_strength ( int value ) { strength -= value; }
int Character::get_strength () const { return strength; }


void Character::incr_defense ( int value ) { defense += value; }
void Character::decr_defense ( int value ) { defense -= value; }
int Character::get_defense () const { return defense; }


std::string Character::add_object ( Object* object )
{
    if ( besace.size() < size_max )
    {
        besace.pushback( object );
        object->equip( this );
        return "objet ajouté à la besace"
    }
    else
    {
        return "la besace est pleine"
    }
}
void Character::remove_object ( int index ) 
{
    besace[index]->ditch( this );
    besace.erase( index );
}
std::string Character::print_besace () const
{
    std::string list_objects = "";
    for ( int i=0 ; i<size_max ; i++ )
    {
        list_objects += to_string(i);
        list_objects += ". ";
        list_objects += besace[i]->print();
        list_objects += "\n";
    }
    return list_objects;
}