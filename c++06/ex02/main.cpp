/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:55:28 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/05 23:00:48 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "DerivedA.hpp"
#include "DerivedB.hpp"
#include "DerivedC.hpp"

Base* generate(void)
{
    std::srand(std::time(0));
    int b = std::rand() % 3;

    std::cout << b << std::endl;

    return new Base;
}

int main()
{
    Base *a = new DerivedA();

    generate();
    delete a;
    return 0;
}