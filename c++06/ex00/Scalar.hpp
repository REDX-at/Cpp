/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:50:16 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 22:59:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScalarConverter.hpp"

#include "cmath"
#include <limits>
#include <iomanip>

class   Scalar
{
    public:
        Scalar();
        ~Scalar();
        Scalar(const Scalar & src);
        Scalar & operator=(const Scalar & src);
        void        execute(const std::string &literal);
    private:
        void        printChar(double value);
        void        printInt(double value);
        void        printFloat(double value);
        void        printDouble(double value);
        
        bool        isChar(const std::string& literal);
        bool        isInt(const std::string& literal);
        bool        isDouble(const std::string& literal);
        bool        isFloat(const std::string& literal);

        int         isDigit(int c);
        size_t      strlength(const std::string &str);

        std::string check_type(std::string literal);
};
