/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:16:53 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/17 22:42:19 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void processArgs(int ac, char **av, int type) {
    Container mergeSort;

    // Argument validation
    for (int i = 1; i < ac; i++) {
        mergeSort.push_back(std::atoi(av[i]));
    }

    // Handle odd-sized container (struggler case)
    int struggler = -42;
    if ((mergeSort.size() % 2) == 1) {
        struggler = mergeSort.back();
        mergeSort.pop_back();
    }

    // (void)type;
    // Pair sorting
    std::vector<std::pair<int ,int> > Vpairs;
    if (type == 2)
        std::vector<std::pair<int ,int> > Vpairs;
    else
        std::deque<std::pair<int ,int> > Vpairs;
    for (size_t i = 0; i < mergeSort.size(); i += 2) {
        std::pair<int, int> pair(mergeSort[i], mergeSort[i + 1]);
        if (pair.first < pair.second) {
            std::swap(pair.first, pair.second);
        }
        Vpairs.push_back(pair);
    }

    // Recursive sorting of pairs
    for (size_t i = 0; i < Vpairs.size() - 1; i++) {
        for (size_t j = 0; j < Vpairs.size() - 1 - i; j++) {
            if (Vpairs[j].first > Vpairs[j + 1].first) {
                std::swap(Vpairs[j], Vpairs[j + 1]);
            }
        }
    }

    // Splitting pairs into main and pending chains
    Container MainChain, PendChain;
    for (size_t i = 0; i < Vpairs.size(); i++) {
        MainChain.push_back(Vpairs[i].first);
        PendChain.push_back(Vpairs[i].second);
    }

    // Insert struggler into MainChain using binary search
    if (struggler != -42) {
        typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), struggler);
        MainChain.insert(pos, struggler);
    }

    // Merge pending chain into main chain
    for (typename Container::iterator it = PendChain.begin(); it != PendChain.end(); ++it) {
        typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
        MainChain.insert(pos, *it);
    }

    // Output the results
    std::cout << "----- Final Sorted Chain -----\n";
    for (typename Container::iterator it = MainChain.begin(); it != MainChain.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(int ac, char **av) 
{
    if (ac <= 1) {
        std::cerr << "Error: No arguments provided\n";
        return 1;
    }

    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) { 
                if (av[i][j] == '-' || !std::isdigit(av[i][j])) {
                    std::cerr << "Error: Invalid argument\n";
                    return 1;
                }
        } 
    }

    std::cout << "Using std::vector:\n";
    processArgs<std::vector<int> >(ac, av, 2);

    std::cout << "\nUsing std::deque:\n";
    processArgs<std::deque<int> >(ac, av, 3);

    return 0;
}
