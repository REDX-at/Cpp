/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_insert.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:59:44 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/19 20:33:41 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool check_sort(std::vector<std::pair<int, int> >& Vpairs) {
    for (size_t i = 0; i < Vpairs.size() - 1; i++) {
        if (Vpairs[i].first > Vpairs[i + 1].first) {
            return false;
        }
    }
    return true;
}

void    SortPairsRecursively(std::vector<std::pair<int, int> >& Vpairs, size_t i) {
    if (i >= Vpairs.size() - 1) {
        return ;
    }
    if (Vpairs[i].first > Vpairs[i + 1].first) {
        std::swap(Vpairs[i], Vpairs[i + 1]);
    }
    SortPairsRecursively(Vpairs, i + 1);
    if (!check_sort(Vpairs)) {
        SortPairsRecursively(Vpairs, 0);
    }
}

void    BinarySearchInsert(std::vector<int> &MainChain, std::vector<int> &PendChain, int Struggler) {
    std::vector<int>::iterator it;

    for (it = PendChain.begin(); it != PendChain.end(); ++it){
        std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
        MainChain.insert(pos, *it);
    }
    
    if (Struggler != -42) {
        std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
        MainChain.insert(pos, Struggler);
    }
    
    std::cout << "--------- Updated Main Chain ---------" << std::endl;
    for (size_t i = 0; i < MainChain.size(); i++) {
        std::cout << MainChain[i] << std::endl;
    }
}

int main(int ac, char **av) {
    std::vector<int> mergeSort;

    if (ac == 1) {
        std::cout << "Errorr" << std::endl;
        return 1;
    }
    for (int i = 1; i < ac; i++) {
        mergeSort.push_back(std::stoi(av[i]));
    }
    std::cout << "----- Vector ------" << std::endl;
    for (size_t i = 0; i < mergeSort.size(); i++) {
        std::cout << mergeSort[i] << std::endl;
    }
    int Struggler = -42;
    if ((mergeSort.size() % 2) == 1) {
        std::cout << "Struggler : ";
        Struggler = mergeSort[mergeSort.size() - 1];
        std::cout << Struggler << std::endl;
        std::cout << "--------" << std::endl;
        mergeSort.pop_back();
    }
    
    std::pair<int, int> pairs;
    std::vector<std::pair<int, int> >  Vpairs;
    std::cout << "----- Create Pairs ------" << std::endl;
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
    std::cout << "------- Use Binary Search ------" << std::endl;
    BinarySearchInsert(MainChain, PendChain, Struggler);
}

// #include <iostream>
// #include <vector>
// #include <algorithm>

// void    SortPairsRecursively(std::vector<std::pair<int, int> >& Vpairs, size_t i) {
//     if (i >= Vpairs.size() - 1) {
//         return ;
//     }

//     if (Vpairs[i].first > Vpairs[i + 1].first)
//         std::swap(Vpairs[i], Vpairs[i + 1]);

//     SortPairsRecursively(Vpairs, i + 1);
// }

// // Generate Jacobsthal sequence up to a given size
// std::vector<int> GenerateJacobsthal(size_t size) {
//     std::vector<int> jacobsthal;
//     jacobsthal.push_back(0); // J0
//     if (size == 1) return jacobsthal;

//     jacobsthal.push_back(1); // J1
//     for (size_t i = 2; i < size; i++) {
//         int next = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
//         jacobsthal.push_back(next);
//     }
//     return jacobsthal;
// }

// void BinarySearchInsert(std::vector<int> &MainChain, std::vector<int> &PendChain, int Struggler) {
//     std::vector<int>::iterator it;

//     for (it = PendChain.begin(); it != PendChain.end(); ++it) {
//         std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
//         MainChain.insert(pos, *it);
//     }

//     if (Struggler != -42) {
//         std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
//         MainChain.insert(pos, Struggler);
//     }

//     std::cout << "--------- Updated Main Chain ---------" << std::endl;
//     for (size_t i = 0; i < MainChain.size(); i++) {
//         std::cout << MainChain[i] << std::endl;
//     }
// }

// int main(int ac, char **av) {
//     std::vector<int> mergeSort;

//     if (ac == 1) {
//         std::cout << "Error" << std::endl;
//         return 1;
//     }
//     for (int i = 1; i < ac; i++) {
//         mergeSort.push_back(std::stoi(av[i]));
//     }
//     int Struggler = -42;
//     if ((mergeSort.size() % 2) == 1) {
//         std::cout << "Struggler : ";
//         Struggler = mergeSort[mergeSort.size() - 1];
//         std::cout << Struggler << std::endl;
//         mergeSort.pop_back();
//     }

