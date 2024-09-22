/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:01:28 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 07:22:11 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("aimen", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "From the Bureaucrat catch aimen\n";
        std::cout << e.what() << std::endl << std::endl;
    }
    try
    {
        Bureaucrat bform("Form", 1);
        Form a;

        std::cout << a << std::endl;

        a.beSigned(bform);
        std::cout << a << std::endl;
    }
    catch (std::exception &t)
    {
        std::cout << "From the Bureaucrat catch Form\n";
        std::cout << t.what() << std::endl ;
    }
    
}