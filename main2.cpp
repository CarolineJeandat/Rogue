#include "Object.h"
#include "Character.h"

void printChar(Character const& perso) {
    std::cout << "Vie : " << perso.get_life() << "\n" << "Force : " << perso.get_strength() << "\nDefense : " << perso.get_defense() << "\n";
}

int main ()
{
    Character hero(0,0,0);
    Arme epee(10);
    Food pomme(5);

    printChar(hero);

    std::cout << hero.add_object(&epee) << "\n";
    hero.use_object(0);

    printChar(hero);

    std::cout << hero.add_object(&pomme) << "\n";
    //std::cout << hero.print_besace() << "\n";

    hero.use_object(1);
    printChar(hero);
    //std::cout << hero.print_besace() << "\n";

    return 0;
}