//     std::pair<int, int> pairs;
//     std::vector<std::pair<int, int> > Vpairs;

//     for (size_t i = 0; i < mergeSort.size(); i += 2) {
//         pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
//         if (pairs.first < pairs.second) {
//             std::swap(pairs.first, pairs.second);
//         }
//         Vpairs.push_back(pairs);
//     }

//     SortPairsRecursively(Vpairs, 0);

//     std::vector<int> MainChain;
//     std::vector<int> PendChain;

//     for (size_t i = 0; i < Vpairs.size(); i++) {
//         MainChain.push_back(Vpairs[i].first);
//         PendChain.push_back(Vpairs[i].second);
//     }

//     // Generate Jacobsthal sequence
//     size_t sequenceSize = PendChain.size();
//     std::vector<int> jacobsthal = GenerateJacobsthal(sequenceSize);

//     std::cout << "----- Jacobsthal Sequence ------" << std::endl;
//     for (size_t i = 0; i < jacobsthal.size(); i++) {
//         std::cout << jacobsthal[i] << " ";
//     }
//     std::cout << std::endl;

//     // Use Jacobsthal sequence for insertion
//     for (size_t i = 0; i < jacobsthal.size(); i++) {
//         if (jacobsthal[i] < static_cast<int>(PendChain.size())) {
//             std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), PendChain[jacobsthal[i]]);
//             MainChain.insert(pos, PendChain[jacobsthal[i]]);
//         }
//     }

//     // Insert the Struggler
//     if (Struggler != -42) {
//         std::vector<int>::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
//         MainChain.insert(pos, Struggler);
//     }

//     std::cout << "----------- Final Main Chain -----------" << std::endl;
//     for (size_t i = 0; i < MainChain.size(); i++) {
//         std::cout << MainChain[i] << std::endl;
//     }

//     return 0;
// }

// khlih hada hna ja mn pmerge 
// #include "PmergeMe.hpp"

// template <typename Container>
// void BinarySearchInsert(Container &MainChain, Container &PendChain, int Struggler) {
//     typename Container::iterator it;

//     for (it = PendChain.begin(); it != PendChain.end(); ++it) {
//         typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
//         MainChain.insert(pos, *it);
//     }

//     if (Struggler != -42) {
//         typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
//         MainChain.insert(pos, Struggler);
//     }
    
//     std::cout << "\nAfter : ";
//     for (size_t i = 0; i < MainChain.size(); i++) {
//         std::cout << MainChain[i] << " ";
//     }
//     std::cout << "\n";
// }

// template <typename Container>
// void mergeWithBinaryInsert(Container &MainChain, Container &PendChain) {
//     typename Container::iterator it;

//     for (it = PendChain.begin(); it != PendChain.end(); ++it) {
//         typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
//         MainChain.insert(pos, *it);
//     }
// }

// // Recursive merge-insertion sort function
// template <typename Container>
// void mergeInsertSortRecursive(Container &arr) {
//     size_t size = arr.size();

//     if (size <= 1) {
//         return;
//     }

//     size_t mid = size / 2;
//     Container left(arr.begin(), arr.begin() + mid);
//     Container right(arr.begin() + mid, arr.end());

//     mergeInsertSortRecursive(left);
//     mergeInsertSortRecursive(right);

//     arr.clear();
//     mergeWithBinaryInsert(arr, left);
//     mergeWithBinaryInsert(arr, right);
// }

// // Main sorting function
// void mergeSortVector(int ac, char **av) {
//     std::vector<int> mergeSort;
    
//     for (int i = 1; i < ac; i++) {
//         mergeSort.push_back(std::atoi(av[i]));
//     }

//     std::cout << "Before:   ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
    
//     int Struggler = -42;
//     if ((mergeSort.size() % 2) == 1) {
//         Struggler = mergeSort[mergeSort.size() - 1];
//         mergeSort.pop_back();
//     }

//     mergeInsertSortRecursive(mergeSort);

//     if (Struggler != -42) {
//         std::vector<int> strugglerVec(1, Struggler);
//         BinarySearchInsert(mergeSort, strugglerVec, Struggler);
//     }

//     std::cout << "\nAfter : ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
//     std::cout << "\n";
// }

// // deque
// void mergeSortDeque(int ac, char **av) {
//     std::deque<int> mergeSort;
    
//     for (int i = 1; i < ac; i++) {
//         mergeSort.push_back(std::atoi(av[i]));
//     }

