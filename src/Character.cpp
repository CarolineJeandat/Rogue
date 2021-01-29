
#include "Character.h"
#include "Object.h"


Hero::Hero ( int x, int y, int etage ) : 
    pdv(100), strength(5), defense(1), gold(0) 
    {
        position = new int[3];
        position[0] = x;
        position[1] = y;
        position[2] = etage;
    }
Hero::~Hero () { delete[] position; }

Monster::Monster ( int x, int y, int etage ) : 
    pdv(100), strength(5), defense(1)
    {
        position = new int[3];
        position[0] = x;
        position[1] = y;
        position[2] = etage;
    }
Monster::~Monster () { delete[] position; }


int* Character::get_position () const { return position; }
void Hero::move ( int axis, int direction ) { position[axis] += direction; }


void Character::incr_life ( int value ) { pdv += value; }
void Character::decr_life ( int value ) { pdv -= value - defense; }
int Character::get_life () const { return pdv; }


void Hero::incr_gold ( int value ) { gold += value; }
void Hero::decr_gold ( int value ) { gold -= value; }
int Hero::get_gold () const { return gold; }


void Character::incr_strength ( int value ) { strength += value; }
void Character::decr_strength ( int value ) { strength -= value; }
int Character::get_strength () const { return strength; }


void Character::incr_defense ( int value ) { defense += value; }
void Character::decr_defense ( int value ) { defense -= value; }
int Character::get_defense () const { return defense; }


std::string Hero::add_object ( Object* object )
{
    if ( besace.size() < size_max )
    {
        besace.push_back( object );
        object->equip( this );
        return "objet ajouté à la besace";
    }
    else
    {
        return "la besace est pleine";
    }
}
void Hero::remove_object ( int index ) 
{
    besace[index]->ditch( this );
    besace.erase( besace.begin() + index );
}
std::string Hero::print_besace () const
{
    std::string list_objects = "Objets dans votre besace :\n";
    for ( unsigned int i=0 ; i<besace.size() ; i++ )
    {
        list_objects += std::to_string(i);
        list_objects += ". ";
        list_objects += besace[i]->printObject();
        list_objects += "\n";
    }
    return list_objects;
}
void Hero::use_object ( int index )
{
    besace[index]->use( this );
    std::string type = besace[index]->getType();
    if ( type == "Aliment" || type == "Potion" )
    {
        this->remove_object( index );
    }
}

bool Hero::is_confused () const { return confused; }
void Hero::change_status () { confused = !confused; }

void Character::attaque ( Character autre ) { autre.pdv -= this->strength; }