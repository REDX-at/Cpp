/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:00:41 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/25 10:01:02 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & src)
{
    if (this != &src)
    {
        type = src.type;
        std::cout << "WrongCat Assignation operator called" << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
