/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:22:31 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/14 21:02:25 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    // std::cout << "Default Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const & name)
{
    this->name = name;
    // std::cout << "Constructor Character called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    // std::cout << "Destrucor Character called" << std::endl;
    for(int i = 0; i < 4; i++)
        delete inventory[i];
}

Character::Character(Character const &other)
{
    // std::cout << "Copy constructor Character called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
}

std::string const &Character::getName() const
{
    return name;
}

Character& Character::operator=(Character const &other)
{
    // std::cout << "Copy Assignement Character called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
            delete inventory[i];
        name = other.name;
        for (int i = 0; i < 4; ++i)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

void    Character::equip(AMateria* m)
{
    if(!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;
    if (inventory[idx])
    {
        inventory[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (inventory[idx])
        inventory[idx]->use(target);
}