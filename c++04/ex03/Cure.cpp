/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:50:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 21:12:53 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria(other)
{
    // std::cout << "Copy Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Destructor Cure called " << std::endl;
}

AMateria* Cure::clone() const
{
    // std::cout << "Clone Cure called" << std::endl;
    return new Cure(*this);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    (void)other;
    // if (this != &other)
    //     this->type = other.type;
    return *this;
}

