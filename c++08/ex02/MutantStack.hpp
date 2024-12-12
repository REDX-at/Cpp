/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:24:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 18:28:27 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <climits>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T> {
    private:
        std::stack<T> s;
    public:
        MutantStack() {
        }
        ~MutantStack() {   
        }
        MutantStack(const  MutantStack & other) {
            s = other.s;
        }
        MutantStack& operator=(const  MutantStack & other) {
            if (this != other) {
                return s = other.s;
            }
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
    
        iterator begin() {
            return this->c.begin();
        }
    
        iterator end() {
            return this->c.end();
        }
};