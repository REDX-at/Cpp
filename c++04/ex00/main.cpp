/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:21:56 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 22:27:04 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Test From Pdf
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "Type : " << j->getType() << " " << std::endl;
    std::cout << "Type : " << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;
    std::cout << "---------------------" << std::endl << std::endl;
    // wrong animal
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongj = new WrongCat();

    std::cout << "Type : " << wrongj->getType() << " " << std::endl;
    wrongj->makeSound();
    wrongmeta->makeSound();
    delete wrongmeta;
    delete wrongj;
    return 0;
}

