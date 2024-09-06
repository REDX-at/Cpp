/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:07:03 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/27 09:40:26 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default contructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor Called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy contructoopr called" << std::endl;
    *this = src;
}

Brain& Brain::operator=(Brain const & src)
{
    std::cout << "Brain copy contructoopr called" << std::endl;
    if (this != &src)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}