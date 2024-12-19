/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:58:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/19 21:03:44 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Vector version
bool check_sort_vector(std::vector<std::pair<int, int> >& Vpairs) {
    for (size_t i = 0; i < Vpairs.size() - 1; i++) {
        if (Vpairs[i].first > Vpairs[i + 1].first) {
            return false;
        }
    }
    return true;
}

void SortPairsRecursivelyVector(std::vector<std::pair<int, int> >& Vpairs, size_t i) {
    if (i >= Vpairs.size() - 1) {
        return;
    }
    if (Vpairs[i].first > Vpairs[i + 1].first) {
        std::swap(Vpairs[i], Vpairs[i + 1]);
    }
    
    SortPairsRecursivelyVector(Vpairs, i + 1);
    
    if (i == 0 && !check_sort_vector(Vpairs)) {
        SortPairsRecursivelyVector(Vpairs, 0);
    }
}


void    mergeSortVector(int ac, char **av) 
{
    std::vector<int> mergeSort;
    for (int i = 1; i < ac; i++) {
        mergeSort.push_back(std::stoi(av[i]));
    }
    std::cout << "Before:   ";
    for (size_t i = 0; i < mergeSort.size(); i++) {
        std::cout << mergeSort[i] << " ";
    }
    int Struggler = -42;
    if ((mergeSort.size() % 2) == 1) {
        Struggler = mergeSort[mergeSort.size() - 1];
        mergeSort.pop_back();
    }
    
    std::pair<int, int> pairs;
    std::vector<std::pair<int, int> >  Vpairs;
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
    }
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        if (i < mergeSort.size()) {
            pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
            if (pairs.first < pairs.second) {
                std::swap(pairs.first, pairs.second);
            }
            Vpairs.push_back(pairs);
        }
    }
    SortPairsRecursivelyVector(Vpairs, 0);

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
    BinarySearchInsert(MainChain, PendChain, Struggler);
}

// Deque version
bool check_sort_deque(std::deque<std::pair<int, int> >& Vpairs) {
    for (size_t i = 0; i < Vpairs.size() - 1; i++) {
        if (Vpairs[i].first > Vpairs[i + 1].first) {
            return false;
        }
    }
    return true;
}

void    SortPairsRecursivelyDeque(std::deque<std::pair<int, int> >& Vpairs, size_t i) {
    if (i >= Vpairs.size() - 1) {
        return ;
    }
    if (Vpairs[i].first > Vpairs[i + 1].first) {
        std::swap(Vpairs[i], Vpairs[i + 1]);
    }
    SortPairsRecursivelyDeque(Vpairs, i + 1);
    if (i == 0 && !check_sort_deque(Vpairs)) {
        SortPairsRecursivelyDeque(Vpairs, 0);
    }
}

void    mergeSortDeque(int ac, char **av) 
{
    std::deque<int> mergeSort;
    for (int i = 1; i < ac; i++) {
        mergeSort.push_back(std::stoi(av[i]));
    }
    std::cout << "Before:   ";
    for (size_t i = 0; i < mergeSort.size(); i++) {
        std::cout << mergeSort[i] << " ";
    }
    int Struggler = -42;
    if ((mergeSort.size() % 2) == 1) {
        Struggler = mergeSort[mergeSort.size() - 1];
        mergeSort.pop_back();
    }
    
    std::pair<int, int> pairs;
    std::deque<std::pair<int, int> >  Vpairs;
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
    }
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        if (i < mergeSort.size()) {

            
            pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
            if (pairs.first < pairs.second) {
                std::swap(pairs.first, pairs.second);
            }
            Vpairs.push_back(pairs);
        }
    }
    SortPairsRecursivelyDeque(Vpairs, 0);

    std::deque<int>    MainChain;
    std::deque<int>    PendChain;
    
    for (size_t i = 0; i < Vpairs.size(); i++) {
        MainChain.push_back(Vpairs[i].first);    
        PendChain.push_back(Vpairs[i].second);    
    }
    
    std::deque<int>::iterator it = MainChain.begin();
    if (MainChain[0] >= PendChain[0]) {
        MainChain.insert(it , PendChain[0]);
        PendChain.erase(PendChain.begin());
    }
    BinarySearchInsert(MainChain, PendChain, Struggler);
}

// hello check Mic