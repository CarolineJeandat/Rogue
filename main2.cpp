#include "Object.h"
#include "Character.h"

void printChar(Hero const& perso) {
    std::cout << "Vie : " << perso.get_life() << "\n" << "Force : " << perso.get_strength() << "\nDefense : " << perso.get_defense() << "\n";
}

int main ()
{
    Hero hero(0,0,0);
    Arme epee(10);
    Food pomme(5);

    printChar(hero);

    std::cout << hero.add_object(&epee) << "\n";

    printChar(hero);

    std::cout << hero.add_object(&pomme) << "\n";
    std::cout << hero.print_besace() << "\n";

    hero.remove_object(0);

    //hero.use_object(1);
    printChar(hero);
    std::cout << hero.print_besace() << "\n";

    return 0;
}