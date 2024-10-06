/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:22:45 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 17:10:26 by aitaouss         ###   ########.fr       */
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
    Array<int> a(4);
    // Array<int> b(a);

    // std::cout << b.getn() << std::endl;
    a.print_array(a.getarray(), a.getn());
}