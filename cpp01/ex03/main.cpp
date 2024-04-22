#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("thunder");
        HumanA thor("Thor", club);
        thor.attack();
        club.setType("Hammer");
        thor.attack();
    }
    {
        Weapon club = Weapon("deception");
        HumanB loki("Loki");
        loki.setWeapon(club);
        loki.attack();
        club.setType("scepter");
        loki.attack();
    }
    return 0;
}