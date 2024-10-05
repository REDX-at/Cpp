/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:45:40 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/05 22:54:01 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cstdlib>

class Base
{
    public:
        virtual ~Base() {
            // std::cout << "Base destructor called" << std::endl;
        }
        void    print() {
            std::cout << "Base" << std::endl;
        }
};

class DerivedA : public Base
{
    public:
        DerivedA() {
            // std::cout << "Default DerivedA constructor called" << std::endl;
        }
        ~DerivedA() {
            // std::cout << "destrucor DerivedA called" << std::endl;
        }
        void    print() {
            std::cout << "DerivedA" << std::endl;
        }
};

class DerivedB : public Base
{
    public:
        DerivedB() {
            // std::cout << "Default DerivedB constructor called" << std::endl;
        }
        ~DerivedB() {
            // std::cout << "destrucor DerivedB called" << std::endl;
        }
        void    print() {
            std::cout << "DerivedB" << std::endl;
        }
};

int main()
{
    DerivedA *a = new DerivedA();

    Base *b = dynamic_cast<DerivedB*>(a);
    if (b)
        b->print();
    else
        std::cout << "Conversion failed" << std::endl;
    delete b;

    return 0;
}