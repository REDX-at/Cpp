/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:17:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/20 10:49:26 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <deque>
#include <sstream>

template <typename Container>
void    BinarySearchInsert(Container &MainChain, Container &PendChain, int Struggler) {
    typename Container::iterator it;

    for (it = PendChain.begin(); it != PendChain.end(); ++it){
        typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
        MainChain.insert(pos, *it);
    }
    if (Struggler != -42) {
        typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
        MainChain.insert(pos, Struggler);
    }
    
    std::cout << "\nAfter : ";
    for (size_t i = 0; i < MainChain.size(); i++) {
        std::cout << MainChain[i] << " ";
    }
    std::cout << "\n";
}

bool    check_sort_vector(std::vector<std::pair<int, int> >& Vpairs);
void    SortPairsRecursivelyVector(std::vector<std::pair<int, int> >& Vpairs, size_t i);
void    mergeSortVector(int ac, char **av);

bool    check_sort_deque(std::deque<std::pair<int, int> >& Vpairs);
void    SortPairsRecursivelyDeque(std::deque<std::pair<int, int> >& Vpairs, size_t i);
void    mergeSortDeque(int ac, char **av);