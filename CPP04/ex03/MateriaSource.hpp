/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:52:32 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 16:12:33 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* inventory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        ~MateriaSource();
        MateriaSource& operator=(MateriaSource const &other);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};