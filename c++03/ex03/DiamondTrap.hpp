#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();

        using ScavTrap::attack;
        void    whoAmI();
};

#endif