/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 02:22:16 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/23 02:45:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constuctor Intern called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "destuctor Intern called" << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    (void)target;
    const char* forms [] = {"Shrubbery", "President", "Robotomy"};
    int j = -42;
    for(int i = 0; i < 3; i++)
    {
        if (name == std::string(forms[i]))
        {
            j = i;
            break;
        }
    }

    switch (j)
    {
        case 0:
            return new ShrubberyCreationForm(target);
        case 1:
            return new PresidentialPardonForm(target);
        case 2:
            return new RobotomyRequestForm(target);
        default:
            std::cerr << "Form not found" << std::endl;
            return NULL;
    }
}