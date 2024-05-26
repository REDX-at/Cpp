#include "Animal.hpp"

int main()
{
    std::cout << "--------------------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "--------------------------------" << std::endl;
    const Animal* i = new Cat();

    std::cout << "--------------------------------" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "--------------------------------" << std::endl;
    i->makeSound();
    std::cout << "--------------------------------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << "--------------------------------" << std::endl;
    j->makeSound();
    std::cout << "--------------------------------" << std::endl;
    delete j;
    std::cout << "--------------------------------" << std::endl;
    delete i;
    std::cout << "--------------------------------" << std::endl;
    return 0;
}