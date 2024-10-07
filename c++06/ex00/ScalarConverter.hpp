/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:38:11 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/25 23:00:12 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cctype>

class   ScalarConverter
{
    private:
        ScalarConverter(); 
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter & src);
        ScalarConverter & operator=(const ScalarConverter & src);
    public:
        static void convert(const std::string &literal);

};