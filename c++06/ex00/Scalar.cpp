/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 02:08:42 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 22:59:37 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

// orhtodox canonical form

Scalar::Scalar() {}

Scalar::~Scalar() {}

Scalar::Scalar(const Scalar & src)
{
    *this = src;
}

Scalar & Scalar::operator=(const Scalar & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

int Scalar::isDigit(int c)
{
    return (c >= '0' && c <= '9');
}

size_t Scalar::strlength(const std::string &str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

bool Scalar::isChar(const std::string& literal)
{
    return this->strlength(literal) == 1 && std::isprint(literal[0]) && !this->isDigit(literal[0]);
}

bool Scalar::isInt(const std::string& literal)
{
    if (literal.back() == 'f' || literal.back() == 'F')
        return false;
    if (!this->isDigit(literal[0]) && literal[0] != '+' && literal[0] != '-')
        return false;
    for (size_t i = 1; i < this->strlength(literal); i++)
    {
        if (!this->isDigit(literal[i]))
            return false;
    }
    return true;
}

bool Scalar::isDouble(const std::string& literal)
{
    if (this->countDot(literal) > 1 || this->countf(literal) > 1)
        return false;
    if (literal.back() == 'f' || literal.back() == 'F')
        return false;
    if (!this->isDigit(literal[0]) && literal[0] != '+' && literal[0] != '-')
        return false;
    for (size_t i = 1; i < this->strlength(literal); i++)
    {
        if (!this->isDigit(literal[i]) && literal[i] != '.')
            return false;
    }
    return true;
}


bool Scalar::isFloat(const std::string& literal)
{
    if (this->countDot(literal) > 1 || this->countf(literal) > 1)
        return false;
    if (literal.back() != 'f' && literal.back() != 'F')
        return false;
    if (!this->isDigit(literal[0]) && literal[0] != '+' && literal[0] != '-')
        return false;
    for (size_t i = 1; i < (this->strlength(literal) - 1); i++)
    {
        if (!this->isDigit(literal[i]) && literal[i] != '.' && literal[i] != 'f' && literal[i] != 'F')
        {
            return false;
        }
    }
    return true;
}
// count utils
int Scalar::countDot(const std::string &literal)
{
    int count = 0;
    for (size_t i = 0; i < this->strlength(literal); i++)
    {
        if (literal[i] == '.')
            count++;
    }
    return count;
}

int Scalar::countf(const std::string &literal)
{
    int count = 0;
    for (size_t i = 0; i < this->strlength(literal); i++)
    {
        if (literal[i] == 'f' || literal[i] == 'F')
            count++;
    }
    return count;
}

std::string Scalar::check_type(std::string literal)
{
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: mpossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return "NULL";
    }
    else if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return "NULL";
    }
    else if (literal == "+inf" || literal == "+inff")
    {
        std::cout << "impossible" << std::endl;
        std::cout << "impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return "NULL";
    }
    if(isChar(literal))
        return "char";
    else if(isInt(literal))
        return "int";
    else if(isFloat(literal))
        return "float";
    else if(isDouble(literal))
        return "double";
    else
    {
        std::cout << "Conversion error: Invalid input" << std::endl;
        return "NULL";
    }
}

void    Scalar::execute(const std::string &literal)
{
    if (literal.empty())
    {
        std::cout << "Conversion error: Empty input" << std::endl;
        return;
    }
    if (this->check_type(literal) != "NULL")
    {
        if (this->isChar(literal))
        {
            char charValue = literal[0];
            std::cout << "char: '" << charValue << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(charValue) << std::endl;
            std::cout << "float: " << static_cast<float>(charValue) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(charValue) << std::endl;
            return;
        }
        if ( this->isFloat(literal))
        {
            literal.substr(0, this->strlength(literal) - 1);
        }
        double value = strtod(literal.c_str(), NULL);
        this->printChar(value);
        this->printInt(value);
        this->printFloat(value);
        this->printDouble(value);
        return;
    }
    // if (this->isChar(literal))
    // {
    //     char charValue = literal[0];
    //     std::cout << "char: '" << charValue << "'" << std::endl;
    //     std::cout << "int: " << static_cast<int>(charValue) << std::endl;
    //     std::cout << "float: " << static_cast<float>(charValue) << "f" << std::endl;
    //     std::cout << "double: " << static_cast<double>(charValue) << std::endl;
    //     return;
    // }
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
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
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

// void    ScalarConverter::convert(const std::string &literal)
// {
//     Scalar  ScalarInstance;

//     ScalarInstance.execute(literal);
// }