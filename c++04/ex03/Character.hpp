/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:01:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/13 10:19:08 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class ICharacter;

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        Character();
        Character( std::string const &name);
        virtual ~Character();
        Character(Character const &other);
        Character& operator=(Character const &other);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};
#endif