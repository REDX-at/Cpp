/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:09:40 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/28 07:53:40 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// class Dog {
//     private:
//         std::string type;
//     public:
//         Dog() : type("dog") {}
//         std::string getType() const
//         {
//             return type;
//         }
// };

// class Cat {
//     private:
//         std::string type;
//     public:
//         Cat() : type("cat") {}
//         std::string getType() const
//         {
//             return type;
//         }
// };

// int main()
// {

//     // int  a = 14;

//     // double b = static_cast<double>(a);
//     // std::cout << b << std::endl;

//     int a = 97;
//     // int *ptr = &a;

//     // int *b = &a;

//     // std::cout << b << std::endl;
//     char  ptr = static_cast<char>(a);
//     std::cout << ptr << std::endl;
//     std::cout << a << std::endl;

//     // 0000 0000 0000 0000 0000 0000 0000 0100    4
//     // 0000 0000 0000 0000 0000 0000 0000 0100 0000 0000 0000 0000 0000 0000 0000 0000



//     return 0;
// }
#include <iostream>
#include <cmath>

int main() {
    float negativeZero = -0f;
    float positiveZero = 0.0f;

    std::cout << "negativeZero: " << negativeZero << std::endl;
    std::cout << "positiveZero: " << positiveZero << std::endl;

    if (std::signbit(negativeZero)) {
        std::cout << "negativeZero is negative." << std::endl;
    } else {
        std::cout << "negativeZero is positive." << std::endl;
    }

    return 0;
}
