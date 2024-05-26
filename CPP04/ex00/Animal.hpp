#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        void makeSound() const;
};

#endif