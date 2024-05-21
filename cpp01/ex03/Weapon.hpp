#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
    private:
        std::string type;
    public:
        const std::string &getType();
        void setType(std::string type);
        Weapon(std::string type);
        ~Weapon();
};

#endif