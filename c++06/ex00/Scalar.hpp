/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:50:16 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 02:28:24 by aitaouss         ###   ########.fr       */
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
        void    execute(const std::string &literal);
    private:
        void    printChar(double value);
        void    printInt(double value);
        void    printFloat(double value);
        void    printDouble(double value);
};
