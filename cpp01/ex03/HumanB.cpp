#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " attacks unarmed!" << std::endl;
    }
}
