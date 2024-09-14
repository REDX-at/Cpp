/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:37:18 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/14 21:06:24 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

// int main()
// {
//     Character* me = new Character("me");
//     Character* bob = new Character("bob");

//     AMateria* tmp;
//     AMateria* tmp2;
//     tmp = new Ice();
//     tmp2 = new Cure();
//     tmp->use(*bob);
//     tmp2->use(*bob);
//     me->equip(tmp);
//     me->equip(tmp2);
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete me;
//     delete bob;
//     return 0;
// }

// int main()
// {
//     std::cout << "-------0--0------\n";
//     Character* me = new Character("me");
//     std::cout << "-------0--0------\n";
//     me->equip(new Ice());
//     std::cout << "-------0--0------\n";
//     me->equip(new Cure());
//     std::cout << "-------0--0------\n";
//     Character bob(*me);
//     std::cout << "-------0--0------\n";
//     me->use(0, bob);
//     bob.use(1, *me);
//     delete me;
//     std::cout << "-------0--0------\n";
//     (void)bob;
// }

// MateriaSource Main
// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }


int main()
{
    AMateria *invetory_tmp[4];
    int j = 0;
    for (int i = 0; i < 4; i++)
        invetory_tmp[i] = NULL;
    Character* me = new Character("me");
    ICharacter* bob = new Character("bob");
    
    AMateria* tmp;
    tmp = new Ice();
    me->equip(tmp);
    invetory_tmp[j++] = tmp;
    tmp = new Cure();
    me->equip(tmp);
    invetory_tmp[j++] = tmp;
    tmp = new Ice();
    me->equip(tmp);
    invetory_tmp[j++] = tmp;
    me->use(0, *bob);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    
    for (int i = 0; i < 4; i++)
    {
        if (invetory_tmp[i])
            delete invetory_tmp[i];
    }
    delete bob;
    delete me;
}