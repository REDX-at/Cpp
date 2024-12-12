/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:15:55 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 12:25:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int main() {
//     try {
//         std::vector<int> data;
//         data.push_back(104);
//         data.push_back(101);
//         data.push_back(108);
//         data.push_back(108);
//         data.push_back(111);

//         easyfind(data, 104); 
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }

int main() {
    try {
        easyfind<std::string>("Hello", 'a');
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}