#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::Zombie()
{
    this->_name = "default";
    std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}