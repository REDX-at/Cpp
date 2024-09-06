/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:53:49 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 18:34:07 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "Default constructor MateriaSource called\n"; 
}

MateriaSource::~MateriaSource()
{
    // std::cout << "Destructor MateriaSource called\n";
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    // std::cout << "Copy constructor MateriaSource called\n"; 
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
    // std::cout << "Copy assignement MateriaSource called\n"; 
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            delete inventory[i];
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return NULL;
}