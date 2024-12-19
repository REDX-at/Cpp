/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:16:53 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/19 20:54:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    check_arg(char **av) {
    for (int i = 1; av[i]; i++) {
        for (size_t j = 0; j < strlen(av[i]); j++) {
            if (!isdigit(av[i][j])) {
                return false;
            }
        }
    }
    return true;
}

int main(int ac, char **av) {

    if (ac == 1 || !check_arg(av)) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::cout << "---------------------- Vector ---------------------\n" << std::endl;
    std::clock_t start = std::clock();
    mergeSortVector(ac, av);
    std::clock_t end = std::clock();
    double duration_ms = static_cast<double>(end - start) * 1000 / CLOCKS_PER_SEC;
    std::cout << "Time to process with std::vector " << std::fixed << std::setprecision(5) << duration_ms << " ms" << std::endl;
    
    std::cout << "\n---------------------- Deque ---------------------\n" << std::endl;
    std::clock_t start_deque = std::clock();
    mergeSortDeque(ac, av);
    std::clock_t end_deque = std::clock();
    double duration_ms_deque = static_cast<double>(end_deque - start_deque) * 1000 / CLOCKS_PER_SEC;
    std::cout << "Time to process with std::deque " << std::fixed << std::setprecision(5) << duration_ms_deque << " ms" << std::endl;
}

