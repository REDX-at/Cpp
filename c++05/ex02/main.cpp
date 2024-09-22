/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 23:45:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // ShrubberyCreationForm tests
    ShrubberyCreationForm d;
    ShrubberyCreationForm a("test");

    ShrubberyCreationForm b(a);
    
    std::cout << d << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    try
    {
        Bureaucrat t("Bureau", 1);
        a.beSigned(t);
        a.execute(t);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // RobotomyRequestForm tests
    RobotomyRequestForm r("red");

    std::cout << r << std::endl;
    try 
    {
        Bureaucrat t("robot", 1);
        r.beSigned(t);
        r.execute(t);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
