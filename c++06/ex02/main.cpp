/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:55:28 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 00:01:36 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "DerivedA.hpp"
#include "DerivedB.hpp"
#include "DerivedC.hpp"

Base* generate(void)
{
    int b = std::time(0) % 3;

    if (b == 1)
        return new DerivedA;
    else if (b == 2)
        return new DerivedB;
    else
        return new DerivedC;
}

void    identify(Base* p)
{
    if (dynamic_cast<DerivedA*>(p))
        std::cout << "Derived A" << std::endl;
    else if (dynamic_cast<DerivedB*>(p))
        std::cout << "Derived B" << std::endl;
    else if (dynamic_cast<DerivedC*>(p))
        std::cout << "Derived C" << std::endl;
}

void identify(Base& p)
{
    try {
        DerivedA& derivedA = dynamic_cast<DerivedA&>(p);
        (void)derivedA;
        std::cout << "Derived A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            DerivedB& derivedB = dynamic_cast<DerivedB&>(p);
            (void)derivedB;
            std::cout << "Derived B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                DerivedC& derivedC = dynamic_cast<DerivedC&>(p);
                (void)derivedC;
                std::cout << "Derived C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Something went wrong" << std::endl;
            }
        }
    }
}


int main()
{
    Base *a = generate();

    Base *base = new Base();
    (void)base;
    Base *b = new DerivedB();
    std::cout << "Direfence < " << std::endl << std::endl;
    identify(*b);
    std::cout << "Pointer < " << std::endl << std::endl;
    identify(b);
    identify(a);
    delete a;
    delete b;
    return 0;
}
