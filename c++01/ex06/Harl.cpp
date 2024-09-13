/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:57:11 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/17 18:57:12 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string logLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index = -1;
    for (int i = 0; i < 4; ++i)
    {
        if (level == logLevels[i])
        {
            index = i;
            break;
        }
    }
    switch (index)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

void Harl::debug()
{
    std::cout << BLUE_CIEL << "[DEBUG]\n" << WHITE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::error()
{
    std::cout << BLUE_CIEL << "[ERROR]\n" << WHITE << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::info()
{
    std::cout << BLUE_CIEL << "[INFO]\n" << WHITE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << BLUE_CIEL << "[WARNING]\n" << WHITE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

Harl::Harl()
{
    return;
}