//     std::cout << "Before:   ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
    
//     int Struggler = -42;
//     if ((mergeSort.size() % 2) == 1) {
//         Struggler = mergeSort[mergeSort.size() - 1];
//         mergeSort.pop_back();
//     }

//     mergeInsertSortRecursive(mergeSort);

//     if (Struggler != -42) {
//         std::deque<int> strugglerVec(1, Struggler);
//         BinarySearchInsert(mergeSort, strugglerVec, Struggler);
//     }

//     std::cout << "\nAfter : ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
//     std::cout << "\n";
// }

// bool    check_arg(char **av) {
//     for (int i = 1; av[i]; i++) {
//         for (size_t j = 0; j < strlen(av[i]); j++) {
//             if (!isdigit(av[i][j])) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main(int ac, char **av) {
//     if (ac == 1 || !check_arg(av)) {
//         std::cout << "Error" << std::endl;
//         return 1;
//     }
//     std::cout << "-----------------------------------------------" << std::endl;
//     std::clock_t start = std::clock();
//     mergeSortVector(ac, av);
//     std::clock_t end = std::clock();
//     double duration_ms = static_cast<double>(end - start) * 1000 / CLOCKS_PER_SEC;
//     std::cout << "Time to process with std::vector " << std::fixed << std::setprecision(5) << duration_ms << " ms" << std::endl;
//     std::cout << "-----------------------------------------------" << std::endl;
//     std::clock_t start_deque = std::clock();
//     mergeSortDeque(ac, av);
//     std::clock_t end_deque = std::clock();
//     double duration_ms_deque = static_cast<double>(end_deque - start_deque) * 1000 / CLOCKS_PER_SEC;
//     std::cout << "Time to process with std::deque " << std::fixed << std::setprecision(5) << duration_ms_deque << " ms" << std::endl;
//     return 0;
// }



// last Main 
// #include "PmergeMe.hpp"

// template <typename Container>
// void    BinarySearchInsert(Container &MainChain, Container &PendChain, int Struggler) {
//     typename Container::iterator it;

//     for (it = PendChain.begin(); it != PendChain.end(); ++it){
//         typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), *it);
//         MainChain.insert(pos, *it);
//     }
//     if (Struggler != -42) {
//         typename Container::iterator pos = std::lower_bound(MainChain.begin(), MainChain.end(), Struggler);
//         MainChain.insert(pos, Struggler);
//     }
    
//     std::cout << "\nAfter : ";
//     for (size_t i = 0; i < MainChain.size(); i++) {
//         std::cout << MainChain[i] << " ";
//     }
//     std::cout << "\n";
// }

// Vector version
// bool check_sort(std::vector<std::pair<int, int> >& Vpairs) {
//     for (size_t i = 0; i < Vpairs.size() - 1; i++) {
//         if (Vpairs[i].first > Vpairs[i + 1].first) {
//             return false;
//         }
//     }
//     return true;
// }

// void    SortPairsRecursivelyVector(std::vector<std::pair<int, int> >& Vpairs, size_t i) {
//     if (i >= Vpairs.size() - 1) {
//         return ;
//     }
//     if (Vpairs[i].first > Vpairs[i + 1].first) {
//         std::swap(Vpairs[i], Vpairs[i + 1]);
//     }
//     SortPairsRecursivelyVector(Vpairs, i + 1);
//     if (!check_sort(Vpairs)) {
//         SortPairsRecursivelyVector(Vpairs, 0);
//     }
// }

// void    mergeSortVector(int ac, char **av) 
// {
//     std::vector<int> mergeSort;
//     for (int i = 1; i < ac; i++) {
//         mergeSort.push_back(std::stoi(av[i]));
//     }
//     std::cout << "Before:   ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
//     int Struggler = -42;
//     if ((mergeSort.size() % 2) == 1) {
//         Struggler = mergeSort[mergeSort.size() - 1];
//         mergeSort.pop_back();
//     }
    
//     std::pair<int, int> pairs;
//     std::vector<std::pair<int, int> >  Vpairs;
//     for (size_t i = 0; i < mergeSort.size(); i += 2) {
//         pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
//     }
//     for (size_t i = 0; i < mergeSort.size(); i += 2) {
//         if (i < mergeSort.size()) {
//             pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
//             if (pairs.first < pairs.second) {
//                 std::swap(pairs.first, pairs.second);
//             }
//             Vpairs.push_back(pairs);
//         }
//     }
//     SortPairsRecursivelyVector(Vpairs, 0);

//     std::vector<int>    MainChain;
//     std::vector<int>    PendChain;
    
