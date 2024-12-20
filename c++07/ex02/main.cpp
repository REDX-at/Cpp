/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:22:45 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/07 11:02:29 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main() {
//     Array<int> intArray(5);
//     std::cout << "Size of intArray: " << intArray.getn() << std::endl;

//     return 0;
// }

// int main()
// {
//     Array<int> a(4);
//     Array<int> b(10);

//     std::cout << "b size = " << b.size() << std::endl;

//     b = a;

//     std::cout << "b size = " << b.size() << std::endl;
// }


int main()
{
    try{
        Array<int> Aimen(2);

        Aimen[9] = 17;

        std::cout << "size of the array = " << Aimen.size() << std::endl;
    }

    catch(std::out_of_range& e){
        std::cerr << "execption : " << e.what() << std::endl;
    }
}