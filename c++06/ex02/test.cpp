/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:45:40 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 00:14:12 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cstdlib>

class Base {
public:
    virtual ~Base() {
        // std::cout << "Base destructor called" << std::endl;
    }
    void print() {
        std::cout << "Base" << std::endl;
    }
};

class DerivedA : public Base {
public:
    DerivedA() {
        // std::cout << "Default DerivedA constructor called" << std::endl;
    }
    ~DerivedA() {
        // std::cout << "Destructor DerivedA called" << std::endl;
    }
    void print() {
        std::cout << "DerivedA" << std::endl;
    }
    void derA() { // Note: This should be derA instead of deva
        std::cout << "Just in the DerivedA" << std::endl;
    }
};

class DerivedB : public Base {
public:
    DerivedB() {
        // std::cout << "Default DerivedB constructor called" << std::endl;
    }
    ~DerivedB() {
        // std::cout << "Destructor DerivedB called" << std::endl;
    }
    void print() {
        std::cout << "DerivedB" << std::endl;
    }
};

// int main() {
//     DerivedA* a = new DerivedA();

    
//     Base* b = a;
//     if (DerivedA* derivedA = dynamic_cast<DerivedA*>(b)) { 
//         derivedA->print();
//     } else {
//         std::cout << "Conversion failed" << std::endl;
//     }

//     delete a;
//     return 0;
// }

int main()
{
    Base* basePtr = new DerivedA();
    DerivedA* derivedPtr = dynamic_cast<DerivedA*>(basePtr);
    if (derivedPtr) {
        std::cout << "cast valid" << std::endl;
    } else {
        std::cout << "cast not valid" << std::endl;
    }
}