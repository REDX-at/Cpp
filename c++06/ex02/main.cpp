/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:55:28 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/05 23:50:01 by aitaouss         ###   ########.fr       */
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
    else
        std::cout << "Something went wrong" << std::endl;
}

void    identify(Base& p)
{
    try{
        dynamic_cast<DerivedA&>(p);
        std::cout << "Derived A" << std::endl;
    }
    catch(std::bad_cast&){
        try{
            dynamic_cast<DerivedB&>(p);
            std::cout << "Derived B" << std::endl;
        }
        catch(std::bad_cast&){
            try{
                dynamic_cast<DerivedC&>(p);
                std::cout << "Derived C" << std::endl;
            }
            catch(std::bad_cast&){
                std::cout << "Something went wrong" << std::endl;
            }
        }
    }
}


int main()
{
    Base *a = generate();

    Base *b = new DerivedB();
    identify(*b);
    identify(a);
    delete a;
    delete b;
    return 0;
}