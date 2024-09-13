/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:38:32 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/10 10:17:27 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int size = 5;

    Zombie *zombies = zombieHorde(size, "Walker");
    for (int i = 0; i < size; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
}
