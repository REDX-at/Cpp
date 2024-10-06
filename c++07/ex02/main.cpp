/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:22:45 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 17:21:01 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main() {
//     Array<int> intArray(5);
//     std::cout << "Size of intArray: " << intArray.getn() << std::endl;

//     return 0;
// }

int main()
{
    // Array<int> a(4);
    Array<int> b(10);

    std::cout << "b size = " << b.getsize() << std::endl;
    b.print_array(b.getarray(), b.getsize());

    // b = a;

    // std::cout << "b size = " << b.getsize() << std::endl;
    // a.print_array(b.getarray(), b.getsize());
}