/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:59:15 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 17:04:50 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
}

Span::~Span() {
}

Span::Span(const Span& other) {
    *this = other;
}

Span & Span::operator=(const Span& other) {
    this->_n = other._n;
    this->numbers = other.numbers;
    return *this;
}

Span::Span(unsigned int n) : _n(n) {
}

void Span::addNumber(int Number) {
    std::cout << "Number " << Number << " Added" << std::endl;
    if (numbers.size() == this->_n) {
        throw MaxElement();
    }
    numbers.push_back(Number);
}

int Span::shortestSpan(){
    if (numbers.size() < 2) {
        throw NumberNotEnough();
    }
    else {
        std::sort(numbers.begin(), numbers.end());
        int shortest = INT_MAX;
        for (size_t i = 0; i < numbers.size() - 1; ++i) {
            int diff = numbers[i + 1] - numbers[i];
            if (diff < shortest) {
                shortest = diff; 
            }
        }
        return shortest; 
    }
}

int Span::longestSpan(){
    if (numbers.size() < 2) {
        throw NumberNotEnough();
    }
    std::sort(numbers.begin(), numbers.end());

    return (numbers[numbers.size() - 1] - numbers[0]);
    return 0;
}


void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    while (start != end) {
        if (numbers.size() < this->_n) {
            numbers.push_back(*start);
            ++start;
        } else {
            throw MaxElement();
        }
    }
}
