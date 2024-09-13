/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:20:03 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 18:20:57 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default constructor Called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Parametric constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    // std::cout << "Assignation operator Called" << std::endl;
    this->type = animal.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}