#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name);

int main()
{
    Zombie *zombie = newZombie("Red");
    randomChump("White");
    delete zombie;
}
