#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Diamond");
    std::cout << "-------------------" << std::endl;
    diamondTrap.whoAmI();
    std::cout << "-------------------" << std::endl;
    diamondTrap.attack("enemy");
    std::cout << "-------------------" << std::endl;
    diamondTrap.takeDamage(50);
}