/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_insert.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:59:44 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/17 12:43:26 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    SortPairsRecursively(std::vector<std::pair<int, int> >& Vpairs, size_t i) {
    if (i >= Vpairs.size() - 1) {
        return ;
    }

    if (Vpairs[i].first > Vpairs[i + 1].first)
        std::swap(Vpairs[i], Vpairs[i + 1]);

    SortPairsRecursively(Vpairs, i + 1);
}

int main() {
    std::vector<int> mergeSort;

    mergeSort.push_back(7);
    mergeSort.push_back(8);
    mergeSort.push_back(27);
    mergeSort.push_back(100);
    mergeSort.push_back(11);
    mergeSort.push_back(46);
    mergeSort.push_back(2);
    mergeSort.push_back(53);
    mergeSort.push_back(0);

    int Struggler = 0;
    if ((mergeSort.size() % 2) == 1) {
        std::cout << "Struggler : ";
        Struggler = mergeSort[mergeSort.size() - 1];
        std::cout << Struggler << std::endl;
        std::cout << "--------" << std::endl;
        mergeSort.pop_back();
    }
    
    std::pair<int, int> pairs;
    std::vector<std::pair<int, int> >  Vpairs;
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
        std::cout << "{" << pairs.first << " , " << pairs.second << "}" << std::endl;
    }
    std::cout << "----- After the sort ------" << std::endl;
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        if (i < mergeSort.size()) {

            
            pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
            if (pairs.first < pairs.second) {
                std::swap(pairs.first, pairs.second);
            }
            Vpairs.push_back(pairs);
            std::cout << "{" << pairs.first << " , " << pairs.second << "}" << std::endl;
        }
    }
    std::cout << "------ OUtput the Vpair ------" << std::endl; 
    for (size_t i = 0; i < Vpairs.size(); i++) {
        std::cout << Vpairs[i].first << " | " << Vpairs[i].second << std::endl;
    }
    std::cout << "----- SIZE ------" << std::endl;
    std::cout << "Size : " << Vpairs.size() << std::endl;
    std::cout << "----- After the Vect ------" << std::endl;
    SortPairsRecursively(Vpairs, 0);
    for (size_t i = 0; i < Vpairs.size(); i++) {
        std::cout << Vpairs[i].first << " | " << Vpairs[i].second << std::endl;
    }

    std::vector<int>    MainChain;
    std::vector<int>    PendChain;
    
    for (size_t i = 0; i < Vpairs.size(); i++) {
        MainChain.push_back(Vpairs[i].first);    
        PendChain.push_back(Vpairs[i].second);    
    }
    
    std::vector<int>::iterator it = MainChain.begin();
    if (MainChain[0] >= PendChain[0]) {
        MainChain.insert(it , PendChain[0]);
        PendChain.erase(PendChain.begin());
    }
    std::cout << "----------- Main Chain -----------" << std::endl;
    for (size_t i = 0; i < MainChain.size(); i++) {
        std::cout << MainChain[i] << std::endl;
    }
    std::cout << "----------- Pend Chain -----------" << std::endl;
    for (size_t i = 0; i < PendChain.size(); i++) {
        std::cout << PendChain[i] << std::endl;
    }
}