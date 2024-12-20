/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:21:35 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/20 11:01:07 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// void    BinarySearch(std::vector<int> & Container, int target) {
//     size_t middle_index = Container.size() / 2;
//     if ((Container.size() % 2) == 0) {
//         middle_index--;
//     }
//     std::cout << Container[middle_index] << std::endl;
//     if (Container[middle_index] == target) {
//         std::cout << "Found" << std::endl;
//         return ;
//     }
//     else if (Container.size() == 1) {
//         std::cout << "Not Found" << std::endl;
//         return ;
//     }
//     else if (Container[middle_index] < target) {
//         std::vector<int> newContainer(Container.begin() + middle_index + 1, Container.end());
//         BinarySearch(newContainer, target);
//     }
//     else {
//         std::vector<int> newContainer(Container.begin(), Container.begin() + middle_index);
//         BinarySearch(newContainer, target);
//     }
//     return ;
// }

// int main() {
//     std::vector<int> Arr;

//     Arr.push_back(2);   
//     Arr.push_back(2);   
//     Arr.push_back(23);   
//     Arr.push_back(43);   
//     Arr.push_back(68);   
//     Arr.push_back(76);   
//     Arr.push_back(87);   
//     Arr.push_back(99);   

//     BinarySearch(Arr, 5);
// }

// int main() {
//     int var = -42;

//     std::string input = "20 43 World! 2002";
//     std::stringstream ss(input);
//     std::string word1;
//     std::string word2;
//     int year = -42;
//     ss >> var >> word1 >> word2 >> year;

//     std::cout << "var : " << var << " Word : " << word1 << " Word 2 : " <<word2 << " Year : " << year << std::endl;
// }

int main() {
    int var = 66;

    std::string word = "hello";

    std::stringstream ss;

    ss << var << " " << word;
    std::cout << "Result : " << ss.str() << std::endl;
    // ss.clear();
    ss.str("");
    std::cout << "Result : " << ss.str() << std::endl;
}