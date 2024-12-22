/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:21:35 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/21 11:09:03 by aitaouss         ###   ########.fr       */
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
    size_t PendSize = 22;
    std::vector<int> jacobSthal;
    jacobSthal.push_back(0);
    jacobSthal.push_back(1);
    
    for (size_t i = 0; i < PendSize; i++) {
        jacobSthal.push_back(jacobSthal[i] + jacobSthal[i] + jacobSthal[i + 1]);
    }
    for (size_t i = 0; i < jacobSthal.size(); i++) {
        std::cout << jacobSthal[i] << std::endl;
    }
    
}

    // jacobsthal
    // std::vector<int> jacobSthal;
    // jacobSthal.push_back(0); 
    // jacobSthal.push_back(1);

    // for (size_t i = 2; i < PendChain.size(); i++) {
    //     jacobSthal.push_back(jacobSthal[i - 1] + 2 * jacobSthal[i - 2]);
    // }
    // // end jacob sthal 
    // for (size_t i = 0; i < jacobSthal.size(); i++) {
    //     size_t index = jacobSthal[i]; // Get the index from the Jacobsthal sequence
    //     if (index < PendChain.size()) {
    //         int value = PendChain[index];
    //         insertIntoMainChain(MainChain, value);
    //     }
    // }
    //     if (Struggler != -42) {
    //     insertIntoMainChain(MainChain, Struggler);
    // }
    // std::cout << "After:    ";
    // for (size_t i = 0; i < MainChain.size(); i++) {
    //     std::cout << MainChain[i] << " ";
    // }
    // std::cout << std::endl;