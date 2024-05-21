#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class Weapon;

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon& weapon);
        ~HumanB();
};

#endif