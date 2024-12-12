/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:48:09 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 16:54:36 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <climits>

class Span {
    private: 
        unsigned int _n;
    public: 
        std::vector<int> numbers;
        Span();
        ~Span();
        Span(const Span & other);
        Span & operator=(const Span & other);
        Span(unsigned int n);   
        void    addNumber(int Number);
        int shortestSpan();
        int longestSpan();
        class MaxElement : public std::exception {
            public: 
            const char* what() const throw() {
                return "MaxElement Reached";
            }
        };
        class NumberNotEnough : public std::exception {
            public: 
            const char* what() const throw() {
                return "There is No Number or One Number";
            }
        };

        void    addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
};
