/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:12:03 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 21:18:43 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "Default constructor AMateria called" << std::endl;
}

AMateria::~AMateria()
{
    // std::cout << "Destructor AMateria called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    // std::cout << "Copy constructor AMateria called" << std::endl;
    *this = other;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    // std::cout << "Assignation operator called Amateria" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    AMateria::use(ICharacter& target)
{
    // std::cout <<" use called" << std::endl;
    std::cout << "* use on " << target.getName() << " *" << std::endl;
}