/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:27:00 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/07 10:33:15 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// for int
// int main()
// {
//     int a = 5;
//     int b = 3;

//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     swap(a, b);
//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     std::cout << "min = " << min(a, b) << std::endl;
//     std::cout << "max = " << max(a, b) << std::endl;
// }

// for string
// int main()
// {
//     std::string a = "hello";
//     std::string b = "world";

//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     swap(a, b);
//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     std::cout << "min = " << min(a, b) << std::endl;
//     std::cout << "max = " << max(a, b) << std::endl;
// }

// for float
// int main()
// {
//     float a = 5.3;
//     float b = 5.4;

//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     swap(a, b);
//     std::cout << "a = " << a << " , b = " << b << std::endl;
//     std::cout << "min = " << min(a, b) << std::endl;
//     std::cout << "max = " << max(a, b) << std::endl;
// }

// subject test
int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}