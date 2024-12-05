/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:00:14 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 23:00:29 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter & src)
{
    *this = src;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

void    ScalarConverter::convert(const std::string &literal)
{
    Scalar  ScalarInstance;

    ScalarInstance.execute(literal);
}