//     for (size_t i = 0; i < Vpairs.size(); i++) {
//         MainChain.push_back(Vpairs[i].first);    
//         PendChain.push_back(Vpairs[i].second);    
//     }
    
//     std::vector<int>::iterator it = MainChain.begin();
//     if (MainChain[0] >= PendChain[0]) {
//         MainChain.insert(it , PendChain[0]);
//         PendChain.erase(PendChain.begin());
//     }
//     BinarySearchInsert(MainChain, PendChain, Struggler);
// }

// deque version
// bool check_sort_deque(std::deque<std::pair<int, int> >& Vpairs) {
//     for (size_t i = 0; i < Vpairs.size() - 1; i++) {
//         if (Vpairs[i].first > Vpairs[i + 1].first) {
//             return false;
//         }
//     }
//     return true;
// }

// void    SortPairsRecursivelyDeque(std::deque<std::pair<int, int> >& Vpairs, size_t i) {
//     if (i >= Vpairs.size() - 1) {
//         return ;
//     }
//     if (Vpairs[i].first > Vpairs[i + 1].first) {
//         std::swap(Vpairs[i], Vpairs[i + 1]);
//     }
//     SortPairsRecursivelyDeque(Vpairs, i + 1);
//     if (!check_sort_deque(Vpairs)) {
//         SortPairsRecursivelyDeque(Vpairs, 0);
//     }
// }

// void    mergeSortDeque(int ac, char **av) 
// {
//     std::deque<int> mergeSort;
//     for (int i = 1; i < ac; i++) {
//         mergeSort.push_back(std::stoi(av[i]));
//     }
//     std::cout << "Before:   ";
//     for (size_t i = 0; i < mergeSort.size(); i++) {
//         std::cout << mergeSort[i] << " ";
//     }
//     int Struggler = -42;
//     if ((mergeSort.size() % 2) == 1) {
//         Struggler = mergeSort[mergeSort.size() - 1];
//         mergeSort.pop_back();
//     }
    
//     std::pair<int, int> pairs;
//     std::deque<std::pair<int, int> >  Vpairs;
//     for (size_t i = 0; i < mergeSort.size(); i += 2) {
//         pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
//     }
//     for (size_t i = 0; i < mergeSort.size(); i += 2) {
//         if (i < mergeSort.size()) {

            
//             pairs = std::make_pair(mergeSort[i], mergeSort[i + 1]);
//             if (pairs.first < pairs.second) {
//                 std::swap(pairs.first, pairs.second);
//             }
//             Vpairs.push_back(pairs);
//         }
//     }
//     SortPairsRecursivelyDeque(Vpairs, 0);

//     std::deque<int>    MainChain;
//     std::deque<int>    PendChain;
    
//     for (size_t i = 0; i < Vpairs.size(); i++) {
//         MainChain.push_back(Vpairs[i].first);    
//         PendChain.push_back(Vpairs[i].second);    
//     }
    
//     std::deque<int>::iterator it = MainChain.begin();
//     if (MainChain[0] >= PendChain[0]) {
//         MainChain.insert(it , PendChain[0]);
//         PendChain.erase(PendChain.begin());
//     }
//     BinarySearchInsert(MainChain, PendChain, Struggler);
// }

// bool    check_arg(char **av) {
//     for (int i = 1; av[i]; i++) {
//         for (size_t j = 0; j < strlen(av[i]); j++) {
//             if (!isdigit(av[i][j])) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main(int ac, char **av) {

//     if (ac == 1 || !check_arg(av)) {
//         std::cout << "Error" << std::endl;
//         return 1;
//     }
//     std::cout << "---------------------- Vector ---------------------\n" << std::endl;
//     std::clock_t start = std::clock();
//     mergeSortVector(ac, av);
//     std::clock_t end = std::clock();
//     double duration_ms = static_cast<double>(end - start) * 1000 / CLOCKS_PER_SEC;
//     std::cout << "Time to process with std::vector " << std::fixed << std::setprecision(5) << duration_ms << " ms" << std::endl;
    
//     std::cout << "\n---------------------- Deque ---------------------\n" << std::endl;
//     std::clock_t start_deque = std::clock();
//     mergeSortDeque(ac, av);
//     std::clock_t end_deque = std::clock();
//     double duration_ms_deque = static_cast<double>(end_deque - start_deque) * 1000 / CLOCKS_PER_SEC;
//     std::cout << "Time to process with std::deque " << std::fixed << std::setprecision(5) << duration_ms_deque << " ms" << std::endl;

// }

