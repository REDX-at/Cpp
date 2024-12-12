/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:27:40 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 18:21:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "-------Mutant Stack-------" << std::endl;
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    std::cout << "-------Loop-------" << std::endl;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);
    
    std::cout << "-------Vector Container-------" << std::endl;
    std::vector<int> vec;
    
    vec.push_back(5);
    vec.push_back(17);
    
    std::cout << vec.back() << std::endl;

    vec.pop_back();
    
    std::cout << vec.size() << std::endl;
    
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(737);
    
    vec.push_back(0);
    
    std::vector<int>::iterator itv = vec.begin();
    std::vector<int>::iterator itev = vec.end();
    
    ++itv;
    --itv;
    
    std::cout << "-------Loop-------" << std::endl;

    while (itv != itev)
    {
        std::cout << *itv << std::endl;
        ++itv;
    }
    
    return 0;
}