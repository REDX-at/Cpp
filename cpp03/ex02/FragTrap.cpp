#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    std::cout << "FragTrap " << this->_name << " has " << this->_hitPoints << " hit points!" << std::endl;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}
