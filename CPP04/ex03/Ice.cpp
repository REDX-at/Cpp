/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:50:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 18:38:03 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Destructor ICe called " << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other)
{
    // std::cout << "Copy Ice constructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    // std::cout << "Clone Ice called" << std::endl;
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}