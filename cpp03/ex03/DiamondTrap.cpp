#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints = 100;
    this->_energyPoints = ScavTrap::_energyPoints = 50;
    this->_attackDamage = FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << ClapTrap::_name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}