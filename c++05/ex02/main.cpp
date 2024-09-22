/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 08:39:02 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    ShrubberyCreationForm a("test");

    std::cout << a << std::endl;
    a.createShrubberyFile();
}