#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap( name ), ScavTrap( name )
{
    this->name = name;
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}