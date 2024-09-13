/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:17:07 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 19:33:49 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &animal);
        virtual ~Animal();
        Animal &operator=(const Animal &animal);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif 