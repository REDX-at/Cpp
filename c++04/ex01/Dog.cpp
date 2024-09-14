/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:45:19 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/14 21:01:37 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(NULL)
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->brain = new Brain();
    std::cout << "Dog Brain created" << std::endl;
}

Dog::Dog(Dog const & src)
{
    *this = src;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->brain;
}

Dog & Dog::operator=(Dog const & src)
{
    if (this != &src)
    {
        type = src.type;
        delete this->brain;
        this->brain = new Brain(*src.brain);
        // std::cout << "Dog Assignation operator called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}
