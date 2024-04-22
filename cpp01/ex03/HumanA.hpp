#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
class Weapon;

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
};
#endif