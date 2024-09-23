/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/23 01:52:11 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    f()
{
    system("leaks AForm");
}

int main()
{
    atexit(f);
    // // ShrubberyCreationForm tests
    // ShrubberyCreationForm d;
    // ShrubberyCreationForm a("test");

    // ShrubberyCreationForm b(a);
    
    // std::cout << d << std::endl;
    // std::cout << b << std::endl;
    // std::cout << a << std::endl;
    // try
    // {
    //     Bureaucrat t("Bureau", 1);
    //     a.beSigned(t);
    //     a.execute(t);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // // RobotomyRequestForm tests
    // RobotomyRequestForm r("red");

    // std::cout << r << std::endl;
    // try 
    // {
    //     Bureaucrat t("robot", 1);
    //     r.beSigned(t);
    //     r.execute(t);
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
    // PresidentialPardonForm tests
    // PresidentialPardonForm p("slave");
    // PresidentialPardonForm o(p);
    
    // std::cout << p << std::endl;
    // std::cout << o << std::endl;
    
    // try 
    // {
    //     Bureaucrat t("pardone", 1);
    //     p.beSigned(t);
    //     p.execute(t);
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // polymorphisme
    // AForm   *a = new PresidentialPardonForm;
    // a->performeAction();
    // delete a;
    // a = new RobotomyRequestForm;
    // a->performeAction();
    // delete a;
    // a = new ShrubberyCreationForm;
    // a->performeAction();

    // execute form
    try
    {
        Bureaucrat  a("aimen", 1);
        AForm   *b = new RobotomyRequestForm;
        b->beSigned(a);
        a.executeForm(*b);
        delete b;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
