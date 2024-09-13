/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:11:22 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/12 22:35:07 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
    Dog dog;
    Cat cat;
    
    std::cout << "Dog type: " << dog.getType() << std::endl;
    dog.makeSound();
    std::cout << "Cat type: " << cat.getType() << std::endl;
    cat.makeSound();
    return 0;
}
