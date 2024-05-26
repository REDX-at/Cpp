#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Fragger");
    std::cout << "-------------------" << std::endl;
    ScavTrap scavTrap("Guardian");
    std::cout << "-------------------" << std::endl;
    ClapTrap clapTrap("Redx");
    std::cout << "-------------------" << std::endl;
    clapTrap.takeDamage(5);
    std::cout << "-------------------" << std::endl;
    scavTrap.attack("enemy");
    std::cout << "-------------------" << std::endl;
    scavTrap.guardGate();
    std::cout << "-------------------" << std::endl;
    scavTrap.takeDamage(50);
    std::cout << "-------------------" << std::endl;
    scavTrap.takeDamage(50);
    std::cout << "-------------------" << std::endl;
    clapTrap.beRepaired(30);
    std::cout << "-------------------" << std::endl;
    scavTrap.beRepaired(30);
    std::cout << "-------------------" << std::endl;
    fragTrap.attack("enemy");
    std::cout << "-------------------" << std::endl;
    fragTrap.highFivesGuys();
    std::cout << "-------------------" << std::endl;
}