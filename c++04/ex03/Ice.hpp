/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:44:50 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 16:52:15 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const &other);
        using AMateria::use;
        void use(ICharacter& target); 
        Ice &operator=(const Ice &other);
        AMateria* clone() const;
};
#endif