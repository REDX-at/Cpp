/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:51:08 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 18:20:19 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    if (this != &src)
        *this = src;
    std::cout << "Cat Copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat& Cat::operator=(Cat const & src)
{
    if (this != &src)
    {
        type = src.type;
        // std::cout << "Cat Assignation operator called" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}