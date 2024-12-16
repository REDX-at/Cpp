/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:16:53 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/16 17:54:42 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    check_arg(char **av) {
    for (int i = 1; av[i] != NULL; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] == '-' || !std::isdigit(av[i][j])) {
                return false;
            }
        }        
    }
    return true;
}

void    print_err(std::string error) {
    std::cerr << "Error : " << error << std::endl;
    return ;
}

int main(int ac, char **av) {
    if (ac == 1 || !check_arg(av)) {
        if (!check_arg(av)) {
            print_err("Invalid Argument.");
            return 1;
        }
        print_err("Need At least 1 Argument.");
        return 1;
    }


    std::cout << "----- Container Vector -----" << std::endl;
    std::vector<int> PmergerVector;
    for (int i = 1; av[i] != NULL; i++) {
        PmergerVector.push_back(std::stoi(av[i]));
    }

    std::vector<int>::iterator it;

    for (it = PmergerVector.begin(); it != PmergerVector.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << "----- Container Deque -----" << std::endl;
    std::deque<int> PmergerDeque;
    for (int i = 1; av[i] != NULL; i++) {
        PmergerDeque.push_back(std::stoi(av[i]));
    }
    std::vector<int>::iterator it2;

    for (it2 = PmergerVector.begin(); it2 != PmergerVector.end(); it2++) {
        std::cout << *it2 << std::endl;
    }

}