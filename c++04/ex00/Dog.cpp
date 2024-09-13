/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:45:19 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 18:20:23 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    *this = src;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
    if (this != &src)
    {
        type = src.type;
        // std::cout << "Dog Assignation operator called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}
