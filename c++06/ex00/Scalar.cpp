/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 02:08:42 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 02:51:53 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

bool isNumeric(const std::string& literal)
{
    char* end = NULL;
    std::strtod(literal.c_str(), &end);
    return end != literal.c_str() && *end == '\0'; // If 'end' points to the null terminator, it's a valid number
}

bool isSingleChar(const std::string& literal)
{
    return literal.length() == 1 && std::isprint(literal[0]);
}

void    Scalar::execute(const std::string &literal)
{
    try
    {
        if (literal == "nan" || literal == "nanf")
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: Overflow" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            return;
        }
        else if (literal == "-inf" || literal == "-inff")
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: Overflow" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
            return;
        }
        else if (literal == "+inf" || literal == "+inff")
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: Overflow" << std::endl;
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
            return;
        }

        if (isSingleChar(literal))
        {
            char charValue = literal[0];
            std::cout << "char: '" << charValue << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(charValue) << std::endl;
            std::cout << "float: " << static_cast<float>(charValue) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(charValue) << std::endl;
            return;
        }
        
        if (!isNumeric(literal))
        {
            std::cout << "Conversion error: Invalid numeric input" << std::endl;
            return;
        }
    
        double value = std::stod(literal);

        this->printChar(value);
        this->printInt(value);
        this->printFloat(value);
        this->printDouble(value);
    }
    catch (std::exception &e)
    {
        std::cout << "Conversion error: " << e.what() << std::endl;
    }
}

void    Scalar::printChar(double value)
{
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    else
    {
        char    CharValue = static_cast<char>(value);
        if (!std::isprint(static_cast<int>(CharValue)))
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char: '" << CharValue << "'" << std::endl;
        }
    }
}

void    Scalar::printInt(double value)
{
    if (value < std::numeric_limits<int>::min() || value >std::numeric_limits<int>::max())
    {
        std::cout << "Int: Overflow" << std::endl;
    }
    else
    {
        std::cout << "Int: " << static_cast<int>(value) << std::endl;    
    }
}

void    Scalar::printFloat(double value)
{
        if (isnan(value))
            std::cout << "float: nanf" << std::endl;
        else if (value == std::numeric_limits<float>::infinity())
            std::cout << "float: +inff" << std::endl;
        else if (value == std::numeric_limits<float>::infinity())
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
}

void    Scalar::printDouble(double value)
{
    if (std::isnan(value))
        std::cout << "double: nan" << std::endl;
    else if (value == std::numeric_limits<double>::infinity())
        std::cout << "double: +inf" << std::endl;
    else if (value == -std::numeric_limits<double>::infinity())
        std::cout << "double: -inf" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
}

void    ScalarConverter:: convert(const std::string &literal)
{
    Scalar  ScalarInstance;

    ScalarInstance.execute(literal);
}