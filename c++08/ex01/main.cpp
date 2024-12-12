/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:21:16 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 17:05:06 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // Span sp = Span(5);
    
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // std::cout << "-----Execption Block-----" << std::endl;

    // try {
    //     Span sp = Span(1);

    //     sp.addNumber(1);
    //     sp.addNumber(1100);
    //     sp.addNumber(30);
    // }
    // catch (const std::exception & e) {
    //     std::cout << e.what() << std::endl;
    // }
    try {   
        Span sp(5);
        std::vector<int> range;

        range.push_back(6);
        range.push_back(3);
        range.push_back(17);
        range.push_back(9);
        range.push_back(11);
        
        sp.addNumbers(range.begin(), range.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}