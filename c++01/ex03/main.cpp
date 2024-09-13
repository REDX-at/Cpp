/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:36:47 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 15:53:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("thunder");
        HumanA thor("Thor", club);
        thor.attack();
        club.setType("Hammer");
        thor.attack();
    }
    {
        Weapon club = Weapon("deception");
        HumanB loki("Loki");
        loki.setWeapon(club);
        loki.attack();
        club.setType("scepter");
        loki.attack();
    }
    return 0;
}