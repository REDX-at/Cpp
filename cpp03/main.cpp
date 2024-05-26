#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Redx");
    clapTrap.attack("Bandit");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
}