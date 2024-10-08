#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points!" << std::endl;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrapattacks " << target << " causing " << this->_name << "  " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << " energy points left!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points!" << std::endl;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << " energy points left!" << std::endl;
}