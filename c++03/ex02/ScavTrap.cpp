#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    std::cout << "ScavTrap " << this->_name << " has " << this->_hitPoints << " hit points!" << std::endl;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " has " << this->_energyPoints << " energy points left!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode!" << std::endl;
}