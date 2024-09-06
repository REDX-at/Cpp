/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:04:48 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 19:13:28 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void    body::whatimi()
{
    std::cout << "Im the body" << std::endl;
}

void    hand::whatimi()
{
    std::cout << "Im the hand" << std::endl;
}

void    foot::whatimi()
{
    std::cout << "Im the foot" << std::endl;
}

int main()
{
    body    Body;
    hand    hand;
    
    Body.whatimi();
    hand.whatimi();

    body    *ptr;
    
    ptr = &hand;
    ptr->whatimi();
}