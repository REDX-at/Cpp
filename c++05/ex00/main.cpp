/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:19:56 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/20 21:51:59 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "----Creat----------------" << std::endl << std::endl;
    Bureaucrat a("aimen", 150);
    std::cout << a << std::endl << std::endl;
    std::cout << "--increment--------------\n" << std::endl;
    a.incrementGrade();
    std::cout << a << std::endl << std::endl;
    std::cout << "--decrement--------------\n" << std::endl;
    a.decrementGrade();
    std::cout << a << std::endl << std::endl;
    std::cout << "-------------------------" << std::endl;
    Bureaucrat c(a);
    std::cout << "-------------------------\n" << std::endl;
    std::cout << c << std::endl << std::endl;
    std::cout << "--Exception--------------\n" << std::endl;
    try
    {
        Bureaucrat f("taoussi", 199);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }
    try
    {
        Bureaucrat b("Redx", 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }
    try
    {
        Bureaucrat d("hmed", 1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }
    try
    {
        Bureaucrat d("Unknown", -150);
    }
    catch (...)
    {
        std::cout << "Unknown exception" << std::endl << std::endl;
    }
    std::cout << "--Destructors-------------\n" << std::endl;
}

